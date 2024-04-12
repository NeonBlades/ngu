// (1) A function to search for an integer in a list of integers. If found the return value of the
// function is 1 else return value is -1. Pass the list of integers, length of the array and the key to be
// searched as parameters to the function.
// (2) A function which determines the biggest element in an array of integers. The function returns
// this number. Pass the list of integers and length of the array as parameters to the function.
// (3) Write a function which sorts an array of integers in ascending order using bubble sort. The
// length of the array and the array are passed as parameters to the function.
// (4) Define a structure called Rectangle which keeps track of the length and breadth of a
// rectangle. Write functions namely input, displayDimensions, displayArea and edit to input the
// dimensions of a rectangle, to display the dimensions, to calculate and display the area of a
// triangle respectively. Write a main function which defines a variable of type Rectangle. Invoke
// these functions in main and observe the result.
#include <bits/stdc++.h>
using namespace std;
void input(int a[], int n) // nhap vao cho mang
{
    cout << "Enter an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int find(int a[], int n) // nhap so va tim trong mang
{
    cout << "Enter the number want to find: ";
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
            return 1;
        else
            continue;
    }
    return -1;
}
int biggest(int a[], int n) // tra ve gia tri max
{
    cout << "The biggest number is: ";
    int max;
    for (int i = 0; i < n; i++)
    {
        max = a[0];
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
void BubbleSort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "An array after sort (ascending): ";
    output(a, n);
}
main()
{
    int n;
    cin >> n;
    int a[n];
    input(a, n);
    cout << find(a, n) << endl;
    cout << biggest(a, n);
    BubbleSort(a, n);
}