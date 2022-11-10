/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:55:44 by bbenidar          #+#    #+#             */
/*   Updated: 2022/11/10 16:27:04 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
int    ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int    ft_printstr(char *s)
{
    int    i;

    i = 0;
    if (s == NULL)
	{
		ft_putstr("(null)");
        return (6);
	}
    while (s[i])
        write(1, &s[i++], 1);
    return (i);
}

int   ft_printnbr(int n)
{
    {
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
    }
}
int ft_format(va_list ptr, const char format, int len)
{
     
            if (format == 'i' || format == 'd' )
              len +=  ft_printnbr(va_arg(ptr, int));
            else if (format == 'c')
               len += ft_putchar(va_arg(ptr, int));
            else if (format == 's')
                len += ft_printstr(va_arg(ptr, char *));
            else if (format == 'x' )
                len += ft_print_hex(va_arg(ptr, int), 'x');
            else if (format == 'X' )
                len += ft_print_hex(va_arg(ptr, int), 'X');
            else if (format == '%'  )
                len += ft_putchar('%');
            return (len);
}

int ft_printf(const char *str, ...)
{
    int i;
    int len;

   len = 0;
    i = 0;
    va_list ptr;
    va_start(ptr, str);
    while(str[i])
    {
        if (str[i] == '%')
        {
             if (str[i + 1] == 0)
                len = 0;
            else if (str[i+1] == ' ')
                i++;
            else
            {
                    len = ft_format(ptr, str[i+1], len);
                    i++;
            }
        }
        else
            len += write(1, &str[i], 1);
        i++;
    }
    va_end(ptr);
    return(len);
  
}
int main()
{
    printf("%d\n", ft_printf("brahim | %d | %c | %s | %i | %%%% | %x | %s |hello welcom home\n",40,'m',"brahim", 55, 546254,""));
    printf("%d\n", printf("brahim | %d | %c | %s | %i | %%%% | %x | %s |hello welcom home\n",40,'m',"brahim", 55, 546254,""));
    // ft_printf("brahim | %d | %c | %s | %i | %%%% | %x | %s |hello welcom home\n",40,'m',"brahim", 55, 546254,"855CE");
    // printf("brahim | %d | %c | %s | %i | %%%% | %x | %s |hello welcom home\n",40,'m',"brahim", 55, 546254,"855CE");
    return 0;
}