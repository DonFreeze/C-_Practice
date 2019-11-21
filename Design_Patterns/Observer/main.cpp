#include <iostream>
#include "News.h"
#include "Subscriber.h"

using namespace std;

int main()
{
    cout << "Basic Observer pattern example: " << endl;

    News news;
    Subscriber one(1), two(2), three(3);

    news.attach(&one);
    news.attach(&two);
    news.receiveValue(562);
    news.detach(&one);
    news.attach(&three);

    news.receiveValue(673);
    return 0;
}
