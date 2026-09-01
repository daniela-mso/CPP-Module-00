/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:29:41 by danielad          #+#    #+#             */
/*   Updated: 2026/08/25 16:23:08 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int		i;
	int		x;
	bool	first;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	first = false;
	i = 1;
	while (av[i] != NULL)
	{
		if (first)
			std::cout << " ";
		x = 0;
		while (av[i][x] != '\0')
		{
			std::cout << (char)toupper(av[i][x]);
			x++;
		}
		first = true;
		i++;

	}
	return (0);
}
