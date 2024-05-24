#include<iostream>
#include "结构体.h"
using namespace std;

//结构体中const的作用：防止误操作

//定义学生结构体
struct student {
	//定义成员变量
	string name;//姓名
	int age = 0;    //年龄
	int score = 0;  //分数
};

//将函数中的形参作为指针，可以减少内存空间，而且不会复制新的副本出来
//const防止误操作
void printStudent2(const student* p) {
	//p->age = 100;//加入const，一旦有修改就会报错，可以防止我们的误操作
	cout << p->name << ' ' << p->age << ' ' << p->score << endl;
}

void struct_const() {
	//定义结构体变量并赋值
	student stu;
	stu = { "张三",20,90 };

	//通过地址传递方式输出学生信息
	printStudent2(&stu);
}