#include<iostream>
#include "�ṹ��.h"
using namespace std;

//�ṹ����const�����ã���ֹ�����

//����ѧ���ṹ��
struct student {
	//�����Ա����
	string name;//����
	int age = 0;    //����
	int score = 0;  //����
};

//�������е��β���Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
//const��ֹ�����
void printStudent2(const student* p) {
	//p->age = 100;//����const��һ�����޸ľͻᱨ�����Է�ֹ���ǵ������
	cout << p->name << ' ' << p->age << ' ' << p->score << endl;
}

void struct_const() {
	//����ṹ���������ֵ
	student stu;
	stu = { "����",20,90 };

	//ͨ����ַ���ݷ�ʽ���ѧ����Ϣ
	printStudent2(&stu);
}