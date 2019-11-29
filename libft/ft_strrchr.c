char * ft_strrchr(const char *s, int c){
    const char *p=s;
    char *x=0;
    while(*(p++)){
        if (*p==(char)c) x=(char *)p;
    }
    if (c==0) return (char *)p--;
    return x;
}