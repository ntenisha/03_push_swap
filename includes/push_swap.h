/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:00:30 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:53:51 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../Libft/libft.h"

typedef struct s_node
{
	int				value;
	int				elem_score;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_ab
{
	struct s_node	*a;
	struct s_node	*b;
	int				a_size;
	int				b_size;
}	t_ab;

t_node		*create(int data);
void		add_ellement_end(t_node **a, t_node *new);
void		create_stack(t_ab *stack);
void		push_check(t_ab *stack, char c);
void		swap_check(t_ab *stack, char c);
void		rotate_check(t_ab *stack, char c);
void		reverse_rotate_check(t_ab *stack, char c);

long int	ft_atoi2(const char *str);
void		sort(t_ab *stack, int argc);
int			sort_check(t_node **head);
size_t		ft_strlen2(char *str);
int			ft_isprint(int c);
char		ft_change_to_space(char *str);
int			ft_kol_slov(char *s, char c);
void		ft_err_ex(void);
char		*ft_subvnrstr_02(char *s, unsigned int start, size_t len);
char		**ft_write_words(char **arr, char *str, char c);
char		**ft_split2(char *s, char c);

int			search_max(t_node	**head, int size);
int			search_min(t_node **head, int size);

void		sort_max(t_ab *stack, int argc);

int			check_rev_sort(t_ab *stack, char c);
int			*make_arr(t_ab *stack, int argc);
int			search_mid(int *arr, int argc);
int			mod(int num);
void		rot_and_push_ba(t_ab *stack, t_node *min_score, int position);
void		forw_or_rev(t_ab *stack);
void		push_to_b(t_ab *stack, int min, int max, int mid);
int			calc_rot_a(t_ab *stack, int value);

void		*ft_free_2d(char **ptr);
int			double_check(t_node **head, long int n, int size);
int			sort_check(t_node **head);
void		ft_one_arvg(char *str1, t_ab *stack);
void		ft_two_arvg(char **str1, t_ab *stack);

#endif
