#include<iostream>

using namespace std;
int main(){
	int n;
	float a;
	double z;
	char x;
	bool y;
	cout<<"Enter an integer number:"<<endl;
	cin>>n;
	cout<<"Enter an float number:"<<endl;
	cin>>a;
	cout<<"Enter an double number:"<<endl;
	cin>>z;
	cout<<"Enter an char number:"<<endl;
	cin>>x;
	cout<<"Enter an boolean number:"<<endl;
	cin>>y;
	cout<<"The size of entered integer is: "<<sizeof(n)<<endl;
	cout<<"The size of entered float is: "<<sizeof(a)<<endl;
	cout<<"The size of entered double is: "<<sizeof(z)<<endl;
	cout<<"The size of entered char is: "<<sizeof(x)<<endl;
	cout<<"The size of entered boolean is: "<<sizeof(y)<<endl;
	return 0;
}
