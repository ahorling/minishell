/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   exit.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/10 18:21:01 by ahorling      #+#    #+#                 */
/*   Updated: 2023/04/10 18:28:52 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "structs.h"

extern int g_error;

void	mini_exit(t_commands *commands)
{
	if (!commands->prev)
		write(2, "exit\n", 5);
	exit(g_error);
}