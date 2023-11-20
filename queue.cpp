#include<iostream>

using namespace std;

class queue{
	
	private:
		int front;
		int rear;
		int arr[5]
		
	public:
		queue()
		{
			front = -1;
			rear = -1;
			for(int i=0; i<5 ; i++ )
			{
				arr[i]=0;
			} 
		}
		
		bool IsEmpty()
		{
			if(front == -1 && rear == -1)
			{
				return True
			}
			else
			{
				return False
			}
		}
		
		bool IsFull()
		{
			if(rear == size(arr)-1)
			{
				return True
			}
			else
			{
				return False
			}
		}
		
		void enqueue(int value)
		{
			if(IsFull())
			{
				Cout<<"The queue is Full"<<endl;
			}
			else if(IsEmpty())
			{
				rear = front = 0;
			}
			else
			{
				rear++;
			}
			arr[rear]=value;
		}
		
		void dequeue(int value)
		{
			if(IsEmpty())
			{
				cout<<"The queue is Empty"<<endl;
			}
			else if(front == rear)
			{
				x = arr[front];
				front = rear = -1;
			}
			else
			{
				x = arr[front];
				front++
			}
			return x;
		}
		
		void showqueue()
		{
			int x = size(arr);
			if(IsEmpty())
			{
				cout<<"The is queue is empty"<<endl;
			}
			else if(IsFull())
			{
				for(int i =0; i<x; i++)
				{
					cout<<arr[i]<<endl;
				}
			}
			else
			{
				int z = rear;
				for(int i=0; i<z; i++)
				{
					cout<<arr[i]<<endl;
				}
			}
		}
		
		int length_of_queue()
		{
			return(front - rear + 1);
		}
};
