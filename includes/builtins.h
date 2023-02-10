/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   builtins.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 21:16:24 by ahorling      #+#    #+#                 */
/*   Updated: 2023/02/09 06:47:55 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTINS_H
# define BUILTINS_H

#include "structs.h"
#include <stdbool.h>

bool	check_builtins(t_commands *commands);
int		execute_builtins(t_commands *commands, t_metainfo *info);

#endif