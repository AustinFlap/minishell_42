/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlecoeuv <tlecoeuv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:04:09 by tlecoeuv          #+#    #+#             */
/*   Updated: 2020/10/09 18:44:49 by tlecoeuv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXEC_H
# define EXEC_H

//path.c
int		test_file(char *file_name);
void	get_absolute_path(char **cmd);
void	handle_tokens(t_token *lst_token);
char	**get_cmd_fro_tok(t_token **lst_token);
int		get_size_cmd(t_token *lst_token);
char	**create_cmd_tab(t_token **lst_token, int size);
void	exec_cmd(char **cmd);

#endif
