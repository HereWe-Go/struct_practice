#include<iostream>
#include "�ṹ��.h"
using namespace std;


//����ṹ�壬����ѧ��������������ͷ���
struct student {
	string name = "����";
	int age = 10;
	int score = 70;
};

void struct_array() {
	//����ѧ������
	student stuArray[3] = {
		{"����",19,70},
		{"����",20,50},
		{"����",31,100}
	};

	//�����鲿��Ԫ�ظ�ֵ
	stuArray[2].name = "����";

	//�����������Ԫ��
	for (int i = 0; i < 3; i++) {
		cout << "������" << stuArray[i].name << " ���䣺" << stuArray[i].age << " ������" << stuArray[i].score << endl;
	}

}