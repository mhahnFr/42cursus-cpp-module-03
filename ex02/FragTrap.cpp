//
// Created by Manuel Hahn on 5/17/22.
//

#include <iostream>
#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "FragTrap " << name << " assignment operator called" << std::endl;
    ClapTrap::operator=(other);
    return *this;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " asks: High fives?" << std::endl;
    std::string response;
    std::getline(std::cin, response);
    if (std::cin.eof() || std::cin.bad() || response.empty()) {
        std::cout << ":(" << std::endl;
    } else {
        std::cout << ":D" << std::endl;
    }
}
