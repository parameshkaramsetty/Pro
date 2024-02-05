#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define len(a) sizeof(a) / sizeof(a[0])
/*
Merge Sort - Divide and Conquer - Break into smaller and then combine
Divide & Merge
*/
void merge(vector<int> &a, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (a[left] <= a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
        {
            temp.push_back(a[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }
}
void mergeSort(vector<int> &a, int l, int h)
{
    if (l >= h)
        return;
    int mid = l + (h - l) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, h);
    merge(a, l, mid, h);
}
int main()
{
    vector<int> a{9, 2, 4, 1, 5, 3, 6, 8, 7, 0};
    // cout << a.size();
    mergeSort(a, 0, a.size() - 1);
    for (auto i : a)
    {
        cout << i << " ";
    }
}