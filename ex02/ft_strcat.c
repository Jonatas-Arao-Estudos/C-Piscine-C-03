/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:07:38 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/28 16:36:17 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index = index + 1;
	}
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	index;
	unsigned int	dest_len;

	index = 0;
	dest_len = ft_strlen(dest);
	while (src[index] != '\0')
	{
		dest[dest_len + index] = src[index];
		index = index + 1;
	}
	dest[dest_len + index] = '\0';
	return (dest);
}
