#include <stddef.h>
void *ft_memmove (void *dest, const void *src, size_t len)
{
  char *d = dest;
  char *lastd;
  const char *lasts;
  const char *s = src;
  if(d==s) return dest;
  if (d < s)
    while (len--)
      *d++ = *s++;
  else
    {
      lasts = s + (len-1);
      lastd = d + (len-1);
      while (len--)
        *lastd-- = *lasts--;
    }
  return dest;
}
