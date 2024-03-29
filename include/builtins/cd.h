/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cd.h                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/12 20:53:53 by ahorling      #+#    #+#                 */
/*   Updated: 2023/04/24 21:57:52 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CD_H
# define CD_H

# include "structs.h"

void	cd(t_commands *commands, t_metainfo *info);
void	out_of_bounds(char *buffer, t_metainfo *info, char *oldpwd);

#endif