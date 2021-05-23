#include <bits/stdc++.h>

using namespace std;

int* laudaMergeSort(int arr1[],int arr2[],int n1,int n2){
	int n3 = n1+n2;
	int *bigDickArray = new int[n3];

	int k= 0,i=0,j=0;
	 while (i<n1 && j <n2)
    {
        
        if (arr1[i] < arr2[j])
            bigDickArray[k++] = arr1[i++];
        else
            bigDickArray[k++] = arr2[j++];
    }
    while (i < n1)
        bigDickArray[k++] = arr1[i++];

    while (j < n2)
        bigDickArray[k++] = arr2[j++];

	return bigDickArray;
}
int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	int n1,n2;
	cin>>n1>>n2;

	int arr1[n1],arr2[n2];
	
	for(int i=0;i<n1;i++)
		cin>>arr1[i];

	for(int i=0;i<n2;i++)
		cin>>arr2[i];

	int *arr3;

	arr3 = laudaMergeSort(arr1,arr2,n1,n2);

    for(int i=0;i<n1+n2;i++)
        cout<<arr3[i]<<" ";
        cout<<endl;
	if((n1+n2)%2)
		cout<<(float)arr3[(n1+n2)/2];
	else 
		cout<<((float)arr3[(n1+n2)/2] + (float)arr3[(n1+n2)/2 - 1])/2;
}