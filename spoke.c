#include <stdio.h>
#include <math.h>

/*
 * 
 * L² =A² +B² +C² – 2ABcosα 
 * L = √(A² +B² +C² – 2ABcosα)
 * α = 360°÷スポーク数×組数
 * αをaで代用
 * A リム半径、B スポーク穴ピッチ半径、
 * C フランジまでの距離 
 * S スポーク数、N 組み数
*/

double input_number(char str[128])
{
	double i;
	printf("%sを入力して下さい。(単位ミリ、小数点以下も)\n",str);
	scanf("%lf",&i);
	
	return i;
}

int check(double i)
{
	int j = 0;
	
	if(i < 0){
		printf("負の数は扱えません\n");
		j = -1;
	}else if(i > 1000){
		printf("大きすぎます\n");
		j = -1;
	}
	
	return j;
}

double input(char str[128])
{
	double i;
	int j;
	
	i = input_number(str);
	j = check(i);
	
	while(j < 0){
		i = input_number(str);
		j = check(i);
	}
	
	return i;
		
}

double calculation(double A,double B,double C)
{
	double l,L,a,alfa,rad,S,N;
	
	printf("スポーク数を入力して下さい\n");
	scanf("%lf",&S);
	
	printf("組み数を入力して下さい\n");
	scanf("%lf",&N);
	
	a = 360 / S*N; 
	printf("a=%lf\n",a);
	rad = a/180.0*M_PI;
	printf("rad=%lf\n",rad);
	alfa = cos(rad);
	
	l = A*A + B*B + C*C - 2*A*B*alfa;
	
	printf("alfa=%lf\n",alfa);
	printf("l=%lf\n",l);
	L = sqrt(l);
	printf("L=%lf\n",L);
	
	return L;
}
	

int main(int argc, char **argv)
{
	double ERD,PCD,A,B,C,LN,D,sp;
	//int cn;
	
	ERD = input("ERD");
	PCD = input("PCD");
	LN = input("エンド幅");
	D = input("ロックナット-フランジ間距離");
	
	A = ERD/2;
	B = PCD/2;
	C = LN/2-D;
	
	sp = calculation(A,B,C);
	
	printf("ERD=%lf\n",ERD);
	printf("PCD=%lf\n",PCD);
	printf("D=%lf\n",D);
	printf("C=%lf\n",C);
	
	
	printf("スポーク長:%lf\n",sp);

	printf("sp=%lf\n",sp);
	
	return 0;
}
