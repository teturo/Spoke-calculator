#include <stdio.h>

/*リムデータ
 * スポーク計算に必要なデータを記載
 * 重量も記載している
 * 1、リムの名称
 * 2、ERD
 * 3、リム重量
 * 
 */ 

struct rim_data
{
	char name[128];
	double erd;
	double weight;
};

struct rim_data cxp22 = {
	.name = "CXP22",
	.erd = 599,
	.weight = 514,
};

struct rim_data al22 ={
	.name = "AL22",
	.erd = 595,
	.weight = 385,
};
