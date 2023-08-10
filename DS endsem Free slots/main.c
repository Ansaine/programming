#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a , int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

int min(int a , int b)
{
    if (a<=b)
        return a;
    else
        return b;
}

struct time       //time node
{
    int start_time;
    int end_time;
    struct time* next;
};

typedef struct time Time;       //using type def for declaring struct time

int meeting_duration; //meeting duration made a global variable

int add_time(int a, int b)      //made add time function but not required as only subtraction required

{
    int h,m;

    h=a/100 + b/100;

    if((a%100 + b%100)>60)
        m=a%100 + b%100 - 60;
        h++;

    return h*100 + m;

}

int sub_time(int a,int b)

{                       //considering time a is greater than b
    int h,m;

    if(a/100 != b/100)
    {
        h=a/100-b/100;         //seeing minute scale to calculate hour difference
        m=a%100-b%100;

        if(m<0)
            m=m+60;
            h--;



        return h*100 + m;
    }

    else
            return a%100-b%100;



}





void dueMeeting(Time* head, int start_time, int end_time)        //makes or adds a node
{
    Time* new_meeting = (Time*)malloc(sizeof(Time));
    new_meeting->start_time = start_time;
    new_meeting->end_time = end_time;
    new_meeting->next = NULL;

    if(head == NULL) {
        head = new_meeting;
        return;
    }

    Time* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = new_meeting;

    return;
}

Time* free_time_slots(Time* person_meetings, Time* person_bounds)
{
    if(person_meetings->start_time < person_bounds->start_time)
        exit(-1);

    Time* temp = person_meetings;
    Time* person_free_slots = NULL;

    while(temp != NULL)
    {
        if(temp == person_meetings)
            dueMeeting(person_free_slots, person_bounds->start_time, temp->start_time);
        else if(temp->next == NULL)
            dueMeeting(person_free_slots, temp->end_time, person_bounds->end_time);
        else
            dueMeeting(person_free_slots, temp->end_time, temp->next->start_time);

        temp = temp->next;
    }

    return person_free_slots;
}

void meeting_calendar(Time* person)
{
    int start_time, end_time;

    while(1) {
        scanf("%d", &start_time);

        if(start_time == 0)
            break;

        scanf("%d", &end_time);

        dueMeeting(person, start_time, end_time);
    }
}

void meeting_bounds(Time* person)
{
    int start_time, end_time;

    scanf("%d", &start_time);
    scanf("%d", &end_time);

    dueMeeting(person, start_time, end_time);
}

void possible_meetings(Time* person1_free_slots, Time* person2_free_slots)
{


    Time *trav1 = person1_free_slots;
    Time *trav2 = person2_free_slots;

    do
    {
        if(trav1->end_time<trav2->start_time)       //if one time node is completely ahead of the other
            trav1=trav1->next;
            continue;

        if(trav2->end_time<trav1->start_time)
            trav2=trav2->next;
            continue;

       if((max(trav1->end_time,trav2->end_time)-max(trav1->start_time,trav2->start_time))>=meeting_duration)      //if intersection time is enough for meeting
            printf("%d",sub_time(min(trav1->end_time,trav2->end_time),max(trav1->start_time,trav2->start_time)));    //printing difference


        if(trav1->end_time<trav2->end_time)     //choosing which node to increment
            trav1=trav1->next;
        else if(trav1->end_time>trav2->end_time)
            trav2=trav2->next;
        else
            trav1=trav1->next;
            trav2=trav2->next;

    }while(trav1->next!=NULL && trav2->next!=NULL);
}

int main()
{
    Time *person1_meetings, *person1_bounds, *person2_meetings, *person2_bounds;
    person1_meetings = person1_bounds = person2_meetings = person2_bounds = NULL;


    printf("Enter meeting times for 1st person in ascending order: (ENTER 0 to exit)\n");
    meeting_calendar(person1_meetings);

    printf("Enter daily time bounds for 1st person: ");
    meeting_bounds(person1_bounds);

    printf("Enter meeting times for 2nd person in ascending order: (ENTER 0 TO EXIT)\n");
    meeting_calendar(person2_meetings);

    printf("Enter daily time bounds for 2nd person: ");
    meeting_bounds(person2_bounds);

    printf("Enter required duration of the meeting: (0 or negative integers are not applicable)\n");
    scanf("%d", &meeting_duration);

    if(meeting_duration <= 0)
        exit(-1);

    Time* person1_free_slots = free_time_slots(person1_meetings, person1_bounds);
    Time* person2_free_slots = free_time_slots(person2_meetings, person2_bounds);

    possible_meetings(person1_free_slots, person2_free_slots);



}
