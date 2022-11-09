/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:55:44 by bbenidar          #+#    #+#             */
/*   Updated: 2022/11/09 11:55:09 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include <stdarg.h>
// checkFormat(char *c)
// {
//     if (c == 'd')
//         ftputnbr();
// }

int ft_printf(const char *str, ...)
{
    int i;

    i = 0;
    va_list ptr;
    va_start(ptr, str);
    while(str[i])
    {
        // if (str[i] == '%')
        //     checkFormat(str[i++])
        // else
            write(1, &str[i], 1);
        i++;
    }
    va_end(ptr);
    return(1);
  
}
int main()
{
    ft_printf("brahim");
    return 0;
}