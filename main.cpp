#include <iostream>
#define SIZE 6      //Maximum size of the queue
using namespace std;

int front = -1; //can be any number 
int rear = -1; // can be any number
int A[SIZE];

bool isempty()
{
if(front == -1 && rear == -1)
return true;
else
return false;
}

void queueEnqueue(int value)
{
    if (rear==SIZE-1)   // Queue is full
    cout << "Queue is full\n";
        if(front == -1) //first is inserted
            front = 0;
        rear++;
        A[rear] = value;    //insert at the rear
}

void queueDequeue()
{
    if(isempty())
        cout << "Queue is empty\n";
        if(front == rear) // only one
            front = rear = -1;
        else 
            front++;
}

void queueFront()
{
    if(isempty())
        cout << "Queue is empty\n";
        else
            cout << "Element at front is: " << A[front];    //displays which number is front of queue
}

void queueDisplay()
{
    if(isempty())
        cout << "Queue is empty\n";
        for(int i=front; i<=rear; i++){
            cout << "Queue Display: " << A[i] << " \n";       //Displays the numbers in the queue
    }
}

// driver main code
int main()
{
    queueEnqueue(0);        // Numbers being inserted into the queue
    queueEnqueue(8);
    queueEnqueue(29);
    queueEnqueue(5);
    queueEnqueue(15);
    queueEnqueue(90);

    queueDequeue();
    
    queueFront();
    cout << "\n" << endl;
    
    queueDisplay();
    cout << "\n" << endl;
    
    return 0;
}