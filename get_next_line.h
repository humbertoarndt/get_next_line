/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:01:57 by harndt            #+#    #+#             */
/*   Updated: 2022/05/16 13:08:07 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

//get_next_line
/******************************************************************************/
/**
 * @brief Get the next line read from a file descriptor.
 * @param fd The file desdriptor to read from.
 * @return The read line, or NULL if there is nothing to read
 * or an error occured.
 */
char	*get_next_line(int fd);

//Utils
/******************************************************************************/
/**
 * @brief Computes the length of the string, not including the null character.
 * @param str String whose length is to be found.
 * @return Length of string.
**/
size_t	ft_strlen(const char *str);

/**
 * @brief Searches for the first occurence of the character.
 * @param str String to be scanned.
 * @param c The character to be searched in str.
 * @return Pointer the first occurence of the character.
 * @return NULL if the character is not found.
**/
char	*ft_strchr(const char *str, int c);

/**
 * @brief Copies up to size -1 character from src to dst.
 * @param dst Pointer to dst where the content is to be copied.
 * @param src Pointer to the source of data to be copied.
 * @return Total length of the String tried to create.
**/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief Copies up to '\n' or the end of a string to dst.
 * @param dst Pointer to dst where the cont is to be copied.
 * @param src Pointer to the source of data to be coped.
 * @param index Indicator of the starting position to be copied at dst.
 * @return The new lengt of dst.
 */
size_t	ft_cpyline(char *dst, const char *src, size_t len);

#endif