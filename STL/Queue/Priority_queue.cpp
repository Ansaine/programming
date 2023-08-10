#include <iostream>
#include <queue>

using namespace std;

int main()
{   
    // By default it creates a max heap - descending order
    priority_queue<int> pq ;

    /* Important functions

    push()      - adds elements to last
    pop()       - deletes element from front
    size()
    top()
    back()
    empty()     - returns true if queue is empty

    */

    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(1);

    // All this will be stored as 30,20,10,5,1;

    // Min heap - ascending order
    priority_queue <int, vector<int>, greater<int>> pq;




}


