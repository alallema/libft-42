/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alallema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:02:44 by alallema          #+#    #+#             */
/*   Updated: 2015/11/27 20:43:28 by alallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2)
	{
		while (*s1 == *s2 && *s1 && *s2)
		{
			s1++;
			s2++;
		}
		if (*s1 != *s2 || !s1 || !s2)
			return (0);
	}
	return (1);
}
