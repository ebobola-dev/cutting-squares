#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");

	int a, b, c, kol, res, cont, count = 0;

	while (1){
		printf("������� a, b: ");
		scanf("%d%d", &a, &b);

		while (1) {
			if (a > 0 && b > 0) break;
			printf("\n����� ������������� ��������!\n");
			if (a <= 0) {
				printf("������� a ��� ���: ");
				scanf("%d", &a);
			}
			if (b <= 0) {
				printf("������� b ��� ���: ");
				scanf("%d", &b);
			}
		}

		while (1) {
			if (a < b) { c = a; a = b; b = c; }
			kol = a / b;
			res = a % b;
			printf("\n�������� ������� %dx%d | %d ���(�)", b, b, kol);
			a = b;
			b = res;
			count++;
			if (b == 0) {
				printf("\n�����. ����� �������� %d ���\n", count);
				break;
			}
		}
		printf("\n������� 0, ����� ���������, 1 - ����������: ");
		scanf("%d", &cont);
		if (!cont) break;
		else printf("\n");
	}
}