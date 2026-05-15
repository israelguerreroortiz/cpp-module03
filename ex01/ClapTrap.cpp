
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("Default"), health(10), energy(10), damage(10) {
    std::cout << "Base ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) :  name(name), health(10), energy(10), damage(10)
{
    std::cout << "ClapTrap Constructor with arguments called\n";
};

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "ClapTrap copy constructor called\n";

}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->damage = other.damage;
        this->health = other.health;
        this->energy = other.energy;
    }

    std::cout << "ClapTrap copy assignment operator called\n";

    return *this;
}

ClapTrap::~ClapTrap() {std::cout << "Destructor called\n";};

void ClapTrap::attack(const std::string &target)
{
    if (this->checkAviability() == 1)
        return ;
        
    this->energy--;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!\n";

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->checkAviability() == 1)
        return ;

    this->energy--;
    this->health+=amount;

    std::cout << "ClapTrap " << this->name << " repairs itself, it regains " << amount << " hit points\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->health < 1)
        return ;

    this->health-= amount;
    if (this->health < 0)
        this->health = 0;
    std::cout << "ClapTrap " << this->name << " has been damaged with " << amount << " hit points\n";
}

int ClapTrap::checkAviability(void) const
{
    int flag = 0;
    if (this->energy < 1)
    {
        std::cout << "ClapTrap " << this->name << " doesn't have energy points\n";
        flag = 1;
    }

    if (this->health < 1)
    {
        std::cout << "ClapTrap " << this->name << " doesn't have health points\n";
        flag = 1;
    }

    return flag;
}