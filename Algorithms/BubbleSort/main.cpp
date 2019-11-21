#include <iostream>

using namespace std;

int dataForSorting[] = {3, 54, 23, 25, 2, 0, 2, 56, 100, 653, 24, 87, 5, 13, 18, 98};


void bubbleSort(int *element, int length)
{
    cout << "Running Bubble Sort" << endl<< endl;

    while (length--)
    {
        for (int i = 0; i < length; i++)
        {
            if (element[i] > element[i+1])
            {
                int temp = element[i];
                element[i] = element[i+1];
                element[i+1] = temp;
            }
        }
    }
}

void printArray(int *data, int length)
{
    cout << "Printing test data" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << data[i] << ", ";
    }
    cout << endl<< endl;
}

int main()
{
    cout << "Bubble Sort Algorithm" << endl<< endl;
    int length = sizeof(dataForSorting) / sizeof(int);

    printArray(dataForSorting, length);

    bubbleSort(dataForSorting, length);

    printArray(dataForSorting, length);

    return 0;
}
