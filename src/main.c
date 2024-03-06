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

void	evaluate_exam(int *grades, int number_of_pisciners);
char	*lets_use_malloc(char *str);

void	get_exam_results(int *store)
{
	store[0] = 20;
	store[1] = 60;
	store[2] = 45;
	store[3] = 30;
	store[4] = 100;
	store[5] = 90;
	store[6] = 42;
	store[7] = 70;
	store[8] = 80;
}

int	main(void)
{
	char	*str;
	int		final_exam_results[9];

	get_exam_results(final_exam_results);
	evaluate_exam(final_exam_results, 9);
	str = "Bla bla";
	lets_use_malloc(str);
	return (0);
}
