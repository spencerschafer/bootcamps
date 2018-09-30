#ifndef EX00_NINJATRAP_HPP
#define EX00_NINJATRAP_HPP


#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{
public:
    explicit NinjaTrap();
    explicit NinjaTrap(std::string const &robotName);

    virtual ~NinjaTrap();

    void ninjaShoeBox(ClapTrap const &trap);
    void ninjaShoeBox(FragTrap const &trap);
    void ninjaShoeBox(ScavTrap const &trap);
    void ninjaShoeBox(NinjaTrap const &trap);

};

#endif //EX00_NINJATRAP_HPP
