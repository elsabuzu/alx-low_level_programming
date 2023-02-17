#include <stdio.h>

int main (void)
{
	printf("size of a char:%zu byte(s)\n",sizeof(char));
	printf("size of an int:%zu byte(s)\n",sizeof(int));
	printf("size of a long int:%zu byte(s)\n",sizeof(long int));
	printf("size of a long long int:%zu byte(s)\n",sizeof(long long int));
	printf("size of a float:%zu byte(s)\n",sizeof(float));

	/* size64 */

	printf("size of a char:%lu byte(s)\n",sizeof(char));
	printf("size of a int:%lu byte(s)\n",sizeof(int));
	printf("size of a long int:%lu byte(s)\n",sizeof(long int));
	printf("size of a long long int:%lu byte(s)\n",sizeof(long long int));
	printf("size of a float:%lu byte(s)\n",sizeof(float));
	return 0;
}
