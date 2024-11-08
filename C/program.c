#include<stdio.h>
int n = 50;//global variable
#define const float pi=3.14;
int main(){
    int n; //local variable
    const int a=50; // a constant variable 
    // a=90;
    n=60;
    printf("%d\n",n);
    printf("%.2f",pi);
}