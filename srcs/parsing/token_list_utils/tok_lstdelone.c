/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tok_lstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 13:39:35 by avieira           #+#    #+#             */
/*   Updated: 2020/10/02 14:06:17 by austin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/minishell.h"

void	tok_lstdelone(t_token *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->str);
		free(lst);
		lst = NULL;
	}
}