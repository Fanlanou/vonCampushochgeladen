/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:34:04 by jbagomed          #+#    #+#             */
/*   Updated: 2023/05/03 16:53:36 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main()
{
	printf("%d", ft_strncmp("Hello", "He", 4));
	printf("\n%d", ft_strncmp("Helllo", "Helo", 4));
	printf("\n%d", ft_strncmp("Hello", "HelLo", 4));
	printf("\n%d", ft_strncmp("Hellooo1", "Hellooo2", 4));
}*/
