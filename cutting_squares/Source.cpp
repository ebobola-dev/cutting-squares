#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");

	int a, b, c, kol, res, cont, count = 0;

	while (1){
		printf("Введите a, b: ");
		scanf("%d%d", &a, &b);

		while (1) {
			if (a > 0 && b > 0) break;
			printf("\nНужны положительные значения!\n");
			if (a <= 0) {
				printf("Введите a ещё раз: ");
				scanf("%d", &a);
			}
			if (b <= 0) {
				printf("Введите b ещё раз: ");
				scanf("%d", &b);
			}
		}

		while (1) {
			if (a < b) { c = a; a = b; b = c; }
			kol = a / b;
			res = a % b;
			printf("\nОтрезали квадрат %dx%d | %d раз(а)", b, b, kol);
			a = b;
			b = res;
			count++;
			if (b == 0) {
				printf("\nКонец. Всего отрезали %d раз\n", count);
				break;
			}
		}
		printf("\nВведите 0, чтобы закончить, 1 - продолжить: ");
		scanf("%d", &cont);
		if (!cont) break;
		else printf("\n");
	}
}