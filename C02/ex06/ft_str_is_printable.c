/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:21:10 by jbagomed          #+#    #+#             */
/*   Updated: 2023/05/02 14:32:21 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("asqwe2!#$%&asfd"));
	printf("\n%d", ft_str_is_printable("sf214dfhfd"));
	printf("\n%d", ft_str_is_printable("sdfdsDFDSQWeq"));
	printf("\n%d", ft_str_is_printable("31_32345243657"));
}*/
