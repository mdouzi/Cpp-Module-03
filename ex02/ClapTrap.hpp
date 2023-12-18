/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 05:34:47 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/07 03:53:53 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HH
#define CLAPTRAP_HH

#include <iostream>
class ClapTrap
{
	protected:
	 std::string _name;
	 unsigned int Hits_point;
	 unsigned int Energy_Points;
	 unsigned int attack_damage;
	public:
	 ClapTrap();
	 ClapTrap(std::string name);
	 ClapTrap(ClapTrap const &fixed);
	 virtual ~ClapTrap();
	 ClapTrap &operator=(const ClapTrap &src);
	 void attack(const std::string& target);
	 void takeDamage(unsigned int amount);
	 void beRepaired(unsigned int amount);

	// for testing

	unsigned int getHitsPoints(void);
	unsigned int getEnergyPoints(void);
	
};


#endif
