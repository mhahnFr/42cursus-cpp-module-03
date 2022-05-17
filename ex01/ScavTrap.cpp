//
// Created by Manuel Hahn on 5/17/22.
//

#include "ScavTrap.h"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
    attackDamage = 20;
    energyPoints = 50;
    hitPoints = 100;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "ScavTrap " << name << " constructed" << std::endl;
    attackDamage = 20;
    energyPoints = 50;
    hitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap " << name << " assignment operator called" << std::endl;
    ClapTrap::operator=(other);
    return *this;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << name << " attack() called" << std::endl;
    ClapTrap::attack(target);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " enters guarding mode" << std::endl;
}
