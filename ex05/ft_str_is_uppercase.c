/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:00:45 by jbagomed          #+#    #+#             */
/*   Updated: 2023/05/02 14:07:55 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_uppercase(""));
	printf("\n%d", ft_str_is_uppercase("ADSAIHFUI"));
	printf("\n%d", ft_str_is_uppercase("sf214dfhfd"));
	printf("\n%d", ft_str_is_uppercase("sdfdsDFDSQWeq"));
	printf("\n%d", ft_str_is_uppercase("312345243657"));

}*/
