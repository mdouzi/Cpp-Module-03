/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:44:24 by mdouzi            #+#    #+#             */
/*   Updated: 2023/11/03 20:35:49 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HHP
#define SCAVTRAP_HHP

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap 
{
    private:
        int mode;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &other);
        virtual ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &other);
        void attack(const std::string &target);
        void guardGate(void);        
};

#endif