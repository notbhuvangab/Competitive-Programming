#include<iostream>
#include<bits/stdc++.h>

vector<int> MysteryMerge(int A[],int m,int B[],int n,vector<int> c) {
  // A has m elements, B has n elements
  i = 0; j = 0; k = 0;
  while (i+j < m+n) {
    if (i == m) {j++;}
    if (j == n) {C[k] = A[i]; i++; k++;}
    if (i < m and j < n) {
       if (A[i] < B[j]) {C[k] = A[i]; i++; k++;}
       if (A[i] == B[j]) {i++; j++;}
       if (A[i] > B[j]) {j++;}
    }
  }
}

int main(){

}