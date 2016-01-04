#include <stdio.h>

int sentaku(double LN)
{
	int cn;
	
	printf("エンド幅を選択して下さい\n");
	printf("1〜3を入力\n");
	printf("1:100mm、2:130mm、3:135mm\n");
	scanf("%d",&cn);
	
	if (0>= cn || cn> 3){
		printf("1～3の間で入力してください。\n");
	}
	
	switch(cn){
		case 1:
			LN = 100.0;
			break;
		case 2:
			LN = 130.0;
			break;
		case 3:
			LN = 135.0;
			break;
		default:
			printf("1～3の間で入力してください。\n");
			break;
	}
	
	return LN;
}
