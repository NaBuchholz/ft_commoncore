/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:40:19 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/10/16 23:31:36 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + len_s);
	while (len_s > 0)
	{
		if (s[len_s - 1] == (char) c)
			return ((char *)s + len_s - 1);
		len_s--;
	}
	return (NULL);
}
