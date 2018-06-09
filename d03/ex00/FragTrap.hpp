#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP


#include <string>

class FragTrap {

private:
    std::string name; //constructor parameter
    int hitPoints; //100
    int maxHitPoints; //100
    int energyPoints; //100
    int maxEnergyPoints; //100
    int level; // 1
    int meleeAttackDamage; //30
    int rangedAttackDamage; //20
    int armourDamageReduction; //5

public:
    explicit FragTrap(std::string const &robotName);
    explicit FragTrap(void);
    ~FragTrap();
    FragTrap(const FragTrap & );
    FragTrap &operator=(FragTrap const &instance);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void grenadeAttack(std::string const & target);
    void flameAttack(std::string const & target);
    void iceAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vault_hunter_dot_exe(std::string const & target);
    void levelUp();
    void printStatus () const;
};

#endif //EX00_FRAGTRAP_HPP
