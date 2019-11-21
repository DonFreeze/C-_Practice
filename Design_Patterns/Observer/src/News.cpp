#include "News.h"

using namespace std;

void News::attach(Observer *observer)
{
    if (observer != NULL)
    {
        cout << "News: Add a new subscriber to observer list" << endl;
        observers.push_back(observer);
    }
}

void News::detach(Observer *observer)
{
    auto iterator = find(observers.begin(), observers.end(), observer);

    if (iterator != observers.end())
    {
        cout << "News: Remove subscriber from observer list" << endl;
        observers.erase(iterator);
    }
}

void News::notify()
{
    cout << "News: Notify subscribers" << endl;
    for (Observer* observer : observers)
    {
        observer->update(this->valueOfInterest);
    }
}

void News::receiveValue(int receivedValue)
{
    cout << "News: New value was received: " << receivedValue  <<endl;
    this->valueOfInterest = receivedValue;
    notify();

}
