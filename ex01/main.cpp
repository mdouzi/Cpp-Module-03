/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:58:49 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/07 03:47:10 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	std::cout << "Exercise 00 - Testing ClapTrap" << std::endl;
    
    // Create an instance of ClapTrap
    ClapTrap clapTrap("CL4P-TP");

    // Test some ClapTrap methods
    clapTrap.attack("Target 1");
    clapTrap.takeDamage(20);
    clapTrap.beRepaired(10);

    std::cout << "-------------------------------" << std::endl;

	std::cout << "Exercise 01 - Testing ScavTrap" << std::endl;
    ScavTrap scavTrap("Scav");
    scavTrap.attack("Bandit");
    scavTrap.guardGate();
    std::cout << "-------------------------------" << std::endl;
	return (0);
}