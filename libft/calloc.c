/*
#include <stddef.h>
void * ft_calloc(size_t count, size_t size)
{
    if (count==0 || size==0) return NULL;
    void *p=malloc((long long)count*size);
    ft_bzero(p,(long long)count*size);
    return p;
}
*/