/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:50:54 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/10/06 13:49:51 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main (void)
{
	int fd;
	char *string = NULL;
	fd = open("test.txt", O_RDONLY);
	while (1)
	{
		string = get_next_line(fd);
		if (!string)
			break ;
		printf("%s", string);
	}
	return (0);
}
