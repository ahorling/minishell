/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra_utils.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/09 20:24:04 by ahorling      #+#    #+#                 */
/*   Updated: 2023/04/20 16:47:22 by fholwerd      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRA_UTILS_H
# define EXTRA_UTILS_H

# include "structs.h"

void	close_pipes(int pipefd[2]);
void	manage_infiles(t_commands *commands, t_metainfo *info);
void	manage_outfiles(t_commands *commands, t_metainfo *info);
void	closefds(t_metainfo *info);
void	setup_info(t_commands *commands, t_metainfo *info);

#endif