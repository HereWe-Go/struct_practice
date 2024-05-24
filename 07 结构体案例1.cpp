/*
	案例描述：
	学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下：
	设计学生和老师的结构体，其中在老师的结构体中，由老师姓名和一个存放5名学生的数组作为成员；
	学生的成员有姓名、考试分数;
	创建数组存放3名老师，通过函数给每个老师及所带学生赋值；
	最终打印出老师数据以及老师所带的学生数据。
*/


#include<iostream>
#include "结构体.h"
using namespace std;


//创建学生结构体
struct student {
	string name;
	int score = 0;
};

//创建老师结构体
struct teacher {
	string name;
	student stu[5];
};

//信息录入函数
void Arrayin(teacher* p) {

	//老师姓名、学生姓名和学生分数信息
	string name_teacher[3] = { "王老师", "张老师", "刘老师" };
	string name_student[3][5] = {
		{"王一","王二","王三","王四","王五"},
		{"张一","张二","张三","张四","张五"},
		{"刘一","刘二","刘三","刘四","刘五"}
	};

	int score_student[3][5] = {
		{70,75,80,85,90},
		{91,67,85,54,29},
		{100,65,38,91,89}
	};

	//将相关信息存入结构体变量中

	//老师循环
	for (int i = 0; i < 3; i++) {
		//老师姓名信息存储
		p->name = name_teacher[i];
		//学生循环
		for (int j = 0; j < 5; j++) {
			//学生分数存储
			p->stu[j].score = score_student[i][j];
			//学生姓名存储
			p->stu[j].name = name_student[i][j];
		}
		//指针指向下一个老师地址
		p++;
	}
}

//信息输出函数
void Arrayout(teacher* p) {
	for (int i = 0; i < 3; i++) {
		//输出老师姓名
		cout << p->name << "：" << endl;
		for (int j = 0; j < 5; j++) {
			//依次输出各学生的分数
			cout << p->stu[j].name << "：" << p->stu[j].score << endl;
		}
		cout << endl;
		p++;
	}
}

//主函数
void struct_case1() {

	//创建老师结构体变量
	teacher t[3];

	//录入老师和学生信息
	Arrayin(t);

	//按顺序输出每个老师的学生信息
	Arrayout(t);
}


