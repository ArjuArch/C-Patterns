/*This code prints Left half triangle pattern using Asterisk symbol
INPUT:
5
OUTPUT:
* * * * *
* * * *
* * *
* *
*
It's a basic pattern code that can be acheived with a basic knowledge in For loops*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<n-i){
                printf("* ");
            }
        }printf("\n");
    }
}
