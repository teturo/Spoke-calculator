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
