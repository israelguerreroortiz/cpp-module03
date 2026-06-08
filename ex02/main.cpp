/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:25:43 by isrguerr          #+#    #+#             */
/*   Updated: 2026/06/08 21:03:15 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main() {
	std::cout << "=== ClapTrap tests ===" << std::endl;

	ClapTrap a("Alpha");
	a.attack("Target1");
	a.takeDamage(5);
	a.beRepaired(3);

	ClapTrap b(a);
	std::cout << "Copy constructed ClapTrap b from a" << std::endl;
	b.attack("Target2");

	ClapTrap c;
	c = a;
	std::cout << "Assigned ClapTrap c = a" << std::endl;
	c.attack("Target3");

	std::cout << "\n=== ScavTrap tests ===" << std::endl;

	ScavTrap s("Scavy");
	s.attack("Enemy");
	s.guardGate();
	s.takeDamage(20);
	s.beRepaired(10);

	ScavTrap s2(s);
	s2.guardGate();

	ScavTrap s3;
	s3 = s;
	s3.attack("Another");

	return 0;
}