//
// Created by Manuel Hahn on 5/17/22.
//

#include <iostream>
#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other) {
    std::cout << "DiamondTrap " << name << " copy constructor called" << std::endl;
    name = other.name;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name") {
    std::cout << "DiamondTrap " << name << " constructed" << std::endl;
    DiamondTrap::name = name;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    std::cout << "DiamondTrap " << name << " assignment operator called" << std::endl;
    name = other.name;
    ClapTrap::operator=(other);
    return *this;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap " << DiamondTrap::name << " or " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destructor called" << std::endl;
}
