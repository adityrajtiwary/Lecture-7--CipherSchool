#include<iostream>
using namespace std;

int main()
{
//	int x;  // variable name x of type int ---> It can store a single integer
	
	// for storing the multiple values the concept of array comes because with the help of array we can store the values in a single variable
//	int a[5]; // This means it is an array of name a which can be stored multiple integer, it can store total 6 integers
			 // Note: The indexing of array starts from 0 and not 1
			 // In an array element will starts from 0-5
			// The first elements will have an index 0 --> a[0]
			// The second element will have an index 1 --> a[1]
	
	int a,b,c,d,e;
	
	cout<<"Give 5 integer as input: "<<endl;
	cin>>a>>b>>c>>d>>e;
	
	cout<<"The integer is reverse order are: "<<e<<d<<c<<b<<a;
			
	
	
	return 0;	
}
