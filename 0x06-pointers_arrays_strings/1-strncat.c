char *_strncat(char *dest, char *src, int n)
{
    int len = strlen(dest);
    int i = 0;
    
    while (i < n && *src)
    {
        dest[len + i] = *src;
        *src++;
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}
