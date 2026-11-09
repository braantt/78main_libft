/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char dst[10] = {0};
	int  src_i[3] = {1, 2, 3};
	int  dst_i[3] = {0, 0, 0};

	ft_memcpy(dst, "hello", 6);
	printf("memcpy: %s (attendu: hello)\n", dst);
	ft_memcpy(dst_i, src_i, sizeof(int) * 3);
	printf("ints: %d %d %d (attendu: 1 2 3)\n", dst_i[0], dst_i[1], dst_i[2]);
	return (0);
}
