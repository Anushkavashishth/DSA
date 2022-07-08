#include<iostream>
using namespace std;
#define MAX_SIZE 101

//creating a class named queue
class queue{
    private:
            int A[MAX_SIZE];
            int front, rear;
    public:
            // constructor
            queue()
            {
                front = -1;
                rear = -1;
            }

            //to check if queue is empty or not
            bool IsEmpty()
            {
                if(front==-1&&rear==-1)
                return true;
                else
                return false;
            }

            //to check if queue is full or not
            bool IsFull()
            {
                if((rear+1)%MAX_SIZE==front)
                return true;
                else
                return false;
            }
            
            //inserting an element in queue
            void Enqueue(int x)
            {
                if(IsFull())
                {
                    cout<<"Queue is full ";
                    return;
                }

                else if(IsEmpty())
                {
                    front = 0;
                    rear = 0;
                }
                
                else
                {
                    rear = (rear+1)%MAX_SIZE;
                }
             
             A[rear] = x;

            }

            //removing an element
            void Dequeue()
            {
                if(IsEmpty())
                {
                    return;
                }
                else if(front==rear)
                {
                    front = -1;
                    rear = -1;
                }
                else
                front = (front+1)%MAX_SIZE;
            }

            //return front value
            int Front()
            {
                //if queue is empty
                if(IsEmpty())
                {
                    cout<<"Cannot return from empty queue\n";
                    return -1;
                }
                else
                return A[front];
            }

            void Print()
            {
                int count = (rear+MAX_SIZE-front)%MAX_SIZE+1;
                cout<<"Queue:  ";
                for(int i=0;i<count;i++)
                {
                    int index = (front +i )%10;
                    cout<<A[index];
                }
                cout<<"\n\n";
            }
};
int main(){
    queue Q;//creating an instance of queue
    Q.Enqueue(2);  Q.Print();  
   Q.Enqueue(4);  Q.Print();  
   Q.Enqueue(6);  Q.Print();
   Q.Dequeue();	  Q.Print();
   Q.Enqueue(8);  Q.Print();


}