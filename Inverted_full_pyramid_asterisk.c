/*This code prints an inverted full pyramid as follows:
INPUT:
5
OUTPUT:
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
Can you figure it out the trick...
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                printf(" ");
            }else{
                printf("* ");
            }
        }printf("\n");
    }
}
