#include<iostream>
using namespace std;
int addnumbers(int a,int b){
	return a+b;
}
int main(){
	int a,b;
	cout<<"Enter first number: "<<endl;
	cin>>a;
	cout<<"Enter second number: "<<endl;
	cin>>b;
	cout<<"The Sum is: "<<addnumbers(a,b);
}
