//
// Created by Manuel Hahn on 5/17/22.
//

#ifndef EX01_SCAVTRAP_H
#define EX01_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const ScavTrap &);
    ScavTrap(const std::string &name);
    ~ScavTrap();

    ScavTrap & operator=(const ScavTrap &);

    void attack(const std::string &target);
    void guardGate();
};


#endif //EX01_SCAVTRAP_H
