#include<stdio.h>
#define ARR_SIZE(arr) sizeof(arr)/sizeof(arr[0]) // -> this is a macro used to preprocess things to make it easy - it can be also used in cpp 
int main(){
    //declaration
    //basic
    // 1 int a[] = {1,2,3,4,5};
    // 2 int a[size];
    // initializing the array statically 
    // we can also take input for the array from the user also for that we need to predefine the size of the array
    // int a[] = {1,2,3,4,5};
    // int b[5] = {1,2,3,4,5};
    int a[10];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        // printf("%d ",a[i]);
    }
    for(int i=0;i<10;i++){
        // scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }

    // formula for size of array
    // int n = sizeof(a)/sizeof(a[0]); // we can define this in macros to get simple usage
    // int n = *(&a+1) - a; -> not a good practice to use at all times
    // printf("%d",ARR_SIZE(a));
    //traversing a  array
    // for(int i=0;i<n;i++){
    //     printf("%d ",a[i]);
    // }


    


    
}