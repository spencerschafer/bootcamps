//
// Created by Spencer SCHAFER on 2018/06/08.
//

#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &robotName) {
    std::cout << "Initiating start sequence!\n";
    this->name = robotName;
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->meleeAttackDamage = 30;
    this->rangedAttackDamage = 25;
    this->armourDamageReduction = 5;
    std::cout << this->name << " reporting for duty!\n";
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

ClapTrap::ClapTrap() {
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

ClapTrap::~ClapTrap() {
    std::cout << "Éteindre. Goodbye!\n";
}

void ClapTrap::rangedAttack(std::string const &target) {
    srand(time(NULL));
    double random = (rand() % 1000) * 0.001;
    int damage = (int) (this->rangedAttackDamage * random);
    std::cout << "SUCK 'EM! - [FR4G-TP " << this->name << " attacks " << target << " at range, causing " << damage
              << " points of damage]\n";
}

void ClapTrap::meleeAttack(std::string const &target) {
    srand(time(NULL));
    double random = (rand() % 1000) * 0.001;
    int damage = (int) (this->meleeAttackDamage * random);
    std::cout << "POW PA PA POW HIYAH! - [FR4G-TP " << this->name << " attacks " << target << " at arms length, causing "
              << damage
              << " points of damage]\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "Ow hohoho, that hurts! Yipes!\n";
    int health = this->hitPoints - (amount - this->armourDamageReduction);
    if (health <= 0) {
        this->hitPoints = 0;
        std::cout << "He dead!\n";
    } else {
        this->hitPoints = health;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "I found health!\n";
    int health = this->hitPoints + amount;
    if (health >= this->maxHitPoints)
        this->hitPoints = this->maxHitPoints;
    else
        this->hitPoints += amount;
}

void ClapTrap::levelUp() {
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

void ClapTrap::printStatus() const {
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
