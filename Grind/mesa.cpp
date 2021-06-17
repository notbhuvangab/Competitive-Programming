#include<iostream>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	int n;
	cin>>n;
	if(n>0){
	int num = n,sum=0;

	while(num){
		sum+=(num%10);
		num/=10;
	}
	!(n%sum)?cout<<"YES":cout<<"NO";
	}
	else{
		cout<<-1;
	}

}