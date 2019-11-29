#include <stddef.h>
size_t ft_strlcat(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	int x;

	while (*d++ && n--);
	x=d-dst;


	if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
  	}
	if (n == 0) {
		if (siz != 0)
			*d = '\0';
		while (*s++);
	}
	return(s - src - 1 + x);
}