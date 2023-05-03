/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:30:54 by jbagomed          #+#    #+#             */
/*   Updated: 2023/05/02 12:42:27 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_lowercase(""));
	printf("\n%d", ft_str_is_lowercase("asfasfd"));
	printf("\n%d", ft_str_is_lowercase("sf214dfhfd"));
	printf("\n%d", ft_str_is_lowercase("sdfdsDFDSQWeq"));
	printf("\n%d", ft_str_is_lowercase("312345243657"));

}*/
