/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 10:05:05 by mel-kada          #+#    #+#             */
/*   Updated: 2020/02/24 10:05:06 by mel-kada         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(&s1[start]);
	if (end)
		while (s1[end + start - 1] && ft_strchr(set, s1[end + start - 1]))
			end--;
	return (ft_substr(s1, start, end));
}
