/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 05:34:55 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/07 02:44:56 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// contructors

ClapTrap::ClapTrap() :_name("Not Def"), Hits_point(10), Energy_Points(10), attack_damage(0)
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), Hits_point(10), Energy_Points(10), attack_damage(0)
{
    std::cout << "param constructor called" << std::endl;
}
// end Contructors 


ClapTrap::ClapTrap(ClapTrap const &fixed)
{
    std::cout << "copy constructor called" << std::endl;
    this->_name = fixed._name;
    this->Hits_point = fixed.Hits_point;
    this->Energy_Points = fixed.Energy_Points;
    this->attack_damage = fixed.attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "oprator '=' called" << std::endl;
    this->_name = src._name;
    this->attack_damage = src.attack_damage;
    this->Energy_Points = src.Energy_Points;
    this->Hits_point = src.Hits_point;
    return(*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}



// main member functions
void ClapTrap::attack(const std::string& target) 
{
    if (this->Hits_point  >= 1 && this->Energy_Points >= 1) {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
        this->Energy_Points--;
    } else {
        std::cout << "ClapTrap " << this->_name << " has no hit points or energy points to attack " << target << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    if (this->Hits_point > 0) 
    {
        unsigned int damageTaken = amount;
        if(damageTaken > this->Hits_point)
            damageTaken = Hits_point;
        this->Hits_point -= damageTaken;
        std::cout << "ClapTrap " << this->_name << " takes " << damageTaken << " points of damage." << std::endl;
        if (this->Hits_point == 0) {
            std::cout << "ClapTrap " << this->_name << " is defeated!" << std::endl;
        }
    } else {
        std::cout << "ClapTrap " << this->_name << " is already defeated and can't take more damage." << std::endl;
    }
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if((this->Hits_point + amount) > 10)
    {
        std::cout << "ClapTrap " << this->_name << " Can't be repaird to have more than 10 hits points :)" << std::endl;
        return;
    }
    if (this->Energy_Points > 0) 
    {
        this->Hits_point += amount;
        this->Energy_Points--;
        std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " hit points." << std::endl;
    } else {
        std::cout << "ClapTrap " << this->_name << " cannot be repaired (no energy points)." << std::endl;
    }
}
// end main member functions

// testing function
unsigned int ClapTrap::getEnergyPoints(void)
{
    return(this->Energy_Points);
}

unsigned int ClapTrap::getHitsPoints(void)
{
    return(this->Hits_point);
}


