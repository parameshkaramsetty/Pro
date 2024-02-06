#include <bits/stdc++.h>
using namespace std;
#define len(a) sizeof(a) / sizeof(a[0])
int give(int a[], int l, int r)
{
    int i = l, j = r;
    int p = l;
    while (i < j)
    {
        while (a[i] <= a[p] && i <= r - 1)
        {
            i++;
        }
        while (a[j] > a[p] && j >= l + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[j], a[p]);
    return j;
}
void quickSort(int a[], int left, int right)
{
    /*
        Quick Sort
            Time Complexity : O(N*log2(N))
            Space Complexity : O(1)

        Working :
            Pick a pivot element and keep it in correct place (pivot element can be at any place 1st , last or anything)
            Smaller elements on the left & Greater elements on the right

    */
    if (left < right)
    {
        int pivot = give(a, left, right);
        quickSort(a, left, pivot - 1);
        quickSort(a, pivot + 1, right);
    }
}
int main()
{
    int a[5] = {3, 2, 4, 1, 5};
    quickSort(a, 0, len(a) - 1);
    for (auto i : a)
    {
        cout << i << " ";
    }
}