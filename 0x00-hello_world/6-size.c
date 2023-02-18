#include <stdio.h>

int main(void)
	/**
	 * main ->prints the size of various types on the computer
	 * 	it is complied and run on.
	 *
	 * in size32 and size64
	 * return 0
	 */
{
	printf("size of a char:%zu byte(s)\n", sizeof(char));
	printf("size of an int:%zu byte(s)\n", sizeof(int));
	printf("size of a long int:%zu byte(s)\n", sizeof(long int));
	printf("size of a long long int:%zu byte(s)\n", sizeof(long long int));
	printf("size of a float:%zu byte(s)\n", sizeof(float));

	return (0);
}
