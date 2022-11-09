/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fuzbuz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:46:24 by bbenidar          #+#    #+#             */
/*   Updated: 2022/08/11 09:22:08 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
  write (1, &c, 1);  
}
void ft_putnbr(int a)
{
    if (a > 9)
    {
        ft_putnbr(a / 10);
        ft_putnbr(a % 10);
    }
    if ( a >= 0 && a <= 9 )
    {
       ft_putchar(a + '0'); 
    }
}

int main()
{
    int a;

    a = 1;
    while (a <= 100)
    {
        if (a % 5 == 0 && a % 3 == 0)
        {
            write(1 , "fizzbuzz", 8);
        }
        else if (a % 3 == 0)
        {
            write(1, "fizz", 4);
        }
       else if ( a % 5 == 0)
        {
            write(1 , "buzz", 4);
        }
        else 
        ft_putnbr(a);
        write (1 , "\n", 1);
        a++;
    }
}
