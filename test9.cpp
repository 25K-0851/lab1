#include<iostream>
using namespace std;
int main(){
	int n[5],sum=0;
	for(int i=0;i<5;i++){
		cout<<endl<<"Enter Number#0"<<i+1<<endl;
		cin>>n[i];
	}
	cout<<"Numbers in reverse order are: "<<endl;
	for(int i=4;i>=0;i--){
		cout<<n[i]<<endl;
		sum+=n[i];
	}
	cout<<"The sum is : "<<sum;
}
