#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n+i;j++){
            if(j<i){
                printf(" ");
            }else{
                printf("* ");
            }
        }printf("\n");
    }
}