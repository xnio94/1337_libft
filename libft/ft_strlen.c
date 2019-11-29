#include <stddef.h>

size_t ft_strlen(const char * str)
{
    const char *s;
    for (s = str; *s; ++s) {}
    return(s - str);
}