#include <stdio.h>
// Function calling iteself is called recursion
// 1  2 3 5 8 13 21 34 55 89 143 ...
int fibbo(int );

int main(){
    int fibs;
    printf("Enter the series last elements up to which you wannt to get the fibbonacci series \t");
    scanf("%d", &fibs);
    for (int i =0;i<fibs;i++){
    
    printf("%d is the fib series of %d \n",fibbo(i),i);
}
}

int fibbo(int num){
    if (num==1 || num==0){
        return 1;
    }
    else return fibbo(num-1) + fibbo(num-2);
}