#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");

	int a, b, c, kol, res, count = 0;
	printf("Введите a, b: ");
	scanf("%d%d", &a, &b);

	while (1) {
		if (a < b) { c = a; a = b; b = c; }
		kol = a / b;
		res = a % b;
		printf("\nОтрезали квадрат со стороной %d %d раз(а)", b, kol);
		a = b;
		b = res;
		count++;
		if (b == 0) {
			printf("\nКонец. Всего отрезали %d раз\n", count);
			break;
		}
	}
}