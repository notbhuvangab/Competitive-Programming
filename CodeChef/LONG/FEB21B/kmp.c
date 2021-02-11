#include<stdio.h>
#include<string.h>

void kmp(char pat[],char text[]){
    int n = strlen(text);
    int m = strlen(pat);

    int lps[100] = { 0 };
    computeLPSArray(pat,n,lps);
    int i=0,j=0;

    while(i < n-m+1){
        if(text[i]==pat[j]){
            i+=1;
            j+=1;
        }
        else{
            if(j!=0)
                j = lps[j-1];
            else
                i+=1;
        }

        if(j==m){
            printf("%d",i-j);
            j = lps[j-1];
        }
    }
}
