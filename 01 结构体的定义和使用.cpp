#include<iostream>
#include "�ṹ��.h"
using namespace std;

//����ѧ���ṹ�壬��Ҫ��ʼ��
struct student {
	//��Ա�б�
	string name = "����";//����
	int age = 18;//����
	int score = 70;//����
}stu3;

void struct_define(){
	//���巽��1��stu1.xxx=...
	struct student stu1;//struct����ʡ��
	stu1.name = "����";
	stu1.age = 20;
	stu1.score = 75;
	cout << "ѧ��1��" << stu1.name << ' ' << stu1.age << ' ' << stu1.score << endl;

	//���巽��2��stu2={......}
	student stu2;//struct����ʡ��
	stu2 = { "����",20,75 };
	cout << "ѧ��2��" << stu2.name << ' ' << stu2.age << ' ' << stu2.score << endl;
	
	//������
	//���巽��3:�ڶ���ṹ��ʱ˳�㴴���ṹ�����
	stu3.name = "����";
	stu3.age = 20;
	stu3.score = 75;
	cout << "ѧ��3��" << stu3.name << ' ' << stu3.age << ' ' << stu3.score << endl;
}