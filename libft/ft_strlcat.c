/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:46:56 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/10/16 14:01:01 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	remaining_size;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	remaining_size = size - len_dst;
	if (len_dst >= size)
		len_dst = size;
	if (len_dst == size)
		return (len_dst + len_src);
	if (len_src < remaining_size)
		ft_memcpy(dst + len_dst, src, remaining_size + 1);
	else
	{
		ft_memcpy(dst + len_dst, src, remaining_size - 1);
		dst[size - 1] = '\0';
	}
	return (len_src + len_dst);
}
// len_dst = ft_strlen(dst);
// len_src = ft_strlen(src);
// if (len_dst >= dst_size)
// 	len_dst = dst_size;
// if (len_dst == dst_size)
// 	return (len_dst + len_src);
// if (len_src < dst_size - len_dst)
// 	ft_memcpy(dst + len_dst, src, len_src + 1);
// else
// {
// 	ft_memcpy(dst + len_dst, src, dst_size - len_dst - 1);
// 	dst[dst_size - 1] = '\0';
// }
// return (len_dst + len_src);
