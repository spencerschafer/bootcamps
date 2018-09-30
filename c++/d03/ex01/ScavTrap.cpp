#include <iostream>
#include <iomanip>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &robotName) {
    std::cout << "Initiating start sequence!\n";
    this->name = robotName;
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 50;
    this->maxEnergyPoints = 50;
    this->level = 1;
    this->meleeAttackDamage = 20;
    this->rangedAttackDamage = 15;
    this->armourDamageReduction = 3;
    std::cout << this->name << " reporting for duty!\n";
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

ScavTrap::ScavTrap() {
    std::cout << "Initiating start sequence!\n";
    this->name = "Default";
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 50;
    this->maxEnergyPoints = 50;
    this->level = 1;
    this->meleeAttackDamage = 20;
    this->rangedAttackDamage = 15;
    this->armourDamageReduction = 3;
    std::cout << this->name << " reporting for duty!\n";
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

ScavTrap::~ScavTrap() {
    std::cout << "Éteindre. Goodbye!";
}

void ScavTrap::rangedAttack(std::string const &target) {
    srand(time(NULL));
    double random = (rand() % 1000) * 0.001;
    int damage = (int) (this->rangedAttackDamage * random);
    std::cout << "SUCK 'EM! - [FR4G-TP " << this->name << " attacks " << target << " at range, causing " << damage
              << " points of damage]\n";
}

void ScavTrap::meleeAttack(std::string const &target) {
    srand(time(NULL));
    double random = (rand() % 1000) * 0.001;
    int damage = (int) (this->meleeAttackDamage * random);
    std::cout << "POW PA PA POW HIYAH! - [FR4G-TP " << this->name << " attacks " << target << " at arms length, causing "
              << damage
              << " points of damage]\n";
}

void ScavTrap::takeDamage(unsigned int amount) {
    std::cout << "Ow hohoho, that hurts! Yipes!\n";
    int health = this->hitPoints - (amount - this->armourDamageReduction);
    if (health <= 0) {
        this->hitPoints = 0;
        std::cout << "He dead!\n";
    } else {
        this->hitPoints = health;
    }
}

void ScavTrap::beRepaired(unsigned int amount) {
    std::cout << "I found health!\n";
    int health = this->hitPoints + amount;
    if (health >= this->maxHitPoints)
        this->hitPoints = this->maxHitPoints;
    else
        this->hitPoints += amount;
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

void ScavTrap::levelUp() {
    std::cout << "LEVEL UP BABY!\n";
    this->level += 1;
    this->armourDamageReduction += 2;
    this->maxEnergyPoints += 10;
    this->maxHitPoints += 10;
    this->rangedAttackDamage += 5;
    this->meleeAttackDamage += 5;
    this->hitPoints = maxHitPoints;
    this->energyPoints = maxEnergyPoints;
}

void ScavTrap::printStatus() const {
    std::cout << std::setw(17) << std::left << "\nAnalysing vital signs!\n";
    std::cout << std::setw(17) << std::left << "----------------------\n";
    std::cout << std::setw(17) << std::left << "Name: " << this->name << "\n";
    std::cout << std::setw(17) << std::left << "Level: " << this->level << "\n";
    std::cout << std::setw(17) << std::left << "MaxHitPoints: " << this->maxHitPoints << "\n";
    std::cout << std::setw(17) << std::left << "HitPoints: " << this->hitPoints << "\n";
    std::cout << std::setw(17) << std::left << "MaxEnergyPoints: " << this->maxEnergyPoints << "\n";
    std::cout << std::setw(17) << std::left << "EnergyPoints: " << this->energyPoints << "\n";
    std::cout << std::setw(17) << std::left << "Melee damage: " << this->meleeAttackDamage << "\n";
    std::cout << std::setw(17) << std::left << "Ranged damage: " << this->rangedAttackDamage << "\n";
    std::cout << std::setw(17) << std::left << "DamageReduction: " << this->armourDamageReduction << "\n";
    std::cout << std::setw(17) << std::left << "----------------------\n\n";
}