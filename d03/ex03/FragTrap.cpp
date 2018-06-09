#include <iostream>
#include <cmath>
#include <iomanip>
#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap CREATED!\n";
    std::cout << this->name << " reporting for duty!\n";
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";

}

FragTrap::FragTrap(std::string const &robotName) : ClapTrap(robotName){
    std::cout << "FragTrap CREATED!\n";
    std::cout << this->name << " reporting for duty!\n";
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap OUT!\n";
}

void FragTrap::grenadeAttack(std::string const &target) {
    srand(time(NULL));
    double random = (rand() % 1000) * 0.001;
    int damage = (int) (this->rangedAttackDamage * random);
    std::cout << "CATCH THIS! - [FR4G-TP " << this->name << " attacks " << target << " at range, causing " << damage
              << " points of damage]\n";
}

void FragTrap::flameAttack(std::string const &target) {
    srand(time(NULL));
    double random = (rand() % 1000) * 0.001;
    int damage = (int) (this->meleeAttackDamage * random);
    std::cout << "FIRE AT WILL! - [FR4G-TP " << this->name << " attacks " << target << " at range, causing " << damage
              << " points of damage]\n";
}

void FragTrap::iceAttack(std::string const &target) {
    srand(time(NULL));
    double random = (rand() % 1000) * 0.001;
    int damage = (int) (this->rangedAttackDamage * random);
    std::cout << "FREEZE! - [FR4G-TP " << this->name << " attacks " << target << " at range, causing " << damage
              << " points of damage]\n";
}

void FragTrap::vault_hunter_dot_exe(std::string const &target) {
    int energy = this->energyPoints -= 25;
    if (energy < 0) {
        std::cout << "Oh no! Insufficient energy!\n";
        this->energyPoints = 0;
    } else {
        std::cout << "F to the R to the 4 to the G to the WHAAT!\n";
        srand(time(NULL));
        int random = (rand() % 5) * 1 + 1;
        switch (random) {
            case 1:
                meleeAttack(target);
                break;
            case 2:
                rangedAttack(target);
                break;
            case 3:
                grenadeAttack(target);
                break;
            case 4:
                flameAttack(target);
                break;
            case 5:
                iceAttack(target);
            default:
                rangedAttack(target);
        }
    }
}
