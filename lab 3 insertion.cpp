#include <iostream>

using namespace std;

struct node{
    int info;
    node *next;
    node *prev;
};

class list{
    
    private:
        node *head, *temp, *temp1; 
        int key;
        
    public:
        list(){
            head = temp = temp1 = NULL;
        }     
        
    void insert() {
        if(head = NULL){
            head = new node;
            cout<< "Enter the value of node";
            head -> info;
            head -> next = head;
            head -> prev = head;
            return;
        }
        else{
            while(temp -> next == head){
                temp1 = new node;
                cout<< "Enter the value of node ";
                cin >> head -> info;
                temp1 -> next = temp -> next;
                temp1 -> prev = temp;
                temp -> next = temp1;
                temp -> next -> prev = temp1;
                
            }
        }
    } 
	
	void del(){
		    if(head == NULL){
		    	cout<<"The list is empty"<<endl;
			}
			else{
			cout<<"Enter any value to delete that value:  ";
			key=6;
			temp = head;
			}
			
		
		if(head -> info ==key){
				if(head -> next = head){
			delete head;
			head = NULL;
		}
		else{
			head = head -> next;
			temp -> prev -> next = temp -> next;
			temp -> next -> prev = temp -> prev;
			delete temp;
			temp = NULL;
			
		}
	}
	else if(temp -> info == key){
		temp -> prev -> next = temp -> next;
		temp -> next -> prev = temp -> prev;
		delete temp;
		temp = NULL;
			
	}
	while(temp != head);
}   
};

int main(){
    list obj1;
    
    obj1.insert();
    return 0;
}
