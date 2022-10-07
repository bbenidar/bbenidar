/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:31:41 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/07 10:02:27 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*p;
	unsigned char	*p2;	
	
	p =  ((unsigned char	*)dst);
	p2 = ((unsigned char *)src);
	while (*p2 && n > 0)
	{
		*p = *p2;
		*p++;
		*p2++;
		n--;
	}	
}

int main ()
{
  char str1[] = "Geeks";
  char str2[] = "Quiz";

  puts("str1 before memcpy ");
  puts(str1);

  /* Copies contents of str2 to str1 */
  ft_memcpy (str1, str2, 10);

  printf("\nstr1 after memcpy = %s ", str1);
  return 0;
}
