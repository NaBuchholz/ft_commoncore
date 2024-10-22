/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:26:44 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/10/22 17:44:09 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	char	*temp_str;

	count = 0;
	temp_str = (char *)s;
	while (*temp_str)
	{
		while (*temp_str == c)
			temp_str++;
		if (*temp_str)
			count++;
		while (*temp_str && *temp_str != c)
			temp_str++;
	}
	return (count);
}

static void	fill_words_array(char **arr, char const *s, char c)
{
	char			*temp_s;
	size_t			count;
	unsigned int	start;

	temp_s = (char *)s;
	count = 0;
	while (*temp_s != '\0')
	{
		while (*temp_s == c)
			temp_s++;
		start = temp_s - s;
		while (*temp_s && *temp_s != c)
			temp_s++;
		if (temp_s - s > start)
		{
			arr[count] = ft_substr(s, start, (size_t)(temp_s - s - start));
			count++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char		**words_array;
	size_t		count;

	if (s == NULL)
		return (NULL);
	count = count_words(s, c);
	words_array = (char **)malloc((count + 1) * (sizeof(char *)));
	if (!words_array)
		return (NULL);
	fill_words_array(words_array, s, c);
	if (!words_array)
		return (NULL);
	return (words_array);
}
