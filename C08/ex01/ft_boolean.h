/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthoo <dthoo@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 06:00:12 by dthoo             #+#    #+#             */
/*   Updated: 2025/08/14 06:00:14 by dthoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define EVEN(x) !(x % 2)
# define EVEN_MSG "I have an even number of arguements.\n"
# define ODD_MSG "I have an odd number of arguements.\n"
# define SUCCESS 0

typedef int	t_bool;

#endif
