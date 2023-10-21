int	ft_atoi(const char *s)
{
	int	i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while ((*(s + i) >= 9 && *(s + i) <= 13) || *(s + i) == 32)
		i++;
	if (*(s + i) == '+')
		i++;
	else if (*(s + i) == '-')
	{
		sign = -1;
		i++;
	}
	while (*(s + i) >= '0' && *(s + i) <= '9')
	{
		res *= 10;
		res += *(s + i) - '0';
		i++;
	}
	return (sign * res);
}