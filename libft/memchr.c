#include <stddef.h>
void * ft_memchr(const void *s, int c, size_t n){
    const unsigned char *p=s;
    while(n--)
    {
        if(*p++==(unsigned char)c) return (void *)(--p);
    }
    return 0;
}