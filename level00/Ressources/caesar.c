/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caesar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcadet <fcadet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:42:28 by fcadet            #+#    #+#             */
/*   Updated: 2021/03/31 12:47:14 by fcadet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	inc_str(char *str) {
	size_t		i;

	for (i = 0; i < strlen(str); ++i) {
		if (str[i] == 'z') {
			str[i] = 'a';
		} else if (str[i] == 'Z') {
			str[i] = 'A';
		} else {
			++str[i];
		}
	}
}

int		main(int ac, char **av) {
	size_t		i;

	if (ac < 2)
		return (1);
	for (i = 0; i < 26; ++i) {
		printf("%s\n", av[1]);
		inc_str(av[1]);
	}
	return (0);
}
