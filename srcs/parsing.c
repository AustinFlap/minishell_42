/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanguy <tanguy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 16:07:35 by tanguy            #+#    #+#             */
/*   Updated: 2020/06/15 21:45:25 by tlecoeuv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void parse_command(char ***args)
{
	char *line;

	get_next_line(0, &line);
	*args = ft_split(line, ' ');
	free(line);
}
