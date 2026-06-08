/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 21:12:52 by iisraa11          #+#    #+#             */
/*   Updated: 2026/06/08 21:16:33 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>
#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
    this->name = "Default";
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << "FragTrap default constructor called\n";
};
FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << "FragTrap name constructor called for " << this->name << "\n";
};
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called\n";
};
FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other)
    {
        ClapTrap::operator=(other); 
    }
    std::cout << "FragTrap copy assignment operator called\n";
    return *this;
};
FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called\n";
};
void FragTrap::highFiveGuys() {
    std::cout << "FragTrap " << this->name << " request a High Five!\n";
};