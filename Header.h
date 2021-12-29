#define _CRT_SECURE_NO_WARNINGS
#ifndef HEADER_H

#define HEADER_H
#include <string>
#include <iostream>
#include <vector>
#include <limits>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <Windows.h>
#include <iostream>
#include <fstream>
#include "math.h"
#define CHARS ".,?\" \n"
typedef struct good {
	int index, count, numbs, helpi, flag; // èíäåêñû
	char name[32], helpc[20]; // íàçâàíèå-îïèñàíèå òîâàðà
	double shir, dol, S, helpd, helpdd; // öåíà òîâàðà
} good;
void open(good** goods, int* size, int* capacity);
void save(good* goods, int size);
void openwest(good** goods, int* size, int* capacity);
void openeast(good** goods, int* size, int* capacity);
void searh(good* goods, int size);
void sort(good* goods, int size);
void sorts(good* goods, int size);
void sortwest(good* goods, int size);
void sorteast(good* goods, int size);
void km(good* goods, int size);
void shir(good* goods, int size);
void deldol(good* goods, int size);
void dell(good* goods, int size);
void delln(good* goods, int size);
void delshir(good* goods, int size);
void swipe(good* goods, int size);
void way(good* goods, int size);
void print_menuadm();
int delete_goods(good* goods, int size);
int get_variant(int count);
int delop(good* goods, int size);
int dels(good* goods, int size);
void print_goods(good* goods, int size);
void nonumb(good** goods, int* size, int* capacity);
void Pas();
void zst();
#endif HEADER_H#pragma once
