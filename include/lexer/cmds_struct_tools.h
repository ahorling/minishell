/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cmds_struct_tools.h                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: fholwerd <fholwerd@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 17:13:32 by fholwerd      #+#    #+#                 */
/*   Updated: 2023/02/26 18:29:46 by fholwerd      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CMDS_STRUCT_TOOLS_H
# define CMDS_STRUCT_TOOLS_H

# include <stdbool.h>
# include "structs.h"

t_commands	*new_cmds(void);
t_commands	*last_cmd(t_commands *cmds);
void		add_infile(t_commands *cmds, char *infile);
void		add_outfile(t_commands *cmds, char *outfile, bool append);
void		add_args(t_commands *cmds, char *arg);

#endif
