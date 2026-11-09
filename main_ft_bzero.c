/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char buf[6] = "hello";
	int  i;

	ft_bzero(buf, 3);
	i = 0;
	while (i < 5)
	{
		printf("buf[%d] = %d\n", i, buf[i]);
		i++;
	}
	printf("(attendu: 0 0 0 108 111)\n");
	return (0);
}
