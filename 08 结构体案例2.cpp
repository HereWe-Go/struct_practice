/*
	����������
	���һ��Ӣ�۵Ľṹ�壬������Ա���������䡢�Ա�
	�����ṹ�����飬�����д��5��Ӣ�ۡ�
	ͨ��ð��������㷨���������е�Ӣ�۰�����������������У����մ�ӡ�����Ľ����
	{"����", 23, "��"},
	{"����", 22, "��"},
	{"�ŷ�", 20, "��"},
	{"����", 21, "��"},
	{"����", 19, "Ů"}
*/


#include<iostream>
#include "�ṹ��.h"
using namespace std;

//����Ӣ�۽ṹ��
struct hero {
	string name;
	int age;
	string sex;
};

//ð��������
void bubbleSort(hero heroArray[]) {
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (heroArray[i].age > heroArray[j].age) {
				//���������ṹ��
				swap(heroArray[i], heroArray[j]);
			}
		}
	}
}

//�������
void heroArray_out(hero heroArray[]) {
	for (int i = 0; i < 5; i++) {
		cout << heroArray[i].name << ": " << heroArray[i].age << ", " << heroArray[i].sex <<endl;
	}
}


//������
void struct_case2() {
	
	//����Ӣ�۽ṹ�����������Ӣ����Ϣ
	hero heroArray[5] = {
		{"����", 23, "��"},
		{"����", 22, "��"},
		{"�ŷ�", 20, "��"},
		{"����", 21, "��"},
		{"����", 19, "Ů"}
	};

	//������������������У�ð������
	bubbleSort(heroArray);

	//��˳�����
	heroArray_out(heroArray);
}

