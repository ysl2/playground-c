#include <stdio.h>
#include <stdlib.h>

int func()
{
    for (int i = 0; i < 10; ++i)
    {
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
    if (p == NULL)
    {
        exit(1);
    }
    else
    {
        printf("|%s|\n", p);
    }
    if (p != NULL)
    {
        free(p);
        p = NULL;
    }
    printf("|%s|\n", p);

    return 0;
}

int main(int argc, char *argv[])
{
    // func();
    func01();
    return 0;
}