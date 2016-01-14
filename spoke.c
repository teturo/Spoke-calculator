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


double keisan(double A,double B,double C)
{
	double l,L,a,alfa,rad,S,N;
	//int S,N;
	
	//l = A*A + B*B;
	//l = A*A + B*B + C*C - 2*A*B*alfa; 
	
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
	double ERD,PCD,A,B,C,LN,D,L,sp;
	int cn;
	
	printf("ERDを入力して下さい(単位ミリ、小数点以下も)\n");
	scanf("%lf",&ERD);
	
	printf("PCDを入力して下さい(単位ミリ、小数点以下も)\n");
	scanf("%lf",&PCD);
	
	printf("エンド幅を入力して下さい(単位ミリ、小数点以下も)\n");
	scanf("%lf",&LN);
	
	printf("ロックナット-フランジ間距離を入力して下さい(単位ミリ、小数点以下も)\n");
	scanf("%lf",&D);
	
	printf("LN=%d\n",LN);
	
	
	A = ERD/2;
	B = PCD/2;
	C = LN/2-D;
	
	sp = keisan(A,B,C);
	printf("C=%lf\n",C);
	
	
	printf("スポーク長:%lf\n",sp);

	printf("sp=%lf\n",sp);
	
	return 0;
}
