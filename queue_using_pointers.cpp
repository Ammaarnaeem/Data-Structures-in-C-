#include <iostream>

using namespace std;

struct node{
	int data;
	node *next;
};

class queue{
	private:
		node *front, *rear , *temp;
	
	public:
		queue(){
			node *front=NULL;
			node *rear = NULL;
		}
		
		void enqueue(int val)
		{
			if(rear==NULL)
			{
				rear = new node;
				rear -> data = val;
				rear -> next = NULL;
				front = rear;
			}
			else 
			{
				temp = new node;
				temp -> data = val;
				rear -> next = temp;
				temp -> next = NULL;
				rear = temp;
			}
		}
		
		void dequeue(int val)
		{
			temp = front;
			if(front == NULL)
			{
				cout<<"Underflow"<<endl;
			}
			
			else if(temp->next == NULL)
			{
				temp = temp -> next;
				cout<<"The deleted element is "<<front->data<<endl;
				free(front);
				front = temp;
			}
		}
		
		void display()
		{
			temp = front;
			if(front == NULL && rear == NULL)
			{
				cout<<"The queue is empty"<<endl;
				return;
			}
			cout<<"The elements of queue are ";
			while(temp != NULL)
			{
				cout<< temp -> data<<endl;
				temp = temp -> next;
			}
		}
};
