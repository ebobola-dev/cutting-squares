#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");

	int a, b, c, kol, res, count = 0;
	printf("������� a, b: ");
	scanf("%d%d", &a, &b);

	while (1) {
		if (a < b) { c = a; a = b; b = c; }
		kol = a / b;
		res = a % b;
		printf("\n�������� ������� �� �������� %d %d ���(�)", b, kol);
		a = b;
		b = res;
		count++;
		if (b == 0) {
			printf("\n�����. ����� �������� %d ���\n", count);
			break;
		}
	}
}