#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define len(a) sizeof(a) / sizeof(a[0])
void bubbleSort(int a[], int n)
{   

    /* 
    Opposite to the selection sort (finds the minimum and swaps)
    Bubble Sort :
        Pushes the max. to last by adjacent swapping
    */

    /*
    Shift the maximum element to the right by comparing each element
    there by the elements from n-1 are sorted 
    and like wise upto 0
    */
   /*
   Time Complexity : O(n^2) => worst case & Average Case - same for selection sort
                     O(n)   => Best case -> if the given is sorted

   */
    for (int i = n - 1; i > 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j < i; j++)
        {
            
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                didSwap = 1;
            }
           
        }
        if(didSwap == 0)break;  
    }
}
int main()
{
    int a[] = {3, 5, 1, 4, 2, 9, 8, 7, 6};
    bubbleSort(a, len(a));
    for (auto i : a)
    {
        cout << i << " ";
    }
}