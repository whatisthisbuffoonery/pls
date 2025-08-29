typedef int t_flag;
#define FLAG_A (1 << 0)
#define FLAG_B (1 << 1)
#define FLAG_C (1 << 2)

void	muh_calc(char **v, t_flag flag)
{
	int a = v[1][0] - 48;
	int b = v[3][0] - 48;

	if (flag & FLAG_A)
		a += b;
	if (flag & FLAG_B)
		a /= b;
	if (flag & FLAG_C)
		a *= b;
	flag &= ~FLAG_A;//unset one flag
	flag = ~flag;	//unset all
}
int		main(int c, char **v)
{
	if (c == 4)
	{
		t_flag flag = 0;
		if (v[2][0] = '+')
			flag |= FLAG_A;
		if (v[2][0] = '/')
			flag |= FLAG_B;
		if (v[2][0] = '*')
			flag |= FLAG_C;
		muh_calc(v + 1, flag);
	}
}
