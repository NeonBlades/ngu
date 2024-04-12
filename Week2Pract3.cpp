// (3) Write a user defined function which determines the length of a given string. The only
// parameter to the function is the string. The return value of the function should be the length.
// Show the usage of this function in the main.
#include <bits/stdc++.h>

using namespace std;

string input(string &a)
{
    cin >> a;
    return a;
}
int stringsize(string a)
{
    string length = a;
    return length.size();
}

main()
{
    string a;
    input(a);
    cout << stringsize(a);
}