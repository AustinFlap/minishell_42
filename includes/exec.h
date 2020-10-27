/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlecoeuv <tlecoeuv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:04:09 by tlecoeuv          #+#    #+#             */
/*   Updated: 2020/10/27 08:24:54 by tanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXEC_H
# define EXEC_H

# define READ_END	0
# define WRITE_END	1

typedef enum	e_redir_type
{
				redir_in,
				redir_out,
				redir_append_out,
				redir_none
}				t_redir_type;

typedef struct		s_cmd
{
	char			**args;
	t_type			redir_type;
	int				redir_fd;
}					t_cmd;

int			test_file(char *file_name);
int			get_absolute_path(char **cmd);
void		handle_tokens(t_token *lst_token);
t_cmd		**get_commands(t_token **lst_token, int *nb_cmds);
int			get_nb_commands(t_token *lst_token);
void		handle_commands_pipe(t_cmd **cmds, int nb_cmds);
void		spawn_process(int in, int out, int to_close, t_cmd *cmd);
void		handle_one_command(t_cmd *cmd);
void		handle_command_no_pipe(t_cmd *cmd);
int			get_size_args(t_token *lst_token);
char		**create_cmd_args(t_token **lst_token);
void		exec_cmd(t_cmd *cmd);
void		interpret_v_env(t_token *lst_token);

//redir
void 		get_redir_and_fd(t_token **lst_token, t_cmd *cmd);
void		get_redir_fd(char *file, t_cmd *cmd);
void		do_redir(t_type redir_type, int fd);
void 		skip_redir(t_token **lst_token);

#endif
