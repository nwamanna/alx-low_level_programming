char *_strncpy(char *dest, char *src, int n)
{
    int len = strlen(dest);
    int length = strlen(src);
    int i = 0;
    
    while (i < n && *src)
    {
        dest[i] = *src;
        *src++;
        i++;
    }
    if (i == length)
        dest[i] = '\0';
    else
        dest[len] = '\0';
    return (dest);
}
