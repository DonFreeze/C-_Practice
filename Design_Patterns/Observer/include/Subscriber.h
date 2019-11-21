#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include "Observer.h"

using namespace std;

class Subscriber: public Observer
{
public:
    Subscriber(int id) : id(id)
    {
        cout << "Create Subscriber " << id << endl;
    }
    virtual void update(int temp) override;

private:
    int id;
};

#endif // CLIENT_H
