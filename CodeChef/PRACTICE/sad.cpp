#include<iostream>

using namespace std;

int main(){

	int arr[3][3];

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}


int sum[3] = {0};
for(int i=0;i<3;i++){
	sum[i] = 0;
	for(int j=0;j<3;j++){
		sum[i] += arr[i][j];
	}
}
