/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:50:38 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/06 12:32:17 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace(std::ifstream *infile, std::ofstream *outfile, std::string str1, std::string str2)
{
	std::string		line;
	
	while (std::getline(*infile, line))
	{
		for (int i = 0, j; line[i]; i++)
		{
			j = 0;
			while (str1[j])
			{
				if (line[i + j] != str1[j])
					break;
				j++;
			}
			if (j == (int) str1.length() && j)
			{
				*outfile << str2;
				i += j - 1;
			}
			else
				*outfile << line[i];
		}
		*outfile << '\n';
	}
}

int	main(int argc, char **argv)
{
	std::string	filename;

	if (argc != 4)
		return (std::cout << "3 Args required" << std::endl, 1);
	filename = (std::string) argv[1] + ".replace";
	std::ifstream	infile(argv[1]);
	if (!infile.is_open())
		return (std::cout << "Can't open " << argv[1] << " file" << std::endl, 1);
	std::ofstream	outfile(filename.c_str());
	if (!infile.is_open())
		return (std::cout << "Can't open " << argv[1] << ".replace " << " file" << std::endl, 1);
	replace(&infile, &outfile, argv[2], argv[3]);
	infile.close();
	outfile.close();
	return (0);
}

