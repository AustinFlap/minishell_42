/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 16:20:59 by avieira           #+#    #+#             */
/*   Updated: 2020/10/21 11:29:04 by tlecoeuv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

//LIBRAIRES
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <string.h>
# include <errno.h>
# include <fcntl.h>

//LIBRAIRIES A SUPPRIMER
# include <stdio.h>

//HEADERS PERSONELS
# include "token.h"
# include "syntax.h"
# include "get_next_line.h"
# include "exec.h"
# include "utils.h"
# include "env.h"
# include "bultins.h"
# include "error.h"

typedef struct	s_shell
{
	char	**env;
	char	*cwd;
	int		status;
	int		running;
}				t_shell;

extern t_shell	g_sh;

#endif
