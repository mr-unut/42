int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] > 97	|| str[i] < 122);
		{
			return(0);
		}
		else
		{
			i++;
		} 

	}
	return(1);
}

