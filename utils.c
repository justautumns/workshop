/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmeyil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:16:41 by mehmeyil          #+#    #+#             */
/*   Updated: 2024/01/29 13:05:09 by mehmeyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void evaluate_exam(int *grades, int number_of_pisciners)
{
	int	i;
	int *ptr;

	grades = ptr;
	i = 0;
	while (i < number_of_pisciners)
	{
		if (ptr[i] > 30)
			printf("%d Success\n", i);
		else 
			printf("%d Failure\n", i);
		i++;
	}
}

int ft_strlen(char *str)
{
	int m;

	m = 0;
	while (str[m])
	{
		m++;
	}
	return (m);
}

char *lets_use_malloc(char *str)
{
	int	i;
	int m;
	char *tmp;

	i = ft_strlen(str);
	m = 0;
	tmp = malloc (sizeof(char) * i);
	while (str[m])
	{
		tmp[m] = str[m];
		m++;
	}
	tmp[m] = '\0';
	printf("%s\n", tmp);
	return (tmp);
}
