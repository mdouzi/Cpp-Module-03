/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:44:19 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/07 04:10:36 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
//neovim chad

ScavTrap::ScavTrap(): ClapTrap()
{
    Hits_point = 100;
    Energy_Points = 50;
    attack_damage = 20;
    this->mode = 0;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    Hits_point = 100;
    Energy_Points = 50;
    attack_damage = 20;
    this->mode = 0;
    std::cout << "ScavTrap param constructor called (" << name << ") " << std::endl; 
}

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other)
{
   this->mode = other.mode;
   std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    this->_name = other._name;
    this->Hits_point = other.Hits_point;
    this->attack_damage = other.attack_damage;
    this->Energy_Points = other.Energy_Points;
    this->mode = other.mode;
    std::cout << "ScavTrap oprator '=' called" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if(this->Hits_point >= 1 && this->Energy_Points >= 1)
    {
        std::cout << "ScavTrap " <<this->_name << " Attacks " << target <<" causing "<< this->attack_damage<<" points of damage!"<<std::endl; 
        this->Energy_Points--;
    }
    else
        std::cout << this->_name << " has no Hits points to attack " << target << std::endl;
}

void ScavTrap::guardGate(void)
{
    if(this->mode == 0)
    {
        this->mode = 1;
        std::cout << "guard Gate "<< this->_name << " mode in on now" << std::endl; 
    } else
        std::cout << "guard Gate "<< this->_name << "mode is already on " << std::endl;
}

