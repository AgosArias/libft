#include "libft.h"
#include <stdio.h>

void	test_str_funcs(void)
{
	printf("----- STRING FUNCTIONS -----\n");
	printf("ft_strlen: %zu\n", ft_strlen("hola"));
	printf("ft_strchr: %s\n", ft_strchr("hola", 'l'));
	printf("ft_strrchr: %s\n", ft_strrchr("hola", 'l'));
	printf("ft_strncmp: %d\n", ft_strncmp("hola", "holi", 3));
	printf("ft_strnstr: %s\n", ft_strnstr("42Malaga", "Mal", 7));
	printf("ft_strdup: %s\n", ft_strdup("duplicado"));
	printf("ft_strjoin: %s\n", ft_strjoin("Hello", " World"));
	printf("ft_strtrim: %s\n", ft_strtrim("   hola mundo  ", " "));
}

void	test_mem_funcs(void)
{
	char buffer[20] = "1234567890";
	char src[20] = "abc";
	printf("----- MEMORY FUNCTIONS -----\n");
	ft_bzero(buffer, 4);
	printf("ft_bzero: %s\n", buffer);
	ft_memcpy(buffer, src, 3);
	printf("ft_memcpy: %s\n", buffer);
	ft_memmove(buffer + 2, buffer, 3);
	printf("ft_memmove: %s\n", buffer);
	printf("ft_memchr: %s\n", (char *)ft_memchr("abcde", 'c', 5));
	printf("ft_memcmp: %d\n", ft_memcmp("abc", "abd", 3));
}

void	test_ctype_funcs(void)
{
	printf("----- CHARACTER CHECKS -----\n");
	printf("ft_isalpha('a'): %d\n", ft_isalpha('a'));
	printf("ft_isdigit('9'): %d\n", ft_isdigit('9'));
	printf("ft_isalnum('1'): %d\n", ft_isalnum('1'));
	printf("ft_isascii(127): %d\n", ft_isascii(127));
	printf("ft_isprint(' '): %d\n", ft_isprint(' '));
	printf("ft_toupper('a'): %c\n", ft_toupper('a'));
	printf("ft_tolower('A'): %c\n", ft_tolower('A'));
}

void	test_alloc_funcs(void)
{
	char *s;
	char **split;
	printf("----- ALLOCATION TESTS -----\n");
	s = ft_substr("libft-test", 5, 4);
	printf("ft_substr: %s\n", s);
	free(s);

	s = ft_strjoin("libft", "-test");
	printf("ft_strjoin: %s\n", s);
	free(s);

	s = ft_strtrim("xxxhola mundoxxx", "x");
	printf("ft_strtrim: %s\n", s);
	free(s);

	split = ft_split("hola mundo desde 42", ' ');
	printf("ft_split:\n");
	for (int i = 0; split[i]; i++)
	{
		printf("  - %s\n", split[i]);
		free(split[i]);
	}
	free(split);

	s = ft_itoa(42);
	printf("ft_itoa: %s\n", s);
	free(s);

	s = ft_strdup("duplicado");
	printf("ft_strdup: %s\n", s);
	free(s);
}

void	test_fd_funcs(void)
{
	printf("----- FD FUNCTIONS (ver salida) -----\n");
	ft_putchar_fd('H', 1);
	ft_putstr_fd("ola Mundo", 1);
	ft_putendl_fd("!", 1);
	ft_putnbr_fd(12345, 1);
	write(1, "\n", 1);
}

void	test_bonus_list(void)
{
#ifdef BONUS
	printf("----- BONUS LIST FUNCTIONS -----\n");
	t_list *n1 = ft_lstnew("Nodo1");
	t_list *n2 = ft_lstnew("Nodo2");
	ft_lstadd_back(&n1, n2);
	printf("ft_lstsize: %d\n", ft_lstsize(n1));
	printf("ft_lstlast: %s\n", (char *)ft_lstlast(n1)->content);
	ft_lstclear(&n1, free);
#endif
}

int main(void)
{
	test_str_funcs();
	test_mem_funcs();
	test_ctype_funcs();
	test_alloc_funcs();
	test_fd_funcs();
	test_bonus_list();
	return (0);
}
// To exequte this code
//cc -Wall -Wextra -Werror -DBONUS main.c libft.a
// ./a.out