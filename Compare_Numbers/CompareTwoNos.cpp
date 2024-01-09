// Accept Two Nos. From User and show the large number 

#include<iostream>

using namespace std;

int main(){
    int a,b;

    cin>>a>>b;

    // if user has enterd both numbers that are equal
    // == ---> Equality check
    // = ---> Assignment 

    // if (a == b)
    // 15 15
    // a = 15
    // b = 15

    // if (a==b)
    // cout<<"Both numbers are equal";

    if(a>b)
	cout<<"The larger no is "<<a;

	else if(b>a)
	cout<<"The larger no is "<<b;

	else
	cout<<"Both the nos are equal";

	// else if ladder	
}