/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algasnie <algasnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:43:43 by algasnie          #+#    #+#             */
/*   Updated: 2026/02/21 15:21:44 by algasnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
private:
	std::string name;

public:
	Zombie(std::string name);

	~Zombie();

	void announce(void);
	
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);


#endif