#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void hanoi(int n, char one, char two, char three){
	if (n == 1){
		printf("%c-->%c\n", one, three);
	}
	else
	{
		hanoi(n - 1, one, three, two);
		printf("%c-->%c\n", one, three);
		hanoi(n - 1, two, one, three);
	}
}
int main(){
	int n;
	printf("input the number of diskes:");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}
