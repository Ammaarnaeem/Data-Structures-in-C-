#include <iostream>
using namespace std;

int main(){

	int length,element;
	cout<<"enter the lenth of array you want to create: ";
	cin>>length;
	int arr[length];
	cout<<"enter the elements for array"<<endl;
	for(int i=0;i<length;i++){
		cout<<"Enter the "<<i+1<<" element of array: ";
		cin>>element;
		arr[i]=element;
	}
	cout<<"\n";
	cout<<"Elements of Array"<<endl;
	for(int i=0;i<length;i++){
		cout<<"The "<<i+1<<" element of array is: "<<arr[i]<<endl;
	}
	
}
