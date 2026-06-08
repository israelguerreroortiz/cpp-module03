/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:12:52 by iisraa11          #+#    #+#             */
/*   Updated: 2026/06/08 20:58:34 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
    this->name = "Default";
    this->health = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << "ScavTrap default constructor called\n";
};
ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
    this->health = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << "ScavTrap name constructor called for " << this->name << "\n";
};
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called\n";
};
ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other)
    {
        ClapTrap::operator=(other); 
    }
    std::cout << "ScavTrap copy assignment operator called\n";
    return *this;
};
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called\n";
};
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode.\n";
};