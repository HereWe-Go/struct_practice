#include<iostream>
#include "�ṹ��.h"
using namespace std;

struct student {
	string name;//����
	int age;    //����
	int score;  //����
};

void struct_pointer(){

	//�����ṹ�����
	student stu = { "����",20,80 };

	//ָ�����ָ��stu
	student* p = &stu;

	//����ָ�����->
	cout << " ������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}