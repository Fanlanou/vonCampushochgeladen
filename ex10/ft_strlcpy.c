/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:28:11 by jbagomed          #+#    #+#             */
/*   Updated: 2023/05/02 19:28:22 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (s);
}

/*int	main()
{
	char	source[] = "hello world";
	char	destin[] = "destination";
	
        printf("BEFORE\nsrc: %s\ndes: %s\n", source, destin);

        ft_strlcpy(destin, source, 5);

        printf("AFTER\nsrc: %s\ndes: %s\n", source, destin);
        return (0);
}*/
