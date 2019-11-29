int ft_lower(int c){
    if(c<='Z'||c>='A')
        return c+'A'+'a';
    return c;
}