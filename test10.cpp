#include<iostream>
using namespace std;
int main(){
	int n[3][3],sum[3]={0};
	cout<<"Enter Numbers Of The Matrix: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Row# "<<i+1<<"Column# "<<j+1<<endl;
			cin>>n[i][j];
			sum[i]+=n[i][j];
		}
	}
	for(int i=0;i<3;i++){
		cout<<"Sum of Row# "<<i+1<<"is "<<sum[i]<<endl;
	}
}
