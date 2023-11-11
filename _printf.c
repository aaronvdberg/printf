#include "main.h"


/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
int count; 

va_list ap; 

va_start(ap, format);
count = 0;

while(*format != '\0')
{
	if (*format == '%')
	{	
	count += _printf(*(++format), ap);
	
	}

}


}
