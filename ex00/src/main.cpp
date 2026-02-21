/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algasnie <algasnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:10:15 by algasnie          #+#    #+#             */
/*   Updated: 2026/02/21 15:23:50 by algasnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	
	randomChump("Stack");
	
	Zombie* heap = newZombie("Heap");
	heap->announce();

	delete heap;
	

	return (0);
}