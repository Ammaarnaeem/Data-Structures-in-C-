#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
struct record{
	string name;
	int model_num;
	float price;
}; 

void display(record pass[],int size)
{
	
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter The name of student "<<i+1<<" is "<<pass[i].name<<endl;
		cout<<"Enter The model number "<<pass[i].model_num<<endl;
		cout<<"Enter The price "<<pass[i].price<<endl;
	}
	
}

int main(){
	
	record r1;
	
	struct record st[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		cout<<"Enter The name of student "<<i+1<<endl;
		cin>>st[i].name;
		cout<<"Enter The model number "<<endl;
		cin>>st[i].model_num;
		cout<<"Enter The price "<<endl;
		cin>>st[i].price;
	}
	
	display(st,3);
	
	return 0;
}

