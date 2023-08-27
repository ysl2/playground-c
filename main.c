#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int func()
{
	for (int i = 0; i < 10; ++i) {
		printf("Hello world! %d\n", i);
	}

	int x = 2;
	x = x << 33;
	printf("%d\n", x);
	short y = 2;
	y = y << 33;
	printf("%d\n", y);
	char z = 0;
	z = z << 33;
	printf("%d\n", z);

	return 0;
}

int func01()
{
	char *p = NULL;
	p = (char *)malloc(10 * sizeof(char));
	if (p == NULL) {
		exit(1);
	} else {
		printf("|%s|\n", p);
	}
	if (p != NULL) {
		free(p);
		p = NULL;
	}
	printf("|%s|\n", p);

	return 0;
}

int func02()
{
	int cnt = 10;
	unsigned int i;
	int sig = 100;
	for (i = cnt; i >= 0; --i) {
		printf("%d\n", i);
		if (sig < 0) {
			return 1;
		}
		--sig;
	}
	return 0;
}

typedef unsigned char *pointer;
void show_bytes(pointer start, size_t len)
{
	size_t i;
	for (i = 0; i < len; i++) {
		printf("%p\t0x%.2x\n", start + i, start[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	// func();
	// func01();
	// func02();

	int a = 15213;
	printf("int a = 15213;\n");
	show_bytes((pointer)&a, sizeof(int));

	return 0;
}
