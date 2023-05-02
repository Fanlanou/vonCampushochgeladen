/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:14:45 by jbagomed          #+#    #+#             */
/*   Updated: 2023/05/02 12:29:02 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int     main()
{
        printf("%d", ft_str_is_numeric("abcdefghijkl"));
        printf("\n%d", ft_str_is_numeric("1399526"));
        printf("\n%d", ft_str_is_numeric("134556efghij67"));
        printf("\n%d", ft_str_is_numeric(""));
}*/
