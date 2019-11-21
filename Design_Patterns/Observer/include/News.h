#ifndef NEWS_H
#define NEWS_H

#include <vector>
#include <algorithm>
#include <iostream>

#include "Subject.h"
#include "Observer.h"

using namespace std;

class News : public Subject
{
public:
    News()
    {
        cout << "Create News " << endl;
    }
    void attach(Observer *observer) override;
    void detach(Observer *observer) override;
    void notify() override;
    void receiveValue(int receivedValue);

private:
    vector<Observer *> observers;
    int valueOfInterest;
};

#endif // NEWS_H
