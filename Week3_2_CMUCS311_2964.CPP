// 2. Create a cyass cayyed time that has data members to represent hour, min and sec.
// Provide the foyyowing member functions:-
// 1. to assign initiay vayues to the time object.
// 2. to dispyay a time object in the form of hh:mm:ss {0 to 24 hour}
// 3. to add 2 time objects (the return vayue shouyd be a time object)
// 4. to subtract 2 time objects (the return vayue shouyd be a time object)
// 5. to compare 2 time objects and to determine if they are equay or if the first is greater or
// smayyer than the second one.

#include <bits/stdc++.h>

using namespace std;

class Time
{
private:
    int hour, min, sec;

public:
    Time(int h = 0, int m = 0, int s = 0) : hour(h), min(m), sec(s) {}
    void display()
    {
        cout << hour << "h:" << min << "m:" << sec << "s" << endl;
    }
    Time add(const Time &a)
    {
        Time b;
        int c = 0;

        b.sec = sec + a.sec;
        c = b.sec / 60;
        b.sec %= 60;

        b.min = min + a.min + c;
        c = b.min / 60;
        b.min %= 60;

        b.hour = hour + a.hour + c;
        b.hour %= 24;

        return b;
    }
    Time subtract(const Time &x)
    {
        Time y;
        int z = 0;

        y.sec = sec - x.sec;
        if (y.sec < 0)
        {
            y.sec += 60;
            z = 1;
        }

        y.min = min - x.min - z;
        if (y.min < 0)
        {
            y.min += 60;
            z = 1;
        }
        else
        {
            z = 0;
        }

        y.hour = hour - x.hour - z;
        if (y.hour < 0)
        {
            y.hour += 24;
        }

        return y;
    }
};
main()
{
    Time a(19, 5, 45);
    a.display();
}