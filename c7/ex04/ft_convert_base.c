#include <stdlib.h>

int budget_log(int k, int correction);

char    *flagger(int f, char *base_to, int i, int flag);

char	*init(int f, int t);

int	base_check(char *base);

int	ft_atoi(char *str, int *i, int flag)
{
	int		a;

	a = 0;
	*i = 0;
	while (str[*i] == 32 || (str[*i] > 8 && str[*i] < 14))
		*i += 1;
	while (str[*i] == 43 || str[*i] == 45)
	{
		if (str[*i] == 45)
			flag ++;
			*i += 1;
	}
	return (flag);
}

int	int_check(long a, int *f)
{
	*f = a;
	if (*f < a)
		return (1);
	return (0);
}

long	base_f(char *nbr, char *base, int k, int i)
{
	long	a;
	int		j;

	a = 0;
	j = 0;
	while (nbr[j])
	{
		k = 0;
		while (base[k])
		{
			if (nbr[j] == base[k])
			{
				a *= i;
				a += k;
				k = -2;
			}
			k ++;
		}
		if (k > 0)
			return (a);
		j ++;
	}
	return (a);
}

char	*base_t(int f, char *base, int i, int index)
{
	char	*t;
	char	swap;
	int		k;
	int		f_p;
	int		t_p;

	f_p = budget_log(f, 0);
	t_p = budget_log(i, 1);
	t = init(f_p, t_p);
	while (f > 0)
	{
		t[index] = base[f % i];
		index ++;
		f /= i;
	}
	k = 0;
	while (k < index / 2)
	{
		swap = t[k];
		t[k] = t[(index - k) - 1];
		t[(index - k) - 1] = swap;
		k ++;
	}
	return (t);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		f;
	int		flag;
	
	flag = ft_atoi(nbr, &i, 0);
	while (base_from[i])
		i ++;
	if ((base_check(base_from) || base_check(base_to)) || int_check(unary(nbr, base_from, 0, i), &f))
		return (NULL);
	i = 0;
	while (base_to[i])
		i ++;
	return (flagger(f, base_to, i, flag % 2));
}