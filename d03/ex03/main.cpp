#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"


int main(void) {

    FragTrap robot("Terminator");
    ClapTrap robot1("ORIGINAL");
    ScavTrap robot2("T-X");
    NinjaTrap robot3("NEO");

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
    robot.vault_hunter_dot_exe("Kusaki");
    robot.vault_hunter_dot_exe("Kusaki");
    robot.vault_hunter_dot_exe("Kusaki");
    robot.vault_hunter_dot_exe("Kusaki");
    robot.takeDamage(50);
    robot.printStatus();

    //extra
    robot.levelUp();
    robot.printStatus();

    //-----------------
    //robot2

    //shows current status of attributes
    std::cout << "PREPARE FOR ROBOT 2\n";
    robot2.printStatus();

    //shows take damage function
    robot2.takeDamage(10);
    robot2.printStatus();

    //shows melee & ranged attack function
    robot2.meleeAttack("KIMOSABI");
    robot2.rangedAttack("KIMOSABI");
    robot2.beRepaired(10);
    robot2.takeDamage(101);
    robot2.printStatus();

    //shows be repaired function
    robot2.beRepaired(100);
    robot2.printStatus();

    //shows newcomer function
    robot2.challengeNewcomer();
    robot2.challengeNewcomer();
    robot2.challengeNewcomer();
    robot2.takeDamage(50);
    robot2.printStatus();

    //extra
    robot2.levelUp();
    robot2.printStatus();

    //-----------------
    //robot3

    std::cout << "PREPARE FOR ROBOT 3\n";
    robot3.printStatus();

    robot3.ninjaShoeBox(robot);
    robot3.ninjaShoeBox(robot1);
    robot3.ninjaShoeBox(robot2);
    robot3.ninjaShoeBox(robot3);
}
