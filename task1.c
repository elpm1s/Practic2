#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");

	printf("%20s\n", "��� �����");
	printf("\t%-s5", "��� �����");
	printf("%10.5f\n ", 12.234657);
	printf("������� �� ������� %d �� %d ����� %d\n ", 5, 2, 5 % 2);
	printf("������� �� ������� %d �� %d ����� %d\n ", 7, 5, 7 % 5);
	printf("������������ %d �� %d ����� %d\n ", 2000, 4, 2000 * 4);
	printf("%g ��������� %g ����� %g\n ", 5., 2., 5. / 2);



}