/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:46:37 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/10/23 19:48:52 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	count;

	count = 0;
	while (s[count])
	{
		write(fd, &s[count], 1);
		count++;
	}
	write(fd, '\0', 1);
	write(fd, "\n", 1);
}
