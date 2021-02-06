/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 16:16:36 by aerragha          #+#    #+#             */
/*   Updated: 2018/10/04 17:59:51 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void		display(char *filename)
{
	int		file;
	char	charactere;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &charactere, 1))
		write(1, &charactere, 1);
	close(file);
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
		display(argv[1]);
	return (0);
}
