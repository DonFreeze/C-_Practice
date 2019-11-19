#include <iostream>

using namespace std;

class Singleton
{
public:
    static Singleton *getInstance()
    {
        if (instance == 0)
        {
            cout << "Creating Singleton instance" << endl;
            instance = new Singleton();
        }
        return instance;
    }
private:
    Singleton(){}
    static Singleton *instance;
};
Singleton *Singleton::instance = 0;



int main()
{
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();

    cout << "Address of s1 = " << s1 << endl;
    cout << "Address of s2 = " << s2 << endl;

    return 0;
}
