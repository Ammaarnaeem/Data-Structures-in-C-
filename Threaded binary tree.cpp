#include <iostream>

using namespace std;

struct node{
	int info;
	int leftbit;
	int rightbit;
	node *right;
	node *left;

};

class TBST{
		private:
		
		
	public:
		node *root, *dummy, *temp1;
		TBST()
		{
			dummy = new node;
			dummy->leftbit= 0;
			dummy->rightbit=1;
			dummy->left = dummy->right = dummy;
			root=NULL;
		}
		
		void insert(int key, node *temp)
		{
			if(temp == NULL)
			{
				root = new node;
				root-> info = key;
				root->right = dummy;
				root->left = dummy;
				root->leftbit=root->rightbit=0;
				dummy->left = root;
			}
			
			else if (key == temp -> info)
			{
				cout<<"Duplication is not allowed"<<endl;
			}
			
			else if (key > temp -> info)
			{
				if(temp->rightbit==0){
					temp1 = new node;
					temp1->info=key;
					temp1->right=temp->right;
					temp->right = temp1;
					temp1->rightbit=temp->rightbit;
					temp->rightbit=1;
					temp1->left=temp;
					return;
				}
				else{
					insert(key, temp->right);
			}
		}
			
			else if (key < temp -> info)
			{
				if(temp->leftbit==0){
					temp1 = new node;
					temp1->info=key;
					temp1->left=temp->left;
					temp->left = temp1;
					temp1->leftbit=temp->leftbit;
					temp->leftbit=1;
					temp1->right=temp;
					
					return;
				}
				else{
					insert(key, temp->left);
				}
				
			}
		}
		
		void inorder(node *temp)
		{
			if(temp == NULL)
			{
				return;
			}
			inorder(temp->left);
			cout<< temp->info<<" "; 
			inorder(temp->right);
		}
		
		void deletion(int key,node *temp)
		{
			if(root = NULL)
			{
				cout<<"The tree is empty"<<endl;
				return;
			}
			
			if(temp->left->info == key)
			{
				delete_node(temp->left,temp);
				return;
			}
			
			if(temp!=dummy && temp->right->info==key)
			{
				delete_node(temp->right,temp);
				return;
			}
			
			if(temp == dummy)
			{
				deletion(key,temp->left);
				return;
			}
			if(key>temp->info && temp->rightbit == 1)
			{
				deletion(key,temp->right);
				return;
			}
			if(key<temp->info && temp->leftbit == 1)
			{
				deletion(key,temp->left);
				return;
			}
			
			cout<<"value doesn't exists "<<endl;
			return;
		}
		
		node* find_successor(node *temp, node *&parent)
		{
			if(temp->leftbit==0)
			{
				return temp;
			}
			parent = temp;
			return find_successor(temp->left,parent);
		}
		
		void delete_node(node *temp,node *parent)
		{
			if(temp->leftbit==1 && temp->rightbit==1)
			{
				node *successor_parent = temp;
				node *successor = find_successor(temp->right,successor_parent);
				temp->info = successor->info;
				delete_node(successor,successor_parent);
				return;
			}
				
			if(temp->leftbit==1 && temp->rightbit==0)
			{
				
				if(temp->info < parent->info)
				{
					parent->left=temp->left;
					parent->leftbit=temp->leftbit;
				}
				else
				{
					parent->right=temp->left;
					parent->rightbit=temp->leftbit;
				}
				node *temp2 = temp -> left;
				while(temp2->rightbit !=0)
				{
					temp2 = temp2->right;
				}
				temp2->right=temp->right;
				delete temp;
			}
			if(temp->leftbit==0 && temp->rightbit==1)
			{
				
				if(temp->info < parent->info)
				{
					parent->right=temp->right;
					parent->rightbit=temp->rightbit;
				}
				else
				{
					parent->left=temp->right;
					parent->leftbit=temp->rightbit;
				}
				node *temp2 = temp -> right;
				while(temp2->leftbit !=0)
				{
					temp2 = temp2->left;
				}
				temp2->left=temp->left;
				delete temp;
			}		
				
			if(temp->leftbit==0 && temp->rightbit==0)
			{
				if(parent->left==temp)
				{
					parent->left==temp->left;
					parent->leftbit==0;
				}
				if(parent->right==temp && parent!=dummy)
				{
					parent->right=temp->right;
					parent->rightbit=0;
				}
				if(temp==root)
				{
					root = NULL;
					dummy->left=dummy;
					dummy->leftbit=0;
				}
				delete temp;
			}
		
		}

};

int main()
{
   TBST tree;
   
   tree.insert(6,tree.root);
   tree.insert(10,tree.root);
   tree.insert(5,tree.root);
   tree.insert(8,tree.root);
   tree.insert(2,tree.root);
   tree.insert(3,tree.root);
   tree.insert(6,tree.root);
   tree.insert(10,tree.root);
   tree.inorder(tree.root);
}

//			if (root->info==key)
//			{
//				if(root->leftbit == 0 && root->rightbit == 0)
//				{
//					delete root;\
//					root = NULL;
//					dummy->left = dummy;
//					dummy->leftbit = 0;
//					return;  	
//				}
//				if(root-info>leftbit==1 && root->rightbit == 0 )
//				{
//					root->left->right=root->right;
//					root->left->rightbit = root->rightbit;
//					dummy->left = root->left;
//					root = root->left;
//					delete temp;
//					return;
//				}
//				
//				if(root-info>leftbit==0 && root->rightbit == 1 )
//				{
//					root->right->left=root->left;
//					root->right->leftbit = root->lefttbit;
//					dummy->right = root->right;
//					root = root->right;
//					delete temp;
//					return;
//				}
//			}
