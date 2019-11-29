#include <stddef.h>

void *
ft_bzero (void *s, size_t n)
{
  unsigned char *ptr = s;
  while (n-- > 0)
    *ptr++ = 0;
  return s;
}
