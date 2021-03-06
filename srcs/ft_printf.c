#include "../include/ft_printf.h"

int				ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			len;
	char		*str;
	t_flag		flags;

	i = -1;
	len = 0;
	va_start(args, format);
	format += (*format == '{') ? color_redactor(format) : 0;
	str = (char*)format;
	while (str[++i])
	{
		ft_bzero(&flags, sizeof(t_flag));
		if (str[i] != '%' && str[i])
			len += ft_write(str[i]);
		else
		{
			i++;
			i = ft_init_procent(str, i, args, &flags);
			len += flags.len;
		}
	}
	va_end(args);
	return (len);
}
