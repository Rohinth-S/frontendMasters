#include <stdio.h>
int lcm(int , int );
int main(){
    int num1,num2;
    printf("Enter the two nos: ");
    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("%d is the lcm of %d ,%d",lcm(num1,num2),num1,num2);


    return 0;

}
int lcm(int x , int y){
    // int i  = x ? x > y : y; Single line statement for the if else clauses
    if (x > y)
    i = x;
    else
    i = y;
    printf("%d %d ", x , y);
    printf("%d", i);
    for(; i <= x * y; i++){
        if (i%x==0 && i%y == 0){
            printf("%d ",i);
            return i;
        }
    }
}