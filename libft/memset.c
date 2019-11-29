#include <stddef.h>

void *
ft_memset (void *dest, int val, size_t len)
{
  unsigned char *ptr = dest;
  while (len-- > 0)
    *ptr++ = (unsigned char)val;
  return dest;
}
