#include <iostream>

using namespace std;

int qSum(long value)
{
    if (value != 0)
    {
        int lastDigit = value % 10;
        return lastDigit + qSum(value / 10);
    }
    else
    {
        return 0;
    }
}


int main()
{
    long number = 235613545;
    cout << "Cross sum calculation of " << number << " using recursion: " << endl;
    cout << "The sum is: " << qSum(number) << endl;
    return 0;
}
