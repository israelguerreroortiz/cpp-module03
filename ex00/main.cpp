/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:25:43 by isrguerr          #+#    #+#             */
/*   Updated: 2026/05/15 19:02:32 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap clapy("Clapy");
    ClapTrap trapy("Trapy");
    
    for (int i = 0; i < 10; i++) {
        clapy.attack("Juanjo");
    }
    
    
    std::cout << "\n[No energy try]:" << std::endl;
    clapy.attack("juanjo");
    std::cout << std::endl;

    std::cout << "-- DAMAGE WITHOUT ENERGY" << std::endl;
    
    clapy.takeDamage(5);
    clapy.takeDamage(3);
    std::cout << std::endl;

    std::cout << "--- REPAIRING AND LIMITS ---" << std::endl;
    
    trapy.beRepaired(5);
    
    
    trapy.takeDamage(20);
    
    
    trapy.takeDamage(5);
    std::cout << std::endl;

    std::cout << "--- ROBOT WITH LIVE CAN'T ACT ---" << std::endl;
    
    trapy.attack("clap");
    trapy.beRepaired(10);
    clapy.beRepaired(10);
    std::cout << std::endl;

    std::cout << "--- END ---" << std::endl;
    
    return 0;
}