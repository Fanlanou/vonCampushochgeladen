/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:26:36 by jbagomed          #+#    #+#             */
/*   Updated: 2023/05/02 11:32:04 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int     main()
{
        char source[] = "hello world";
        char destin[] = "destination";
        int     n = 7;

        printf("BEFORE\nsrc: %s\ndes: %s\n", source, destin);

        ft_strncpy(destin, source, n);

        printf("AFTER\nsrc: %s\ndes: %s\n", source, destin);
        return (0);
}*/
