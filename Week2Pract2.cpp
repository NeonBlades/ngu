// (2) Define the same Student structure. Also keep an array to hold 4 Student records. Write
// functions namely input, display, arrange and search which inputs records to the array, displays
// the array in the order of input, arranges the records in order of id’s and searches for a record
// taking id as the key. Provide a suitable menu for this program.
#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    string id;
    float cgpa;
};
void input(Student a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;
        fflush(stdin);
        cout << "Enter student name: ";
        getline(cin, a[i].name);
        cout << "Enter ID: ";
        cin >> a[i].id;
        cout << "Enter CGPA: ";
        cin >> a[i].cgpa;
        cout << endl;
    }
}
void display(Student a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " information" << endl;
        cout << "Student name: " << a[i].name << endl;
        cout << "ID: " << a[i].id << endl;
        cout << "CGPA:" << a[i].cgpa << endl;
        cout << endl;
    }
}
void arrange(Student a[], int n)
{
    Student temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (stoi(a[j].id) > stoi(a[j + 1].id))
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "Student list after arrange" << endl;
    display(a, n);
}
void search(Student a[], int n)
{
    string id;
    cout << "Enter student ID you want to find: ";
    cin >> id;
    for (int i = 0; i < n; i++)
    {
        if (stoi(a[i].id) == stoi(id))
        {
            cout << "Found the student" << endl;
            cout << "Student name: " << a[i].name << endl;
            cout << "ID: " << a[i].id << endl;
            cout << "CGPA: " << a[i].cgpa << endl;
        }
    }
}
void run(Student a[], int n){
    cout << "1. Input/ 2.Display /3.Arrange /4.Search" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        input(a, n);
        break;
    case 2:
        display(a, n);
        break;
    case 3:
        arrange(a, n);
        break;
    case 4:
        search(a, n);
        break;
    default:
        break;
    }
}
main()
{
    cout << "Enter number of student: ";
    int n;
    cin >> n;
    Student a[n];
    input(a, n);
    display(a, n);
    arrange(a, n);
    search(a, n);
}