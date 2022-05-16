/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:02:01 by harndt            #+#    #+#             */
/*   Updated: 2022/05/16 13:07:56 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	size;

	size = 0;
	if (!str)
		return (size);
	while (str[size])
		size++;
	return (size);
}

char	*ft_strchr(char const *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
		if (*str++ == (unsigned char)c)
			return ((char *)(str - 1));
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (NULL);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (i < src_len && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

size_t	ft_cpyline(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != '\n' && src[i])
		dst[len++] = src[i++];
	if (src[i] == '\n')
		dst[len++] = '\n';
	dst[len] = '\0';
	return (len);
}
