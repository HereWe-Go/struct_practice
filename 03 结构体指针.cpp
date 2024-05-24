#include<iostream>
#include "结构体.h"
using namespace std;

struct student {
	string name;//姓名
	int age;    //年龄
	int score;  //分数
};

void struct_pointer(){

	//创建结构体变量
	student stu = { "张三",20,80 };

	//指针变量指向stu
	student* p = &stu;

	//利用指针输出->
	cout << " 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}