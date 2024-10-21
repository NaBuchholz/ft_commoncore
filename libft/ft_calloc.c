/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:57:28 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/10/21 12:39:55 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			index;
	unsigned char	*temp;

	index = 0;
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	ft_memset(temp, 0, (size * nmemb));
	return (temp);
}
