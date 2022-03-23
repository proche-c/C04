/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/18 18:29:44 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lenth;
	unsigned int	i;

	i = 0;
	lenth = 0;
	while (dest[lenth] && lenth < size)
		lenth++;
	i = lenth;
	while (src[lenth - i] && lenth + 1 < size)
	{
		dest[lenth] = src[lenth - i];
		lenth++;
	}
	if (i < size)
		dest[lenth] = '\0';
	return (i + ft_strlen(src));
}
