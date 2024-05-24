#include<iostream>
#include "结构体.h"
using namespace std;

//结构体中的成员可以是另一个结构体
//例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体

//学生结构体定义
struct student {
	//定义成员变量
	string name;//姓名
	int age = 10;    //年龄
	int score = 90;  //分数
};

//老师结构体定义
struct teacher {
	string name;//姓名
	int age = 60;    //年龄
	int id = 100;      //编号
	student stu;//辅导的学生
};

void struct_struct() {
	//建立老师结构体变量
	teacher t;

	//给老师结构体变量赋值
	t.name = "王五";
	t.age = 40;
	t.id = 90;
	t.stu.name = "小红";
	t.stu.age = 10;
	t.stu.score = 80;

	//输出赋值信息
	cout << t.name << ' ' << t.age << ' ' << t.id << ' ' << t.stu.name << ' ' << t.stu.age << ' ' << t.stu.score << endl;

}