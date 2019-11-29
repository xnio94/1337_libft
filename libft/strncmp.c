#include <stddef.h>
int ft_strncmp(const char *s1, const char *s2, size_t n){
    const char *p=s1;
    const char *q=s2;
    size_t b=n;
    while(*p && *q && *p++==*q++ && b--);
    return (unsigned char) (*(--p))-(unsigned char) (*(--q));
}