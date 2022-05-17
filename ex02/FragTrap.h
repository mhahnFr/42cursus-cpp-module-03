//
// Created by Manuel Hahn on 5/17/22.
//

#ifndef EX02_FRAGTRAP_H
#define EX02_FRAGTRAP_H


#include "ClapTrap.h"

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(const FragTrap &);
    FragTrap(const std::string &);
    ~FragTrap();

    FragTrap & operator=(const FragTrap &);

    void highFivesGuys();
};


#endif //EX02_FRAGTRAP_H
