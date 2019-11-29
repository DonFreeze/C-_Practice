#include <iostream>
#include "Character.h"


using namespace std;




int main()
{
    cout << "Program to show the use of the strategy pattern. " << endl;
    cout << "This pattern is used to change the behavior of an object during runtime." << endl;
    cout << "In this example, the attack behavior can be switched." << endl;
    cout << endl;

    // Generate Instances
    SlasheAttack slash;
    CrushesAttack crush;
    Weapon sword("sword");
    Weapon axe("axe");
    Character monster("Monster");
    Character player("Hero");

    // switch between behavior
    monster.setAttackBehavior(&slash);
    monster.setWeapon(&axe);

    player.setAttackBehavior(&crush);
    player.setWeapon(&sword);

    monster.performAttack(&player);
    player.performAttack(&monster);

    player.setAttackBehavior(&slash);
    player.setWeapon(&axe);
    player.performAttack(&monster);

    return 0;
}
