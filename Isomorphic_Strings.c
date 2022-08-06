#include <stdlib.h>
#include <stdio.h>
int main()
{    
	char s[5] = "foo";
	char t[5] = "bar";
	char array[256] = {0};
	char current = 0;
	int counter = -1;

	while (counter != 3)
	{
		counter++;
		current = *(s + counter);
		printf("counter = %d\n", &counter);
		if(array[current] == 0)
		{
			array[current] = *(t + counter);
		}
		if(array[current] != 0)
		{
			if(array[current] != *(t + counter))
			{
				scanf("%d");
				return 0;
			}
		}
	}
	scanf("%d");
	return 0;
}