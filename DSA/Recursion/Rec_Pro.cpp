#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    print(n - 1);     // 1 2 3 4
    cout << n << " "; // 5
}
void fun(int i, int n)
{
    if (i > n)
        return;       // stops the function call // 6 > 5
    cout << i << " "; // 1
    fun(i + 1, n);    // 2 3 4 5
}
void rprint(int n)
{
    if (n == 0)
        return;
    cout << n << " "; // 5
    rprint(n - 1);    // 4 3 2 1
}
void print_name(int i, int n, string s)
{
    if (i > n)
    { // i==n+1 can also be written as i>n
        return;
    }
    cout << i << ")" << s << "\n";
    print_name(i + 1, n, s);
    /*
        1)Sowrya
        2)Sowrya
        3)Sowrya
        4)Sowrya
        5)Sowrya
    */
}
void print1toN_m1(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    print1toN_m1(i + 1, n);
}
void printNto1_m2(int i, int n)
{
    if (i == n)
    {
        cout << i << " ";
        return;
    }
    printNto1_m2(i + 1, n); // BackTracking - going till the end and then working
    cout << i << " ";
}
void printNto1_m1(int i, int n)
{
    if (i == 0)
        return;
    cout << i << " ";
    printNto1_m1(i - 1, n);
}
void print1toN_m2(int i, int n)
{
    if (i == 0)
        return;
    // Backtracking
    print1toN_m2(i - 1, n); // the next line of this executes only after the completion of function
    cout << i << " ";
}
void sumofN_m1_parameterized(int n, int s)
{
    if (n == 0)
    {
        cout << s << " ";
        return;
    }
    sumofN_m1_parameterized(n - 1, s + n);
}
int sumofN_functional(int n)
{
    // Break the problem into sub-problem
    if (n == 0)
    {
        return 0;
    }
    return n + sumofN_functional(n - 1);
    //     n+sub-problem(n-1)
    // we beleive that sub-problem calculates sum upto n-1 and we add sum(n-1)+n => to give the result
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
void reverse_Array_m1(int *a, int s, int e)
{
    if (s >= e)
        return;
    swap(a[s], a[e]);
    reverse_Array_m1(a, s + 1, e - 1);
}
void reverse_Array_m2(int a[], int i, int n)
{
    if (i >= n / 2)
        return;
    swap(a[i], a[n - i - 1]);
    reverse_Array_m2(a, i + 1, n);
}
bool checkPalindrome(string &s, int i)
{
    // pass by reference
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return checkPalindrome(s, i + 1);
}
// Multiple recursion calls in a function - calling a function more than once
int NthFib(int n)
{
    if (n <= 1)
        return n;
    int l = NthFib(n - 1);  // until this function is not called the next line is not worked - this will happen comeback
    int sl = NthFib(n - 2); // when the previous comeback it will go
    return l + sl;          // when base case is reached it will return to the function which it is called
}
void printS(vector<int> &s, int a[], int i, int n)
{
    // Printing Subsequences
    if (i >= n)
    {
        for (auto e : s)
        {
            cout << e << " ";
        }
        if (s.size() == 0)
            cout << "{}"
                 << "\n";
        cout << "\n";
        return;
    }
    // pick
    s.push_back(a[i]);
    printS(s, a, i + 1, n);
    // unpick
    s.pop_back();
    printS(s, a, i + 1, n);
}
void printSS(int a[], int i, int n, int k, vector<int> &s, int sum)
{
    // pick
    if (i >= n)
    {
        if (sum == k)
        {
            for (auto i : s)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        return;
    }
    s.push_back(a[i]);
    sum += a[i];
    printSS(a, i + 1, n, k, s, sum);
    s.pop_back();
    sum -= a[i];
    printSS(a, i + 1, n, k, s, sum);
}
bool printOS(int a[], int i, int n, int k, vector<int> &s, int sum)
{
    // only one answer
    // pick
    if (i >= n)
    {
        if (sum == k)
        {
            for (auto i : s)
            {
                cout << i << " ";
            }
            cout << "\n";
            return true; // condition satisfied - return True
        }
        return false; // condition not satisfied
    }
    s.push_back(a[i]);
    sum += a[i];
    if (printOS(a, i + 1, n, k, s, sum))
    {                // if it is true
        return true; // return true that says answer got no need to go beyond for next function call
    }
    s.pop_back();
    sum -= a[i];
    if (printOS(a, i + 1, n, k, s, sum))
    {
        return true;
    }
    return false; // if both are false - return false
}
int countSS(int a[], int i, int n, int k, int sum)
{
    // count
    /*
    f(){
        //base case - return 0 or return 1;
        l = f();
        r = f();
        return l+r;

        it is similar to:
            for(i -> n)s+ = fun(i)
            return s
    }
    */
    // base case
    // if (sum > k)
    //     return 0; // condition not satisfied - only if elements are non-negative integers
    if (i >= n)
    {
        if (sum == k)
        {
            return 1; // condition satisfied
        }
        return 0; // condition not satisified
    }
    // pick
    // s.push_back(a[i]);
    sum += a[i];
    int l = countSS(a, i + 1, n, k, sum); // 1
    // unpick
    // s.pop_back();
    sum -= a[i];
    int r = countSS(a, i + 1, n, k, sum); // 1
    return l + r;                         // 2
}









 

int main()
{
    cout << "hello world"
         << "\n";
    return 0;
}