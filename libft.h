/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssithole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:25:04 by ssithole          #+#    #+#             */
/*   Updated: 2019/06/06 12:48:29 by ssithole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void			ft_memset(void *b, int c, size_t len);
void			ft_memcpy(void *dst, const void *src, size_t n);
void			ft_bzero(void *s, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);   
int				ft_isalnum(int c);	
int				ft_isdigit(int c);
int				ft_tolower(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
int             ft_isprint(int c);
int             ft_isspace(int i);
int             ft_atoi(char *str);
size_t          ft_strlen(const char *s);
char            *ft_strncat(char *s1, const char *s2, size_t n);
char            *ft_strchr(const char *s, int c);
char            *ft_strrchr(const char *s, int c);
char            *ft_strncpy(char *dst, const char *src, size_t len);

//2nd pat

void            ft_putchar(char c);
void            ft_putstr(char const *s);
void            ft_putendl(char const *s);
void            ft_putchar_fd(char c, int fd);
void            ft_putstr_fd(char const *s, int fd);
void            ft_putendl_fd(char const *s, int fd);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);

#endif
