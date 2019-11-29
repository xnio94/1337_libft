
#include <stddef.h>

void * ft_memcpy (void *dest, const void *src, size_t len)
{
  if (dest==src) return dest;
  char *d = dest;
  const char *s = src;
  while (len--)
    *d++ = *s++;
  return dest;
}
