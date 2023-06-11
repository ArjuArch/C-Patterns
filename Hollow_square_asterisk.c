/*This code prints Hollow square pattern using Asterisk symbol
INPUT:
3
OUTPUT:
* * *
*   *
* * *
It's a basic pattern code that can be acheived with a basic knowledge in For loops*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                printf("* ");
            }else{
                printf("  ");
            }
        }printf("\n");
    }
}
