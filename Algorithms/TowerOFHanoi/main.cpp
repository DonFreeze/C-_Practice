#include <iostream>

using namespace std;


void move_disc(unsigned int n, unsigned int source_stack, unsigned int sink_stack, unsigned int work_stack )
{
    if ( n > 0)
    {
        move_disc( n-1, source_stack, work_stack, sink_stack);
        cout << "Move disc from " <<source_stack << " to " << sink_stack << endl;
        move_disc( n-1, work_stack, sink_stack, source_stack);
    }
}


int main()
{
    cout << " Towers of Hanoi! Enter the number of discs: ";
    unsigned int number_of_discs;
    cin >> number_of_discs;
    move_disc(number_of_discs, 1, 2 ,3);
    cout << "Finished" << endl;
    return 0;
}
