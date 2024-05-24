#include<iostream>
#include "结构体.h"
using namespace std;

//建立学生结构体，需要初始化
struct student {
	//成员列表
	string name = "张三";//姓名
	int age = 18;//年龄
	int score = 70;//分数
}stu3;

void struct_define(){
	//定义方法1：stu1.xxx=...
	struct student stu1;//struct可以省略
	stu1.name = "李四";
	stu1.age = 20;
	stu1.score = 75;
	cout << "学生1：" << stu1.name << ' ' << stu1.age << ' ' << stu1.score << endl;

	//定义方法2：stu2={......}
	student stu2;//struct可以省略
	stu2 = { "李四",20,75 };
	cout << "学生2：" << stu2.name << ' ' << stu2.age << ' ' << stu2.score << endl;
	
	//不常用
	//定义方法3:在定义结构体时顺便创建结构体变量
	stu3.name = "李四";
	stu3.age = 20;
	stu3.score = 75;
	cout << "学生3：" << stu3.name << ' ' << stu3.age << ' ' << stu3.score << endl;
}