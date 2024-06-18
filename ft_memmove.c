/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen- <cnguyen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:41:46 by cnguyen-          #+#    #+#             */
/*   Updated: 2024/06/16 17:14:10 by cnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		dst = ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}

/*	//TEST CASES
#include <string.h>
#include <stdio.h>

void	test(size_t len)
{
	char	string1[20] = "Hello world !";
	char	string2[20] = "Hello world !";
	char	string3[20] = "friend";
	char	string4[20] = "Hello world !";
	char	string5[20] = "Hello world !";
	char	string6[20] = "Hello world !";
	char	string7[20] = "Hello world !";
	void	*nullptr = NULL;

	printf("Destination string : \"%s\"\n", string1);
	printf("Copying \"%s\" to 6th char (n = %ld)\n", string3, len);
	memmove(string1 + 6, string3, len);
	ft_memmove(string2 + 6, string3, len);
	printf("memmove : %s\n", string1);
	printf("ft_memmove : %s\n", string2);
	printf("Copying \"%s\" to 6th char (n = %ld)\n", string4, len);
	memmove(string4 + 6, string4, len);
	ft_memmove(string5 + 6, string5, len);
	printf("memmove : %s\n", string4);
	printf("ft_memmove : %s\n", string5);
	printf("Copying \"%s\" from 6th char (n = %ld)\n", string6, len);
	memmove(string6, string6 + 6, len);
	ft_memmove(string7, string7 + 6, len);
	printf("memmove : %s\n", string6);
	printf("ft_memmove : %s\n", string7);
	if (len == 0)
	{
		printf("Destination string is NULL\n"); // CRASH when len > 0
		memmove(nullptr, string3, len);
		ft_memmove(nullptr, string3, len);
		printf("Does nothing.\n");
		printf("Source string is NULL\n"); // CRASH when len > 0
		memmove(string3, nullptr, len);
		ft_memmove(string3, nullptr, len);
		printf("Does nothing.\n");
	}
	printf("Destination and source strings are both NULL\n"); // NO CRASH on macOS
	memmove(nullptr, nullptr, len);
	ft_memmove(nullptr, nullptr, len);
	printf("Does nothing.\n");
}

int	main(void)
{
	test(0);
	printf("\n");
	test(3);
	printf("\n");
	test(6);
	printf("\n");
	test(10);
	return (0);
}
*/