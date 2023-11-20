#include <iostream>
using namespace std;

struct Node  // creating node data type
{
    int data;
    Node *next;
};

class Linked_List  // class of a linked list
{ 
    Node *head,*head2, *current, *temp;  //pointers of node data type

    public: 

        Linked_List()  // constructor in which intializing head with NULL
        {
            head = NULL;
        }

        // Insert new node at Head
        void insert_at_head( int key)
        {
            if ( head == NULL)  // checking if head is NULL and if it is NULL insert a node at head
            {
                head = new Node;
                head -> data = key;
                head -> next = NULL;

                return;
            }

            temp = new Node;  // otherwise insert node before the current head and make that head
            temp -> data = key;
            temp -> next = head;
            head = temp;

            return;
        }

        // Insert new node at Tail
        void insert_at_tail( int key) 
        {
            if ( head == NULL)     // checking if head is NULL and if it is NULL insert a node at head
            {
                head = new Node;
                head -> data = key;
                head -> next = NULL;

                return;
            }

            temp = head;

            while ( temp -> next != NULL) // otherwise insert node after the current tail and make that tail
                temp = temp -> next;

            Node *temp1 = new Node;
            temp1 -> data = key;
            temp1 -> next = NULL;
            temp -> next = temp1;

            return;
        }
        
        void concatinate() // concatinating two list
		{
			Node *temp1,*temp2; // initalizing two node type pointers
			temp1=head;
			temp2=head;
			if ( temp1 == NULL  || temp2 == NULL) // checking if both list are null
        	{
        		cout<<"one of the list is empty"<<endl;
                return;
            }
			
			while(temp1!=NULL) // positioning pointer at the last node of first list and then making it's next equal 
			{                    // to head of other list
				temp1=temp1->next;	
			}
			
			temp1->next = temp2;	
		}

        // Insert at given key
        void insert_at_key( int find, int key)
        {
            if ( head == NULL)
            {
                cout << "\nList is empty." << endl;
                return;
            }

            temp = head;

            while ( temp != NULL)
            {
                if ( temp -> data == find)
                {
                    Node * temp1 = new Node;
                    temp1 -> data = key;
                    temp1 -> next = temp -> next;
                    temp -> next = temp1;

                    return;
                }

                temp = temp -> next;
            }

            cout << "\nKey not found." << endl;
            return;
        }


	    void copy_reverse() // copying elements in reverse order in other linked list
    	{
        	current = head;
        	Node *prev = NULL, *next = NULL;
 
        	while (current != NULL) {
            	// Store next
            	next = current->next;
 
            	// Reverse current node's pointer
            	current->next = prev;
 
            	// Move pointers one position ahead.
            	prev = current;
            	current = next;
        	}
        	head = prev;
        	current = head;
        	
        	Node *head2;
        	temp = head2;
        	while(current != NULL)
        	{
        		temp = new Node;
        		temp->data=current->data;
        		temp->next=current->next;
        		temp = current ->next;
			}
			
    	}
    	
    	void value_swap() // swaping the values of head and tail
    	{

    		temp = head;
    		
    		while(temp != NULL)
    		{
    			temp = temp->next;
			}
			int x=temp->data;
			temp->data=head->data;
			head->data=x;
		}

        void deletion( int key)
        {
            Node *temp1 = search( key);

            temp = head;
            
            while ( temp -> next != temp1)
                temp = temp -> next;

            temp -> next = temp1 -> next;
            delete temp1;

            return;
        }

        Node *search( int key) // searching a node by its value 
        {
            if ( head == NULL)
            {
                cout << "\nList is empty.";
                return NULL;
            }

            temp = head;

            while( temp != NULL)
            {
                if( temp -> data == key)
                {
                    return temp;
                }
                temp = temp -> next;
            }
        }

        void print()
        {
            if ( head == NULL)
            {
                cout << "\nList is empty." << endl;
                return;
            }

            temp = head;

            while ( temp != NULL)
            {
                cout << temp -> data << "\t";
                temp = temp -> next;
            }

            cout << endl;

            return;
        }
};

int main()
{
    Linked_List l;
	
	l.insert_at_tail(4);
	l.insert_at_tail(5);
	l.insert_at_tail(6);
	l.insert_at_tail(7);
    cout<<"values of linked list before swapping the values of head and tail"<<endl;
	l.print();
	l.value_swap();
//	cout<<"values of linked list after swapping the values of head and tail"<<endl;
//	l.print();
//	l.concatinate();
//	cout<<"concatinated two list successfully"<<endl;
//	l.copy_reverse();
//	cout<<"copying all the values of list in reverse order in other list"<<endl;
//	l.print();
	
    
}
