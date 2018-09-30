#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP


#include <string>

class ClapTrap {

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

    explicit ClapTrap(std::string const &robotName);
    explicit ClapTrap();
    ~ClapTrap();

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void levelUp();
    void printStatus () const;
};

#endif //EX00_CLAPTRAP_HPP
