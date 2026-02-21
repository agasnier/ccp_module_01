/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algasnie <algasnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:43:43 by algasnie          #+#    #+#             */
/*   Updated: 2026/02/21 16:02:32 by algasnie         ###   ########.fr       */
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
	Zombie();

	~Zombie();

	void setName(std::string name);
	
	void announce(void);
	
};

Zombie* zombieHorde(int N, std::string name);


#endif