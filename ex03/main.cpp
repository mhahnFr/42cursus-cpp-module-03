//
// Created by Manuel Hahn on 5/17/22.
//

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"

int main() {
    ClapTrap first("Someone");
    ScavTrap second("Other one");
    FragTrap third("Third");
    DiamondTrap monster("monster");

    first.setAttackDamage(5);
    first.attack(second.getName());
    second.takeDamage(first.getAttackDamage());
    second.beRepaired(5);
    second.setAttackDamage(11);
    second.attack(first.getName());
    first.takeDamage(second.getAttackDamage());
    third.attack(second.getName());
    second.takeDamage(third.getAttackDamage());
    third.highFivesGuys();
    monster.attack(third.getName());
    third.takeDamage(monster.getAttackDamage());
    monster.whoAmI();
}
