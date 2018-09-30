#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const &robotName) {
    std::cout << "NinjaTrap CREATED!\n";
    this->name = robotName;
    this->hitPoints = 60;
    this->maxHitPoints = 60;
    this->energyPoints = 120;
    this->maxEnergyPoints = 120;
    this->meleeAttackDamage = 60;
    this->rangedAttackDamage = 5;
    this->armourDamageReduction = 0;
    std::cout << this->name << " reporting for duty!\n";
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

NinjaTrap::NinjaTrap() {
    std::cout << "NinjaTrap CREATED!\n";
    this->name = "DefaultNinja";
    this->hitPoints = 60;
    this->maxHitPoints = 60;
    this->energyPoints = 120;
    this->maxEnergyPoints = 120;
    this->meleeAttackDamage = 60;
    this->rangedAttackDamage = 5;
    this->armourDamageReduction = 0;
    std::cout << this->name << " reporting for duty!\n";
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

NinjaTrap::~NinjaTrap() {
    std::cout << "NinjaTrap OUT!";
}

void NinjaTrap::ninjaShoeBox(ClapTrap const &trap) {
    std::cout << "CLAPTRAP RAT TRAP, YOUR MOM IS A FAT CAT\n";
    trap.printStatus();
}

void NinjaTrap::ninjaShoeBox(FragTrap const &trap) {
    std::cout << "FRAGTRAP BAG TRAP, YOUR SISTER IS A BAG RAG\n";
    trap.printStatus();
}

void NinjaTrap::ninjaShoeBox(ScavTrap const &trap) {
    std::cout << "Please try again!\n";
    trap.printStatus();
}

void NinjaTrap::ninjaShoeBox(NinjaTrap const &trap) {
    std::cout << "There is no proof this Trap exists!\n";
    trap.printStatus();
}
