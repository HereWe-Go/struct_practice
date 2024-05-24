/*
	案例描述：
	设计一个英雄的结构体，包括成员姓名、年龄、性别；
	创建结构体数组，数组中存放5名英雄。
	通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排列，最终打印排序后的结果。
	{"刘备", 23, "男"},
	{"关羽", 22, "男"},
	{"张飞", 20, "男"},
	{"赵云", 21, "男"},
	{"貂蝉", 19, "女"}
*/


#include<iostream>
#include "结构体.h"
using namespace std;

//创建英雄结构体
struct hero {
	string name;
	int age;
	string sex;
};

//冒泡排序函数
void bubbleSort(hero heroArray[]) {
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (heroArray[i].age > heroArray[j].age) {
				//交换两个结构体
				swap(heroArray[i], heroArray[j]);
			}
		}
	}
}

//输出函数
void heroArray_out(hero heroArray[]) {
	for (int i = 0; i < 5; i++) {
		cout << heroArray[i].name << ": " << heroArray[i].age << ", " << heroArray[i].sex <<endl;
	}
}


//主函数
void struct_case2() {
	
	//创建英雄结构体变量并输入英雄信息
	hero heroArray[5] = {
		{"刘备", 23, "男"},
		{"关羽", 22, "男"},
		{"张飞", 20, "男"},
		{"赵云", 21, "男"},
		{"貂蝉", 19, "女"}
	};

	//按照年龄进行升序排列（冒泡排序）
	bubbleSort(heroArray);

	//按顺序输出
	heroArray_out(heroArray);
}

