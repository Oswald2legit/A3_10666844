#include <iostream>

using namespace std;
int mark;
int main()
{

    cout << "Kindly Input your mark:" << endl;
    cin >> mark;
    if(mark>=80)
    {
        cout <<"Your letter grade is A+" << endl;
    }
    else if(mark>=75&&mark<80)
    {
        cout <<"Your letter grade is B+" << endl;
    }
    else if(mark>=70&&mark<75)
    {
        cout << "Your letter grade is B" << endl;
    }
    else if(mark>=65&&mark<70)
    {
        cout << "Your letter Grade is C+" <<endl;
    }
    else if(mark>=60&&mark<65)
    {
        cout << "Your letter Grade is C" <<endl;
    }
    else if (mark>=55&&mark<60)
    {
        cout << "Your letter Grade is D+" << endl;
    }
    else if (mark>=53&&mark<55)
    {
        cout << "Your letter Grade is D" << endl;
    }
    else if (mark>=49&&mark<53)
    {
        cout << "Your letter Grade is E" << endl;
    }
    else
    {
        cout << "Your letter Grade is F" << endl;
    }
    return 0;
}

