#include <iostream>

using namespace std;

struct node{
	int info;
	node* right;
	node* left;
};

class BST{
	private:
		
		
	public:
		node* root;
		BST()
		{
			root=NULL;
		}
		
		void insert(int key, node *&temp)
		{
			if(temp == NULL)
			{
				temp = new node;
				temp -> info = key;
				temp -> right = temp -> left = NULL;
			}
			
			else if (key == temp -> info)
			{
				cout<<"Duplication is not allowed"<<endl;
			}
			
			else if (key > temp -> info)
			{
				 insert(key , temp->right);
				return;
			}
			
			else if (key < temp -> info)
			{
				 insert(key , temp -> left);
				return;
			}
		}
		
		node* search(int key, node*&temp)
		{
			if (root == NULL)
			{
				cout<<"Tree is empty"<<endl;
				return NULL;
			}
			
			else if (temp->info == key)
			{
				return temp;
			}
			
			else if(temp -> right !=NULL && key > temp -> info)
			{
				 search (key, temp -> right);
			}
			
			else if(temp -> left !=NULL && key < temp -> info)
			{
				 search (key, temp -> left);
			}
			
			else if (temp -> left == NULL && temp -> right == NULL)
			{
				cout<<"key not found"<<endl;
				return NULL;
			}
			
		}
		
		int successor(int key)
		{
			node *temp1, *temp2;
			if(key == root -> info)
			{
				temp1 = search(key, root);
				if (temp1 -> right != NULL)
				{
					if (temp1 -> right -> left == NULL)
					{
						return temp1 -> right -> info;
					}
					else
					{
						temp2 = temp1 -> right;
						while(temp2 -> left != NULL)
						{
							temp2 = temp2 -> left;
						}
						return temp2->info;
					}
				}
			}
			
			else
			{
				cout<<"The key is not in tree"<<endl;
				return NULL;
			}
		}
	
		int ancestor(int key, node *&temp)
		{
			if (key<temp->info)
			{
				ancestor=temp->info;
			}
			if (key>temp->info)
			{
				ancestor=temp->info
			}
		}
		
		node *backsearch(int key, node *&temp)
		{
			if(temp->left != NULL)
			{
				if(key == temp -> left -> info)
				{
					cout<<temp -> info<<" ";
					return temp;
				}
			}
			if(key>temp->info)
			{
				backsearch(key,temp->right)	
			}
			if(key<temp->info)
			{
				backsearch(key,temp->left);
			}
		}
			
};

int main()
{
   BST tree;
   
   tree.insert(6,tree.root);
   tree.insert(10,tree.root);
   tree.insert(5,tree.root);
   tree.insert(8,tree.root);
   tree.insert(2,tree.root);
   tree.insert(3,tree.root);
   tree.insert(6,tree.root);
   tree.insert(10,tree.root);
   tree.successor(67);
   //node* temp;
   //temp=tree.search(0,tree.root);
   //cout<<temp<<endl;
   //tree.successor(10);
 return 0;  
}
