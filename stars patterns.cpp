#include <iostream>
#include <string>

using namespace std;

int main(){
	
//	int i,n,j;
//	
//	cout<<"Enter the number of lines: ";
//	cin>>n;
//	
//	for(i=0; i<=n; i++){
//		
//		for (j=0; j<=i; j++){
//			cout<<j;
//		}
//		cout<<"\n";
//	}

// reverted stars example

//	int i,n,j;
//	
//	cout<<"Enter the number of lines: ";
//	cin>>n;
//	
//	for(i=n; i>=1; i--){
//		
//		for (j=1; j<=i; j++){
//			cout<<j
//		}
//		cout<<"\n";
//	}


//int n, s, i, j;
//cout << "Enter number of rows: ";
//cin >> n;
//for(i = 1; i <= n; i++)
//{
//for loop for displaying space
//for(s = i; s < n; s++)
//{
//cout << " ";
//}
//for loop to display star equal to row number
//for(j = 1; j <= (2 * i - 1); j++)
//{
//cout << "*";
//}
// ending line after each row
//cout << "\n";
//}

//char a[]= "hello";

//for(int i=0; i<5; i++){
//	cout<<a[i];
//}

//struct student{
//	string name;
//	int rollno;
//};

//student s1;
//cout<<"Enter the name of student"<<endl;
//cin>>s1.name;
//cout<<"enter the rol number of student"<<endl;
//cin>>s1.rollno;

//cout<<"The name of student is "<<s1.name<<" and the roll number is "<<s1.rollno<<endl;
char str[]="Ammaar";
//string str= "Ammaar";
int arrsize=sizeof(str)/sizeof(str[0]);
cout<<"The length of array b is "<<arrsize<<endl;
	return 0;
}
