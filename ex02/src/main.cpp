/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algasnie <algasnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:10:15 by algasnie          #+#    #+#             */
/*   Updated: 2026/02/21 17:16:19 by algasnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	std::string string = "HI THIS BRAIN";
	
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "String: " << &string << std::endl;
	std::cout << "StringPTR: " << stringPTR << std::endl;
	std::cout << "StringREF: " << &stringREF << std::endl;

	std::cout << "Valeur String: " << string << std::endl;
	std::cout << "Valeur StringPTR: " << *stringPTR << std::endl;
	std::cout << "Valeur StringREF: " << stringREF << std::endl;
}