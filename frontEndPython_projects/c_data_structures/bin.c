#include<stdio.h>
// #include <conio.h>
int main(){
    void bin(int , char[]);
    int num;
    char a[11];
    // clrscr();
    printf("Enter the length you want to get the output in binary permutation\n");
    scanf("%d",&num);
    a[10] = '\0';
    bin(num, a);
    return 0;

}
void bin (int n ,char a[]) {
    if (n < 1)
    printf("\n %s ",a);
    else {
        a[n-1] = '0';
        bin(n-1,a);
        a[n-1] = '1';
        bin(n-1,a);
    }
}
