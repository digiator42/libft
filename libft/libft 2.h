#ifndef ALNUM_H
# define ALNUM_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

int ft_tolower(int c);
int ft_toupper(int c);
int ft_isalpha(char i);
int ft_isdigit(char i);
int ft_isalnum(char i);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_atoi(const char *ptr);
void    ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
size_t ft_strlen(const char *c);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
char	*ft_strdup(const char *s);
int ft_strncmp (char* s1, char* s2, int n);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
char *ft_strnstr( char *big,  char *little, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, void *src, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);

#endif