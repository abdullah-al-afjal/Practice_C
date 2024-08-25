#include <stdio.h>

int main()
 {
	int x, i;

	printf("Input an integer: ");
	scanf("%d", &x);

	printf(" %d :\n",x);

	for(i = 2; i <= x; i++)
        {
		if((i%2) == 0)
		{
			printf("%d^2 = %d\n", i, i*i);

		}
	}

	return 0;
}
