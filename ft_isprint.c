
int     ft_isprint(int c)
{
    if (ft_isascii(c))
        if (c >= 32)
            return (1);
    else
        return (0);
}
