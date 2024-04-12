// (4) Define a structure called Rectangle which keeps track of the length and breadth of a
// rectangle. Write functions namely input, displayDimensions, displayArea and edit to input the
// dimensions of a rectangle, to display the dimensions, to calculate and display the area of a
// triangle respectively. Write a main function which defines a variable of type Rectangle. Invoke
// these functions in main and observe the result.
#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int width;
};
void input(Rectangle &x)
{
    cout << "Enter length: ";
    cin >> x.length;
    cout << "Enter width: ";
    cin >> x.width;
}
void displayDimension(Rectangle &x)
{
    cout << "The length is: ";
    cout << x.length << endl;
    cout << "The width is: ";
    cout << x.width << endl;
}
void displayArea(Rectangle &x)
{
    cout << "The Area is: ";
    cout << x.length * x.width << endl;
}
void edit(Rectangle &x)
{
    int choice;
    cout << "1.Length 2.Width 3.Both" << endl;
    cout << "Enter number: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter length: ";
        cin >> x.length;
        break;
    case 2:
        cout << "Enter width: ";
        cin >> x.width;
        break;
    case 3:
        cout << "Enter length: ";
        cin >> x.length;
        cout << "Enter width: ";
        cin >> x.width;
    default:
        cout << "Nothing change!" << endl;
    }
    displayArea(x);
}
main()
{
    Rectangle a;
    input(a);
    displayDimension(a);
    displayArea(a);
    edit(a);
}