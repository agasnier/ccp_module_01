/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algasnie <algasnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:10:15 by algasnie          #+#    #+#             */
/*   Updated: 2026/02/21 16:03:29 by algasnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int	N = 5;
	
	Zombie* horde = zombieHorde(N, "test");

	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	
	delete[] horde;

	return (0);
}