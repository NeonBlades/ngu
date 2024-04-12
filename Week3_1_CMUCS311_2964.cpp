// 1a. Define a class to represent a complex number called Complex.Provide the following
// member functions : -1. To assign initial values to the Complex object.2. To display a complex number in a +
// ib format.3. To add 2 complex numbers.(the return value should be complex)4. To subtract 2 complex numbers
// Write a main function to test the class.
#include <bits/stdc++.h>

using namespace std;

class Complex
{
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    void display()
    {
        cout << "The complex: ";
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
    Complex add(const Complex &a)
    {
        Complex b;
        b.real = real + a.real;
        b.imag = imag + a.imag;
        return b;
    }
    Complex subtract(const Complex &x)
    {
        Complex y;
        y.real = real - x.real;
        y.imag = imag - x.imag;
        return y;
    }
};

main()
{
    Complex a(2, -3), b(4, 5);
    a.display();
    b.display();
    a.add(b);
    b.subtract(a);
}