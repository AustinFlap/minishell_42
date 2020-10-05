/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:54:43 by avieira           #+#    #+#             */
/*   Updated: 2020/10/05 09:26:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_H
# define TOKEN_H

# define PIPE "|"
# define INF "<"
# define D_SUP ">>"
# define SUP ">"
# define SM_CL ";"
# define DOLL "$"
# define BS "\\"
# define QUOTE "'"
# define D_QUOTE "\""

typedef enum		e_token_type
{
					cmd,		// word == cmd
					cmd_arg,	// word =/= cmd
					space,		// word == " " || "\t"
					pip,		// |
					inf,		// <
					sup,		// >
					sm_cl,		// ;
					v_env,		// $
					bs,			// '\'
					d_sup		// >>
}					t_token_type;

typedef struct		s_token
{
	char			*str;
	t_token_type	type;
	struct s_token	*next;
}					t_token;

int					filter_tokens(t_token *tokens);

int					ft_isalnum(int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strlen(const char *s1);
char				**ft_split(char const *s, char c);

void				tok_lstadd_back(t_token **alst, t_token *nw);
void				tok_lstadd_front(t_token **alst, t_token *nw);
//void				tok_lstclear(t_token **lst, void (*del)(void *));
void				tok_lstdelone(t_token *lst, void (*del)(void *));
void				tok_lstiter(t_token *lst, void (*f)(void *));
void				tok_lstclear(t_token **lst, void (*del)(void *));
t_token				*tok_lstnew(void *content);
t_token				*tok_lstmap(t_token *lst, void *(*f)(void *),
														void (*del)(void *));

#endif
