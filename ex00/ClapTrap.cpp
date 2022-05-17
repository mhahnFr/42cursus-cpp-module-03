//
// Created by Manuel Hahn on 5/17/22.
//

#include <iostream>
#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap() : name(), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.getName()),
                                            hitPoints(other.getHitPoints()),
                                            energyPoints(other.getEnergyPoints()),
                                            attackDamage(other.getAttackDamage()) {
    std::cout << "ClapTrap " << name << " copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    name = other.getName();
    hitPoints = other.getHitPoints();
    energyPoints = other.getEnergyPoints();
    attackDamage = other.getAttackDamage();
    std::cout << "ClapTrap " << name << " assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}

const std::string &ClapTrap::getName() const {
    std::cout << "ClapTrap " << name << " getName() called" << std::endl;
    return name;
}

void ClapTrap::setName(const std::string &name) {
    std::cout << "ClapTrap " << name << " setName() called" << std::endl;
    ClapTrap::name = name;
}

unsigned int ClapTrap::getHitPoints() const {
    std::cout << "ClapTrap " << name << " getHitPoints() called" << std::endl;
    return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
    std::cout << "ClapTrap " << name << " getEnergyPoints() called" << std::endl;
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
    std::cout << "ClapTrap " << name << " getAttackDamage() called" << std::endl;
    return attackDamage;
}

void ClapTrap::attack(const std::string &target) {
    if (energyPoints > 0) {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!"
                << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " cannot attack anymore!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints >= amount) {
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
        hitPoints -= amount;
    } else {
        std::cout << "ClapTrap " << name << " cannot take " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0) {
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points" << std::endl;
        energyPoints--;
        hitPoints += amount;
    } else {
        std::cout << "ClapTrap " << name << " cannot be repaired anymore!" << std::endl;
    }
}

void ClapTrap::setHitPoints(unsigned int hitPoints) {
    std::cout << "ClapTrap " << name << " setHitPoints() to " << hitPoints << " points." << std::endl;
    ClapTrap::hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
    std::cout << "ClapTrap " << name << " setEnergyPoint() to " << energyPoints << " points." << std::endl;
    ClapTrap::energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
    std::cout << "ClapTrap " << name << " setAttackDamage() to " << attackDamage << " points." << std::endl;
    ClapTrap::attackDamage = attackDamage;
}
