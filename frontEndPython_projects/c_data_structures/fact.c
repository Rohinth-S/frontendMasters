#include <stdio.h>
int fact(int );
int main(){
    int facts ;
    printf( " Enter Your number that u want to get the factorial");
    scanf("%d",&facts);
    printf("%d Is the Factorial of 5",fact(facts));
    return 0;

}
 int fact(num){
     if (num == 1){
         return 1;
     } 
     else
     {
          return num * fact(num-1);
     }
 }