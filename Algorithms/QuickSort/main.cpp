#include <iostream>

using namespace std;

int testArray[] = {1, 4, 3, 1, 7, 34, 323, 76, 26, 36, 26, 100};


void quickSort(int *ptrLeft, int *ptrRight)
{
    int *left = ptrLeft;
    int *right = ptrRight;
    int midValue;

    midValue = *(ptrLeft + (ptrRight- ptrLeft) / 2);
    cout << "Value in between is: " << midValue << endl;

    do
    {
        while ( *left < midValue )  left++;
        while ( *right > midValue ) right--;

        if ( left > right )
        {
            break;
        }
        cout << "Switch left value " << *left << " with right value " << *right << endl;
        int temp = *right;
        *right = *left;
        *left = temp;

    } while ( ++left <= --right );

    if ( left < ptrRight ) quickSort(left, ptrRight);
    if ( ptrLeft < right ) quickSort(ptrLeft, right);
}


int main()
{

    int length = sizeof(testArray)/ sizeof(int);
    for (int i = 0; i < length; i++)
    {
        cout << testArray[i] << ", ";
    }
    cout << endl;

    quickSort(testArray, testArray+length-1);

    for (int i = 0; i < length; i++)
    {
        cout << testArray[i] << ", ";
    }
    cout << endl;

    return 0;
}
