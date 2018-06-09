#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &robotName) : ClapTrap(robotName) {
    std::cout << "ScavTrap CREATED!\n";
    this->energyPoints = 50;
    this->maxEnergyPoints = 50;
    this->meleeAttackDamage = 20;
    this->rangedAttackDamage = 15;
    this->armourDamageReduction = 3;
    std::cout << this->name << " reporting for duty!\n";
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap CREATED!\n";
    this->energyPoints = 50;
    this->maxEnergyPoints = 50;
    this->meleeAttackDamage = 20;
    this->rangedAttackDamage = 15;
    this->armourDamageReduction = 3;
    std::cout << this->name << " reporting for duty!\n";
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap OUT!\n";
}

void ScavTrap::challengeNewcomer() {
    int energy = this->energyPoints -= 25;
    if (energy < 0) {
        std::cout << "Oh no! Insufficient energy!\n";
        this->energyPoints = 0;
    }
    else {
        std::cout << "PREPARE TO BE CHALLENGED COMRADE!\n";
        srand(time(NULL));
        int random = (rand() % 5) * 1 + 1;
        switch (random) {
            case 1:
                std::cout << "I challenged you to a duel!\n";
                break;
            case 2:
                std::cout << "I challenged you to a typing test!\n";
                break;
            case 3:
                std::cout << "I challenged you hold your breath for 2 minutes ... Wait nevermind!\n";
                break;
            case 4:
                std::cout << "I challenge you to say the alphabet backwards in under 1 minute!\n";
                break;
            case 5:
                std::cout << "I challenge you to a dance off!\n";
                break;
            default:
                std::cout << "I challenged you hold your breath for 2 minutes ... Wait nevermind!\n";
                break;
        }
    }
}
