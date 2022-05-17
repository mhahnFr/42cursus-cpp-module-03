//
// Created by Manuel Hahn on 5/17/22.
//

#include "ClapTrap.h"

int main() {
    ClapTrap first("Someone"), second("Other one");

    first.setAttackDamage(5);
    first.attack(second.getName());
    second.takeDamage(first.getAttackDamage());
    second.beRepaired(5);
    second.setAttackDamage(11);
    second.attack(first.getName());
    first.takeDamage(second.getAttackDamage());
}
