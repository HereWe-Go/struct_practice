#include<iostream>
#include "结构体.h"
using namespace std;


//定义结构体，包含学生的姓名、年龄和分数
struct student {
	string name = "张三";
	int age = 10;
	int score = 70;
};

void struct_array() {
	//定义学生数组
	student stuArray[3] = {
		{"张三",19,70},
		{"李四",20,50},
		{"王五",31,100}
	};

	//给数组部分元素赋值
	stuArray[2].name = "赵六";

	//按行输出数组元素
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << stuArray[i].name << " 年龄：" << stuArray[i].age << " 分数：" << stuArray[i].score << endl;
	}

}