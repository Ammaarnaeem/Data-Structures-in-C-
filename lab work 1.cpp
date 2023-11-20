#include <iostream>

using namespace std;

void increment_all (int* start, int* stop)
{
 int * current = start;
 while (current != stop) {
 ++(*current); // increment value pointed
 ++current; // increment pointer
 }
}
void print_all (const int* start, const int* stop)
{
 const int * current = start;
 while (current != stop) {

 cout << *current << '\n';
 ++current; // increment pointer
 }
}


int main(){
	
		//int a=20;
		//int* foo = &a;
		//int baz = *foo;
		
		//cout<<a<<endl;
		//cout<<foo<<endl;
		//cout<<*foo<<endl;
		//cout<<baz<<endl;
	 
	 
	 //int firstvalue, secondvalue;
	 //int * mypointer;
	 //mypointer = &firstvalue;
	 //*mypointer = 10;
	 //mypointer = &secondvalue;
	 //*mypointer = 20;
	 //cout << "firstvalue is " << firstvalue << '\n';
	 //cout << "secondvalue is " << secondvalue << '\n';
	 
	 
	 //int firstvalue = 5, secondvalue = 15;
	 //int * p1, * p2;
	 //p1 = &firstvalue; // p1 = address of firstvalue
	 //p2 = &secondvalue; // p2 = address of secondvalue
	 //*p1 = 10; // value pointed to by p1 = 10
	 //*p2 = *p1; // value pointed to by p2 = value pointed to by p1
	 //p1 = p2; // p1 = p2 (value of pointer is copied)
	 //*p1 = 20; // value pointed to by p1 = 20
	 
	 //cout << "firstvalue is " << firstvalue << '\n';
	 //cout << "secondvalue is " << secondvalue << '\n';



	 //int numbers[5];
	 //int * p;
	 //p = numbers; *p = 10;
	 //p++; *p = 20;
	 //p = &numbers[2]; *p = 30;
	 //p = numbers + 3; *p = 40;
	 //p = numbers; *(p+4) = 50;
	 //for (int n=0; n<5; n++)
	 //cout << numbers[n] << ", ";

	 //int arr[4] = {1,2,3,4};
	 //int* x = arr;
	 //cout<<"Address: "<<x<<endl;
	 //cout<<*x++<<endl;
	 
	 //cout<<"Address: "<<x<<endl;
	 //cout<<*++x<<endl;
	 
	 //cout<<"Address: "<<x<<endl;
	 //cout<<++*x<<endl;
	 
	 //cout<<"Address: "<<x<<endl;
	 //cout<<(*x)++<<endl;
	 
	 //for (int i=0;i<4;i++)
	 //{
	 //	cout<<arr[i]<<endl;
	 //}
	 
	 //int numbers[] = {10,20,30};
     //increment_all (numbers,numbers+3);
     //print_all (numbers,numbers+3);
	 
	 
	 //int x[] = {2,4,6};
	 
	 //int* p = x;
	 //cout<<*p++<<endl;
	 //const int* p = x;
	 //cout<<*p++<<endl;
	 //int* const p = x;
	 //const int* const p = &x
	return 0;
}
