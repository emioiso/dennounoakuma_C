/*
#include <stdio.h>

int main(void)
{
	puts("Hello world");
	printf("Hello world");

	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	printf("Hello world\n");

	return 0;
}
*/

//===== putsとprintfの違い =====
//①
//putsは文字列の最後に改行が入る。
//printfは文字列の最後に改行が入らない。
//②putsは変換指定子が使えない

//変換指定子とは
//%d → 10進数に変換
//%x → 16進数に変換
//%o → 8進数に変換
//%f
// → 小数点のある数値に使える。
// → 小数点以下6桁まで表示できる。
//%c → 数値を文字コードに変換する。
//%s → 文字列に使える。


/*
#include <stdio.h>

int main(void)
{
	printf("1+1は%dです。",2);
//	↑ と　↓ は同じ
	printf("1+1は%dです。", 1 + 1);
	return 0;
}
*/

/*
//%sの例
#include <stdio.h>

int main(void)
{
	printf("%s","Hello world\n");

	return 0;
}
*/
/*
//%cの例
//65と入力するとアスキーコードでAと表示される。
#include <stdio.h>

int main(void)
{
	printf("%c\n", 65);

	return 0;
}
*/

/*
//%dで複数表示したい数値の場合。
#include <stdio.h>

int main(void)
{
	printf("\n%d + %d = %d \n \n", 3, 3, 3 + 3);

	return 0;
}
*/

//%fで小数点を表示したい数値の場合。
#include <stdio.h>

int main(void)
{
	printf("\n円周率π = %f \n \n", 3.14159265897932364626);
	printf("\n円周率π = %.2f \n \n", 3.14159265897932364626);
	printf("\n円周率π = %.20f \n \n", 3.14159265897932364626);
	printf("\n円周率π = %.0f \n \n", 3.14159265897932364626);
	//printf("\n円周率π = %.-1f \n \n", 3.14159265897932364626);
	//負の数を入れるとエラーになる。
	return 0;
}
