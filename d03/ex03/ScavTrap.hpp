#ifndef EX00_SCAVTRAP_HPP
#define EX00_SCAVTRAP_HPP


#include "FragTrap.hpp"

class ScavTrap : public ClapTrap {

public:

    explicit ScavTrap(std::string const&robotName);
    explicit ScavTrap(void);
    ~ScavTrap();

    void challengeNewcomer();
};


#endif //EX00_SCAVTRAP_HPP
