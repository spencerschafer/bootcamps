#ifndef EX00_SCAVTRAP_HPP
#define EX00_SCAVTRAP_HPP


#include "FragTrap.hpp"

class ScavTrap {


protected:
    std::string name;
    int hitPoints;
    int maxHitPoints;
    int energyPoints;
    int maxEnergyPoints;
    int level;
    int meleeAttackDamage;
    int rangedAttackDamage;
    int armourDamageReduction;

public:

    explicit ScavTrap(std::string const&robotName);
    explicit ScavTrap(void);
    ~ScavTrap();
    ScavTrap(const ScavTrap &);
    ScavTrap &operator=(ScavTrap const &instance);

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer();
    void levelUp();
    void printStatus() const;
};


#endif //EX00_SCAVTRAP_HPP
