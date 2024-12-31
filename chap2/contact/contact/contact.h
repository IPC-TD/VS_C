#pragma once // 一个预处理命名，让相同的头文件只包含一次
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define NAME_MAX 20
#define GENDER_MAX 10
#define ADDRESS_MAX 40
#define MAX 100

struct Peo
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char address[ADDRESS_MAX];
};

struct Contact
{
	struct Peo data[MAX];
	int count;
};

void initialization_contact(struct Contact* con);

void show_contact(struct Contact* con);

void add_contact(struct Contact* con);

void del_contact(struct Contact* con);

void find_contact(struct Contact* con);

void modify_contact(struct Contact* con);

void sort_contact(struct Contact* con);





