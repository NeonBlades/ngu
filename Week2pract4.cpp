// (4) Write a user defined function which concatenates one string to another. Pass the two strings
// as parameters to the function. The return value of the function should be the concatenated string.
// Show the usage of this function in the main.
#include <bits/stdc++.h>

using namespace std;

string string1(string &a)
{
    getline(cin, a);
    return a;
}
string string2(string &b)
{
    getline(cin, b);
    return b;
}
string connect(string &a, string &b)
{
    return a + b;
}
main()
{
    string a, b;
    string1(a);
    string2(b);
    cout << connect(a, b);
}