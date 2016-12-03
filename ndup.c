char    *ft_strndup(char const *str, size_t len)
{
        char    *ret;
        size_t  c;

        c = 0;
        if (!(ret = malloc(sizeof(char) * len)))
                return (NULL);
        while (str[c] && c < len)
        {
                ret[c] = str[c];
                c++;
        }
        return (ret);
}

