#include <iostream>

using namespace std;

struct node{
    int value;
    node *next;
   
    node(int val)
    {
        value = val;
        next = Null;
    }
}



class Linkedlist
{
    node *head;
    int length;

    public:

        Linkedlist()
        {
            head = NULL;
            length= 0;
        }

        void insert(int val, int pos)
        {
            node *n1 = new node(int val);
            node *current = head;

            if((pos<1) or (pos > (lenght+2)))
            {
                cout<<"Cannot insert the element at this invalid position"
            }
            
            else if(pos == 1)
            {
                head = n1;
                length++;
            }

            else if(pos == (length+1))
            {
                node *current = head;
                for(int i=1; i < length ; i++)
                {
                    current = current->next;
                }
                current->next=n1;
                length++;
            }
            else
            {
                node *current = head;
                for(int x = 1; x < pos; x++)
                {
                    current = current -> next;
                }
                n1->current = current;
            }

        }
}