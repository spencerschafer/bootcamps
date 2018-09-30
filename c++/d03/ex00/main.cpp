#include <iostream>
#include "FragTrap.hpp"


int main(void) {

    FragTrap robot("Terminator");

    //shows current status of attributes
    robot.printStatus();

    //shows take damage function
    robot.takeDamage(10);
    robot.printStatus();

    //shows melee & ranged attack function
    robot.meleeAttack("Kusaki");
    robot.rangedAttack("Kusaki");
    robot.beRepaired(10);
    robot.takeDamage(101);
    robot.printStatus();

    //shows be repaired function
    robot.beRepaired(100);
    robot.printStatus();

    //shows vault hunter function
    robot.vault_hunter_dot_exe("Kusaki");
    robot.takeDamage(50);
    robot.printStatus();

    //extra
    robot.levelUp();
    robot.printStatus();
}
