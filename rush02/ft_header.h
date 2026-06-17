/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciparren <ciparren@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:40:55 by ciparren          #+#    #+#             */
/*   Updated: 2025/11/23 19:21:27 by ciparren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADERS_H
# define FT_HEADERS_H

// Funciones básicas
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
void	ft_memset(char *dest, int value, int tam);

// Validación
int		ft_is_numeric(char *str);
int		ft_validate_args(int argc, char **argv, char **dict_path);

// Procesamiento de diccionario
int		ft_parsedict(char *buffer, char number[100][42], char value[100][42]);

// División en cajas
void	divide(char *input_num, char number[100][42], char value[100][42]);
char	*ft_getfirstbox(char *number, int last_box_digits);
char	*ft_get_complete_box(char *number, int box_index, int last_box_digits);
int		ft_count_boxes(char *str);
int		ft_last_box(char *str);
char	*ft_boxzeros(int box_index);
void	ft_print_box(char *box, char number[100][42], char value[100][42]);
void	ft_print_value(char *key, char number[100][42], char value[100][42]);

#endif
