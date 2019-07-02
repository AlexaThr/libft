void    ft_putstr(char str)
{
    i = 0;
    while (str[i])
    {
        write (1, &str, i++);
    }
}