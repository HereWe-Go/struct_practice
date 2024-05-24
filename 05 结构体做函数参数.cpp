//#include<iostream>
//#include "结构体.h"
//using namespace std;
//
////将结构体作为参数向函数传递
////1、值传递
////2、地址传递
//
////定义学生结构体
//struct student {
//	//定义成员变量
//	string name;//姓名
//	int age = 0;    //年龄
//	int score = 0;  //分数
//};
//
////值传递
//void printStudent1(student s) {
//	cout << s.name << ' ' << s.age << ' ' << s.score << endl;
//}
//
////地址传递
//void printStudent2(student * p) {
//	cout << p->name << ' ' << p->age << ' ' << p->score << endl;
//}
//
//void struct_func() {
//	//定义结构体变量并赋值
//	student stu;
//	stu = { "张三",20,90 };
//	
//	//通过值传递方式输出学生信息
//	printStudent1(stu);
//
//	//通过地址传递方式输出学生信息
//	printStudent2(&stu);
//}
//
