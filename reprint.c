#include <stdio.h>

int	main()
{
	char input[50];
	int i;

	printf("Enter your name\n");
	scanf("%s", &input);

	for(i = 0; input[i] != '\0'; ++i)
	{
		printf("%s\n", input);
	}
	return 0;
}
