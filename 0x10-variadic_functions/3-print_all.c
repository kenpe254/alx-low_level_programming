#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *  * print_all - Prints anything, based on a list of types of arguments.
 *   * @format: A list of types of arguments passed to the function.
 *    * @...: A variable number of arguments to be printed.
 *     *
 *      * Description: c: char, i: integer, f: float, s: char *
 *       *              (if the string is NULL, print (nil) instead).
 *        *              Any other char should be ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int index = 0;
	char *str_arg;
	char current_format;

	va_start(args, format);

	while (format && format[index])
	{
		current_format = format[index];

		switch (current_format)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
																			printf("%d", va_arg(args, int));
																			break;
																		case 'f':
																			printf("%f", va_arg(args, double));
																			break;
																																	case 's':
																			str_arg = va_arg(args, char *);

				if (str_arg == NULL)

					printf("(nil)");

				else
																				printf("%s", str_arg);
																			break;
																		default:
																			break;
																	}

		index++;

		if (format[index] != '\0' &&
			(current_format == 'c' ||
			current_format == 'i' ||
			current_format == 'f' ||
			current_format == 's'))
		printf(", ");
		}

		printf("\n");

		va_end(args);
}
