char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[k])
			k ++;
		else
		{
			i = i - k + 1;
			k = 0;
		}
		if (!(to_find[k]))
			return (&str[(i + 1) - k]);
		i ++;
	}
	return (NULL);
}