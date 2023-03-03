#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int x = 0; x < 5; x++)
	{
		printf("\n%d回目です。\n\n", x);
	}
	return 0;
}
//===== whileとforの使い分け =====
//while
//繰り返す時が決まってない時に使う。
//ex
//合計金額が1万円になるまで繰り返す。
//2に対して2048になるまで2をかける。
//for
//繰り返す回数が決まっている時に使う。
//ex
//100円を5回入れる。
//2に対して2を5回かける。
