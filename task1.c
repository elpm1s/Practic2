#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");

	printf("%20s\n", "Ёто текст");
	printf("\t%-s5", "Ёто текст");
	printf("%10.5f\n ", 12.234657);
	printf("ќстаток от делени€ %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("ќстаток от делени€ %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("ѕроизведение %d на %d равно %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %g равно %g\n ", 5., 2., 5. / 2);



}