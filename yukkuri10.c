#include <stdio.h>

int main(void)
{
	int x;

	printf("\n数値を入力してください。: ");
	scanf("\n%d", &x);

	if(x == 15)
	{
		printf("\nTrue");
		printf("\nxは15と同じです。\n");
	}
	else if(x > 15 )
	{
		printf("\nTrue");
		printf("\nxは15以上です。\n");
	}
	else if(x < 15)
	{
		printf("\nTure");
		printf("\nxは15以下です。\n");
	}

	return 0;
}
