/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmeyil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:17:43 by mehmeyil          #+#    #+#             */
/*   Updated: 2024/01/29 13:06:46 by mehmeyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void evaluate_exam (int *grades, int number_of_pisciners);
char *lets_use_malloc(char *str);

int main(void)
{
	int	final_exam_results[5] = {20, 60, 45, 30, 100};
	evaluate_exam(final_exam_results, 5);
	char *str = "Bla bla";
	lets_use_malloc(str);

	return (0);
}
