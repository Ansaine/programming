#include <stdio.h>          //1914116 Angshuman Das
#include <stdlib.h>
#include <string.h>

#define MAX 101

char stack[MAX];
int size=-1;

char peek()
{
    if(size!=-1)
        return stack[size];
    else return '0';

}
void push(int element)
{
    if(size>=(MAX-1))
    {
        printf("Size maxed out")   ;
    }
    else
    {
        stack[size+1]=element;
        size++;

    }
}

void pop()
{
    if(size>=0)
        size--;
}

char associativity(char a)
{
    if(a == '^')
        return 'R';

    else if(a == '*' || a == '/')
        return 'L';

    else if(a == '+' || a == '-')
        return 'L';

}

int precedence(char symbol)
{
	if(symbol == '^')
        return 3;

	else if(symbol == '*' || symbol == '/')
        return 2;

	else if(symbol == '+' || symbol == '-')
            return 1;
	else
            return 0;

}

void decide(char symbol)        //using all the rules for stack
{
    if(size==-1 || peek()=='(' )

        push(symbol);

    else if(symbol == '(')

        push(symbol);

    else if(symbol == ')')
    {
        do
        {

            printf("%c",stack[size]);
            pop();

        }while(peek()!= '(');
        pop();

    }

    else if (precedence(symbol)>precedence(peek()))
        push(symbol);

    else if(precedence(symbol)<precedence(peek()))
        do{
            printf("%c",peek());
            pop();
        }while(precedence(symbol)<precedence(peek()));

    else if(precedence(symbol)==precedence(peek()))
    {
        if(associativity(symbol)=='L')
        {
            printf("%c",peek());
            pop();
            push(symbol);

        }

        else
            push(symbol);
    }

}

int main()
{
    char expression[100];
    printf("Enter expression (without space) : ");
    scanf("%s",expression);

    int length=strlen(expression);

    for(int i =0; i<length;i++)
    {

        int temp = (int)expression[i];

        if((temp>=65 && temp<=90) || (temp>=97 && temp<=122) || (temp>=48 && temp<=57))
            printf("%c",temp);
        else
            decide(expression[i]);

    }

    for(int i=size;i>=0;i--)
        printf("%c",stack[i]);


    return 0;
}

