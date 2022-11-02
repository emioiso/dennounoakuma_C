#include <stdio.h>

int main(void)
{
	char test_A[] = "hoge\0hoge";

	// test_A[0] = 'A';
	// test_A[1] = 'B';
	// test_A[2] = 'C';
	// test_A[3] = 'D';

	//C言語は文字列はないけど、文字配列がある。
	printf("\n%s\n\n", test_A);

	return 0;
}
