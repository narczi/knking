    #include <stdio.h>

	int val = 12;
	int *pter = &val;

    void func(int *p)
    {
        p = pter;
    }

    int main(void)
    {
        int a = 1;
        func(&a);
        printf("%d\n", a); // prints 5;
        return 0;
    }
