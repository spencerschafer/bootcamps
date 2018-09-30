#include <iostream>
#include <cmath>
#include <iomanip>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    std::cout << "Starting bootup sequence!\n";
    this->name = "Default";
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->meleeAttackDamage = 30;
    this->rangedAttackDamage = 20;
    this->armourDamageReduction = 5;
    std::cout << this->name << " reporting for duty!\n";
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";

}

FragTrap::FragTrap(std::string const &robotName) {
    std::cout << "Starting bootup sequence!\n";
    this->name = robotName;
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->name = robotName;
    this->meleeAttackDamage = 30;
    this->rangedAttackDamage = 20;
    this->armourDamageReduction = 5;
    std::cout << this->name << " reporting for duty!\n";
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

FragTrap::~FragTrap() {
    std::cout << "Powering down. Au revoir!\n";
}

void FragTrap::rangedAttack(std::string const &target) {
    srand(time(NULL));
    double random = (rand() % 1000) * 0.001;
    int damage = (int) (this->rangedAttackDamage * random);
    std::cout << "GET EM! - [FR4G-TP " << this->name << " attacks " << target << " at range, causing " << damage
              << " points of damage]\n";
}

void FragTrap::meleeAttack(std::string const &target) {
    srand(time(NULL));
    double random = (rand() % 1000) * 0.001;
    int damage = (int) (this->meleeAttackDamage * random);
    std::cout << "LEFT RIGHT LEFT HIYAH! - [FR4G-TP " << this->name << " attacks " << target << " at arms length, causing "
              << damage
              << " points of damage]\n";
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

void FragTrap::takeDamage(unsigned int amount) {
    std::cout << "Ow hohoho, that hurts! Yipes!\n";
    int health = this->hitPoints - (amount - this->armourDamageReduction);
    if (health <= 0) {
        this->hitPoints = 0;
        std::cout << "He dead!\n";
    } else {
        this->hitPoints = health;
    }
}

void FragTrap::beRepaired(unsigned int amount) {
    std::cout << "I found health!\n";
    int health = this->hitPoints + amount;
    if (health >= this->maxHitPoints)
        this->hitPoints = this->maxHitPoints;
    else
        this->hitPoints += amount;
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

void FragTrap::levelUp() {
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

void FragTrap::printStatus() const {
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
