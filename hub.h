#include <stdio.h>

/*ハブデータ
 * スポーク計算に必要なデータを記載
 * 重量も記載している
 * 1、ハブの名称
 * 2、PCD
 * 3、エンド幅(ロックナット間距離ＯＬＤ)
 * 5、ロックナット-フランジ間距離(右)
 * 6、ロックナット-フランジ間距離(左)
 * 7、ハブ重量
 * 
 */ 

struct front_hub
{
	char *name;
	double pcd;
	double old;
	double range;
	double weight;
};

struct rear_hub
{
	char *name;
	double pcd;
	double old;
	double range_r;
	double range_l;
	double weight;
};

struct front_hub Evolution_light = {
	.name = "Evolution_light_front",
	.pcd = 30,
	.old = 100,
	.range = 17.5,
	.weight = 60,
};

struct front_hub HB2200 = {
	.name = "HB-2200_front",
	.pcd = 37,
	.old = 100,
	.range = 16,
	.weight = 60,
};
