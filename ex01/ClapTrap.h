//
// Created by Manuel Hahn on 5/17/22.
//

#ifndef EX00_CLAPTRAP_H
#define EX00_CLAPTRAP_H


#include <string>

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(const ClapTrap &);
    ClapTrap(const std::string &name);
    ~ClapTrap();

    ClapTrap & operator=(const ClapTrap &);

    const std::string &getName() const;
    void setName(const std::string &name);
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;

    virtual void attack(const std::string & target);
    void takeDamage(unsigned int amount);
    void setHitPoints(unsigned int hitPoints);
    void setEnergyPoints(unsigned int energyPoints);
    void setAttackDamage(unsigned int attackDamage);
    void beRepaired(unsigned int amount);

protected:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
};


#endif //EX00_CLAPTRAP_H
