/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:58:49 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/07 03:28:38 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "Testing ClapTrap" << std::endl;
    
    // Create an instance of ClapTrap
    ClapTrap clapTrap("CL4P-TP");

    // Test some ClapTrap methods
    clapTrap.attack("Target 1");
    clapTrap.takeDamage(20);
    clapTrap.beRepaired(10);

    std::cout << "-------------------------------" << std::endl;

	return (0);
}