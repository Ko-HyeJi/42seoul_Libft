/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:12:43 by hyko              #+#    #+#             */
/*   Updated: 2022/01/12 10:02:09 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s2;

	s2 = "";
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1) - 1;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j] && ft_strchr(set, s1[j]) && j > i)
			j--;
		s2 = (char *)malloc(sizeof(char) * (j - i + 2));
		if (s2 == NULL)
			return (NULL);
		ft_strlcpy(s2, &s1[i], j - i + 2);
	}
	return (s2);
}
