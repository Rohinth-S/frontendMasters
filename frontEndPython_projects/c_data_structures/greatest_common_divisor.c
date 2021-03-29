#include <stdio.h>
int gcd(int , int );
int main(){
    int num1 ,num2;
    printf("Enter Your two Nos for finding the HCF");
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    printf("%d is the hcf of the given nos %d %d",gcd(num1,num2),num1,num2);
    return 0;
}
int gcd(int x , int y){
    // int i  = x ? x > y : y; Single line statement for the if else clauses
    int i ;
    if (x < y)
    i = x;
    else
    i = y;
    // printf("%d %d ", x , y);
    // printf("%d", i);
    for(int j = i; j>=1; j--){
        if (x%j==0 && y%j == 0){
            // printf("%d ",i);
            return j;
        }
    }
}