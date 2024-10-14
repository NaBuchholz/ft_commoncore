/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:36:14 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/10/14 14:52:04 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst,const char *src, size_t size);
#endif // END IF LIBFT_H
