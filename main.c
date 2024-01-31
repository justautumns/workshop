/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmeyil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:17:43 by mehmeyil          #+#    #+#             */
/*   Updated: 2024/01/31 23:51:12 by mehmeyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void evaluate_exam (int *grades, int number_of_pisciners);
char *lets_use_malloc(char *str);

int main(void)
{
	int	final_exam_results[5000000] = {20, 60, 45, 30, 100, 90, 42, 70, 80};
	evaluate_exam(final_exam_results, 5);
	char *str = "Bla bla";
	char *new_str = lets_use_malloc(str);
	return (0);
}
