//関数はmain関数の下に書いてはいけない。
//理由は、main関数の下に関数を書くとエディターはmain関数から最初に処理されるので
//関数をmain関数の下に書くと再定義されてしまうから。
#include <stdio.h>
//長方形の面積を出力する関数
int rectangle(int x,int y)
{
	// int re = x * y;
	return(x * y);
}


//正方形の面積を出力する関数

// int square(int x)
// {
// 	int sq = x * x;
// 	return(sq);
// }

int	main(void)
{
	int r;
	int e;
	// int y;

	// printf("正方形の長さを入力してください:");
	// scanf("%d",&r);
	printf("長方形の縦と横の長さを空白区切りで入力してください:");
	scanf("%d%d",&r,&e);

	// int y = square(r);
	// printf("一辺%dcmの正方形の面積は%dcmです。\n", r,y);
	int y = rectangle(r,e);
	printf("縦%dcm、横%dcmの長方形の面積は%dcmです。\n", r,e,y);

	return (0);
}

//円周率の公式を関数に入れる。
// double TestFunction(double x){
// 	double pi = 3.1459265;
// 	double y = 0;

// 	y = x * x * pi;

// 	return y;
// }

// #include <stdio.h>
// int	main(void)
// {
// 	double	r = 1;
// 	double	y = 0;

// 	printf("半径を入力してください:");
// 	scanf("%lf",&r);

// 	y = TestFunction(r);
// 	printf("半径%.0lfcmの半径の面積は%.2lfcmです。\n", r,y);

// 	return (0);
// }

// //int x と char x で同じ変数名で宣言しても型が異なるし変換指定子で識別しているからエラーが起きないと思ったけど
// //変数名は同じ関数の中では同じ変数名は使えない。
// //redefinition of 'x' with a different type: 'char' vs 'int'

// // #include <stdio.h>
// // int	main(void)

// // 	int x = 42;
// // 	char x = 'a';

// // 	printf("%d\n",x);
// // 	printf("%c\n",x);

// // 	return (0);
// // }
