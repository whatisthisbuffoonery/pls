int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	is_invalid_base_char(char c)
{
	return (c == '+' || c == '-' || is_space(c));
}

int	is_valid_base(char *base)
{
	int i, j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (is_invalid_base_char(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_index(char c, char *base)
{
	int i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int b_len;
	int digit;

	if (!is_valid_base(base))
		return (0);
	b_len = ft_strlen(base);

	// Skip leading whitespaces
	while (is_space(str[i]))
		i++;

	// Handle optional sign(s)
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	// Parse digits in base
	while ((digit = base_index(str[i], base)) != -1)
	{
		result = result * b_len + digit;
		i++;
	}

	return (result * sign);
}

