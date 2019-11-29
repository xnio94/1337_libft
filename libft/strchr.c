char * ft_strchr(const char *s, int c){
    const char *p=s;
    while(*(p++)){
        if (*p==(char)c) return (char *)p;
    }
    if (c==0) return (char *)p--;
    return 0;
}