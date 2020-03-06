/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dummymain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoponen <ottkopo@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:32:36 by okoponen          #+#    #+#             */
/*   Updated: 2019/11/23 13:55:57 by okoponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

typedef struct	s_struct
{
	char		*name;
	int			age;
}				t_struct;

void func(t_struct *s)
{
	s.name = "Paavali";
	printf("AGE %d NAME %s\n", s->age, s->name);
	s->name = "Hermanni";
	printf("AGE %d NAME %s\n", s->age, s->name);
}

int	main(void)
{
	t_struct mystruct;

	mystruct.age = 18;
	mystruct.name = "Antti";
	printf("AGE %d NAME %s\n", mystruct.age, mystruct.name);
	mystruct.name = "Jaakko";
	printf("AGE %d NAME %s\n", mystruct.age, mystruct.name);
	func(&mystruct);
	printf("AGE %d NAME %s\n", mystruct.age, mystruct.name);
	return (0);
}
