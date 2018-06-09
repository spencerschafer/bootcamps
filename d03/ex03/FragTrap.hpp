#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP


#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

    explicit FragTrap(std::string const &robotName);
    explicit FragTrap();
    ~FragTrap();

    void grenadeAttack(std::string const & target);
    void flameAttack(std::string const & target);
    void iceAttack(std::string const & target);
    void vault_hunter_dot_exe(std::string const & target);
};

#endif //EX00_FRAGTRAP_HPP
