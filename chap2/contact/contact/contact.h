#pragma once // һ��Ԥ��������������ͬ��ͷ�ļ�ֻ����һ��
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <windows.h>
#define NAME_MAX 20
#define GENDER_MAX 10
#define TELEPHONE 12
#define ADDRESS_MAX 40
#define MAX 100

#define DATA_INIT_MAK 3
#define INCREESE_NUM 2

struct Peo
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char telephone[TELEPHONE];
	char address[ADDRESS_MAX];
};
//
//// ��̬�汾��������޷����ɸı��С
//struct Contact
//{
//	struct Peo data[MAX];
//	int count;
//};

// ��̬�汾
struct Contact
{
	struct Peo* data;
	int count;
	int max_count;
};

void initialization_contact(struct Contact* con);

void show_contact(struct Contact* con);

void add_contact(struct Contact* con);

void del_contact(struct Contact* con);

void find_contact(struct Contact* con);

void modify_contact(struct Contact* con);

void sort_contact(struct Contact* con);

void Save_Contact_data(struct Contact* con);






