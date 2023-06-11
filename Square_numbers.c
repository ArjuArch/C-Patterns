/*This code prints Square pattern using Numbers illustrated below:
INPUT:
2
OUTPUT:
2 2 2
2 1 2
2 2 2
[OR]
INPUT:
4
OUTPUT:
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
This a simple approach to solve it....imagine splitting them and yeah...you got it*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    int e=(n+n)-1,m=0,tt=0;
    for(i=0;i<n;i++){
        int v=n;
        int co=1;
        if(m>0){
            tt++;
        }
        for(j=0;j<=i;j++){
            printf("%d ",v);
            v--;
        }for(k=0;k<e-j;k++){
            m++;
            if(k>=e-j-i){
                printf("%d ",n-tt+co);
                co++;
            }else{
                printf("%d ",v+1);
            }
        }
        printf("\n");
    }int o=1;
    for(i=0;i<n-1;i++){
        int v=n;
        int w=i+2;
        for(j=0;j<n-1-i;j++){
            printf("%d ",v);
            v--;
        }
        for(k=0;k<e-j;k++){
            if(k<o){
                printf("%d ",v+1);
            }else{
                printf("%d ",w);
                w++;
            }
        }o+=2;
        printf("\n");
    }
}
