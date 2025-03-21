/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:09:48 by marvin            #+#    #+#             */
/*   Updated: 2025/02/11 21:09:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/philosophers.h"

int	main(int ac, char **av)
{
	t_tools			tools;

	parse_arguments(ac, av, &tools);
	setup_tools(&tools);
	ft_philosophers(&tools);
	ft_clean(&tools);
	return (0);
}
