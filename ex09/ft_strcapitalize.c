/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:12:59 by jbagomed          #+#    #+#             */
/*   Updated: 2023/05/02 18:13:34 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	while (str[i] != '\0')
	{
		if (space == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			space++;
		}
		else if (space > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			space = 0;
		else
			space ++;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "hasdi pjdsiad qwe0ikdsi oasfud";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
