#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main() {
	int get1;
	int get2;
	int check;
	int y = 0;
	int option;
	printf("オプションを設定してください。\n0 > 足し算プログラム\n1 > 1から好きな数字までを計算してくれるプログラム\n>>");
	OPTION_SETTING:
	scanf("%d", &option);
	if (option == 0) {
		printf("元の数字を入力してください。\n>>");
		scanf("%d", &get1);
		check = getchar();
		printf("たす数字を入力してください。\n>>");
		scanf("%d", &get2);
		printf("%d + %d = %.0f\n", get1, get2, (float)(get1 + get2));
	}
	else if (option == 1) {
		int get_x = 0;
		printf("好きな数字を入力してください。\n>>");
		PROGRAM_1_GET:
		scanf("%d", &get_x);
		if (get_x >= 1){
			for (int x = 0; x <= get_x + 1; x++) {
				if (x <= get_x) {
					y = x + y;
				}
				if (x <= get_x - 1) {
					printf("%d + ", x);
				}
				else if (x == get_x) {
					printf("%d = ", x);
				}
				else {
					printf("%d\n", y);
				}
			}
		}
		else {
			printf("その数は計算できません。\n>>");
			goto PROGRAM_1_GET;
		}
	}
	else {
		printf("正しいオプションを設定してください。\n>>");
		goto OPTION_SETTING;
	}
	system("pause");
	return 0;
}