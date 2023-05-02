/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:44:01 by jbagomed          #+#    #+#             */
/*   Updated: 2023/05/01 19:29:58 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main()
{
	char source[] = "hello world";
        char destin[] = "destination";

        printf("BEFORE\nsrc: %s\ndes: %s\n", source, destin);

        ft_strcpy(destin, source);

        printf("AFTER\nsrc: %s\ndes: %s\n", source, destin);
        return (0);
}*/
