/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:50:09 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/10/14 15:37:18 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	/***********************ft_isdigit*********************/
	printf("%i Retorno digit \n%i Retorno Original\n\n",ft_isdigit('4'),isdigit('4'));
	printf("%d Retorno digit \n%d Retorno Original\n\n",ft_isdigit('0'),isdigit('0'));
	printf("%d Retorno digit \n%d Retorno Original\n------\n",ft_isdigit('c'),isdigit('c'));
	/************************ft_isalpha********************/
	printf("%i Retorno isalpha \n%i Retorno Original\n\n",ft_isalpha('b'),isalpha('b'));
	printf("%d Retorno isalpha \n%d Retorno Original\n\n",ft_isalpha('0'),isalpha('0'));
	printf("%d Retorno isalpha \n%d Retorno Original\n-------\n",ft_isalpha('4'),isalpha('4'));
	/************************ft_isascii********************/
	printf("%i Retorno isascii \n%i Retorno Original\n\n",ft_isascii(129),isascii(129));
	printf("%i Retorno isascii \n%i Retorno Original\n\n",ft_isascii('~'),isascii('~'));
	printf("%i Retorno isascii \n%i Retorno Original\n-------\n",ft_isascii(' '),isascii(' '));
	/************************ft_isalnum********************/
	printf("%i Retorno isalnum \n%i Retorno Original\n\n",ft_isalnum('9'),isalnum('9'));
	printf("%i Retorno isalnum \n%i Retorno Original\n\n",ft_isalnum('\n'),isalnum('\n'));
	printf("%i Retorno isalnum \n%i Retorno Original\n-------\n",ft_isalnum('Z'),isalnum('Z'));
	/************************ft_isprint********************/
	printf("%i Retorno isprint \n%i Retorno Original\n\n",ft_isprint('9'),isprint('9'));
	printf("%i Retorno isprint \n%i Retorno Original\n\n",ft_isprint('\t'),isprint('\t'));
	printf("%i Retorno isprint \n%i Retorno Original\n-------\n",ft_isprint('Z'),isprint('Z'));
	/************************ft_strlen********************/
	printf("%zu Retorno strlen \n%zu Retorno Original\n\n",ft_strlen("hello"),strlen("hello"));
	printf("%zu Retorno strlen \n%zu Retorno Original\n\n",ft_strlen(" "),strlen(" "));
	printf("%zu Retorno strlen \n%zu Retorno Original\n-------\n",ft_strlen(""),strlen(""));
	/************************ft_toupper********************/
	printf("%i Retorno toupper \n%i Retorno Original\n\n",ft_toupper('a'),toupper('a'));
	printf("%i Retorno toupper \n%i Retorno Original\n\n",ft_toupper(' '),toupper(' '));
	printf("%i Retorno toupper \n%i Retorno Original\n-------\n",ft_toupper('/'),toupper('/'));
	/************************ft_tolower*******************/
	printf("%i Retorno tolower \n%i Retorno Original\n\n",ft_tolower('A'),tolower('A'));
	printf("%i Retorno tolower \n%i Retorno Original\n\n",ft_tolower(' '),tolower(' '));
	printf("%i Retorno tolower \n%i Retorno Original\n-------\n",ft_tolower('z'),tolower('z'));
	/************************ft_strlcpy*******************/

	const char *str = "A casa muito";
	char dest_original[10];
	char dest_ft[10];
	printf("%zu Retorno strlcpy \n%d Retorno Original\n\n",ft_strlcpy(dest_ft,str,sizeof(dest_ft)), strlcpy(dest_original,str,sizeof(dest_original)));
	printf("%s Retorno strlcpy \n%s Retorno Original\n\n",dest_ft, dest_original);
	return (0);
}
