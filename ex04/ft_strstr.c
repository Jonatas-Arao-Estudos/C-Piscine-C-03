/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:19:05 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/29 11:17:33 by jarao-de         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	index;
	unsigned int	jump;

	index = 0;
	while (str[index] != '\0')
	{
		jump = 0;
		while (str[index + jump] == to_find[jump])
		{
			if (to_find[jump + 1] == '\0')
				return (&str[index]);
			jump = jump + 1;
		}
		index = index + 1;
	}
	return (0);
}
