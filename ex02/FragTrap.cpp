/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:52:50 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/07 04:12:29 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	Hits_point = 100;
	Energy_Points = 100;
	attack_damage = 30;
	std::cout<< " FragTrap  default Constructor called" << std::endl;
}


FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	Hits_point = 100;
	Energy_Points = 100;
	attack_damage = 30;
	std::cout<< " FragTrap  param constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << " FragTrap  Copy constructor called" << std::endl;	
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called " << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    this->_name = other._name;
    this->Hits_point = other.Hits_point;
    this->attack_damage = other.attack_damage;
    this->Energy_Points = other.Energy_Points;
    std::cout << " FragTrap  oprator '=' called" << std::endl;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << " FragTrap ' " << this->_name <<" ' say" << " HIGH FIVES GUYS" << std::endl; 
}