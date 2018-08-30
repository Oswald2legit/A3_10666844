#include <iostream>

using namespace std;
bool prime = true;
int number_inputted;

int main()
{
    cout << "Input your number \n" ;
     cin >> number_inputted;

for (int a=2; a <= number_inputted /2; ++a)
{


    if (number_inputted % a == 0)
    {

    prime=false;
break;
    }
}

if (prime)
{
    cout <<  "the entered number is a prime number. \n";
}
else
{
    cout << "the entered number is not a prime number";
}
return 0;
}
