// (1) Define a structure to represent a Student. Keep track of name, id and cgpa. Write functions
// namely input, display and edit to input details to a Student variable, to display it and to edit it
// respectively. Write a main function which defines a student variable. Invoke these functions in
// main and observe the result.




// (6) Write a program which makes use of strlen(), strcmp() and strcat() library functions to
// determine the length of a string, compare 2 input strings, concatenate one string to the other
// respectively.
// (7) Write a function which sorts an array of strings in ascending order using bubble sort. The
// number of strings in the array and the array are passed as parameters to the function.
// (8) Write separate functions to swap 2 integers making use of (i)
// pointer parameters and (ii)reference parameters.
// (9)Write an overloaded function called computeArea which is used to compute the area of a triangle,
// a rectangle and a circle, respectively.Show the invocation of these functions in the main.
#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    string id;
    float cgpa;
};
void input(Student &a)
{
    cout << "Enter student name: ";
    getline(cin, a.name);
    cout << "Enter student id: ";
    cin >> a.id;
    cout << "Enter student cgpa: ";
    cin >> a.cgpa;
}
void display(Student &a)
{
    cout << "Student name: ";
    cout << a.name << endl;
    cout << "ID: ";
    cout << a.id << endl;
    cout << "CGPA: ";
    cout << a.cgpa << endl;
}
void edit(Student &a)
{
    int choice;
    cout << "1.Name 2.ID 3.CGPA" << endl;
    cout << "Enter number to edit: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        fflush(stdin);
        cout << "Enter name: ";
        getline(cin, a.name);
        break;
    case 2:
        cout << "Enter ID: ";
        cin >> a.id;
        break;
    case 3:
        cout << "Enter CGPA: ";
        cin >> a.cgpa;
        break;
    default:
        cout << "Nothing change!";
    }
    cout << "Student information after edit";
    display(a);
}
main()
{
    Student a;
    input(a);
    display(a);
    edit(a);
}