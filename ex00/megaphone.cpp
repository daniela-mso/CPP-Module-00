/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:29:41 by danielad          #+#    #+#             */
/*   Updated: 2026/03/17 18:29:56 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	int	x;
	
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *";
		return (0);
	}
	x = 1;
	while (argv[x] != NULL)
	{
		int i =0;
		while(argv[x][i] != '\0')
		{
			if (argv[x][i] >= 97 && argv[x][i] <=122)
				argv[x][i] -= 32;
			std::cout << argv[x][i];
			i++;
		}
		std::cout << " ";
		x++;
	}
	return (0);
}
