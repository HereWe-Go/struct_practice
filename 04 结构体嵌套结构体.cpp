#include<iostream>
#include "�ṹ��.h"
using namespace std;

//�ṹ���еĳ�Ա��������һ���ṹ��
//���磺ÿ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��

//ѧ���ṹ�嶨��
struct student {
	//�����Ա����
	string name;//����
	int age = 10;    //����
	int score = 90;  //����
};

//��ʦ�ṹ�嶨��
struct teacher {
	string name;//����
	int age = 60;    //����
	int id = 100;      //���
	student stu;//������ѧ��
};

void struct_struct() {
	//������ʦ�ṹ�����
	teacher t;

	//����ʦ�ṹ�������ֵ
	t.name = "����";
	t.age = 40;
	t.id = 90;
	t.stu.name = "С��";
	t.stu.age = 10;
	t.stu.score = 80;

	//�����ֵ��Ϣ
	cout << t.name << ' ' << t.age << ' ' << t.id << ' ' << t.stu.name << ' ' << t.stu.age << ' ' << t.stu.score << endl;

}