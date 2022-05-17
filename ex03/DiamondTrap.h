//
// Created by Manuel Hahn on 5/17/22.
//

#ifndef EX03_DIAMONDTRAP_H
#define EX03_DIAMONDTRAP_H


#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
    DiamondTrap();
    DiamondTrap(const DiamondTrap &);
    DiamondTrap(const std::string &);
    ~DiamondTrap();

    DiamondTrap & operator=(const DiamondTrap &);
    void attack(const std::string & target);
    void whoAmI();

private:
    std::string name;
};


#endif //EX03_DIAMONDTRAP_H
