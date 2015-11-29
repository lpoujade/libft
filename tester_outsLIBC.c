	ft_putstr("ITOI ( int to ascii ) : ");

int nbr = -15;

while (nbr <= 150)
{
	if (strcmp(ft_itoi(nbr), atoi(nbr)) == 0)
		ft_putendl("OK");
	else
	{
		ft_putnbr(strcmp(ft_atoi(nbr)), atoi

