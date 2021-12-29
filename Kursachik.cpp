#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
int main()
{
	setlocale(LC_ALL, "Rus");
	int variant; // выбранный пункт меню
	int size = 0; // количество элементов массива товаров
	int capacity = 1; // ёмкость массива товаров
	int zzf = 0, pass = 22869;
	zst();
	good* goods = (good*)malloc(capacity * sizeof(good));
	goods[0].helpdd = 0;
	do {
		system("cls");
		print_menuadm(); // выводим меню на экран

		variant = get_variant(16); // получаем номер выбранного пункта меню
		int i = 0;
		switch (variant) {
		case 1:
			//for (;goods[0].helpdd != 150;) {
			//goods[0].helpdd += 10;
			printf("\nВведите название исходного файла\n>>>>>");
			scanf("%s.txt", &goods[0].helpc);
			//strcpy(goods[0].helpc, "city.txt");
			size = dels(goods, size);
			goods[10].helpi = 0;
			open(&goods, &size, &capacity);
			for (int o = size; o != 0; o--)
				goods[10].helpi = 0;
			searh(goods, size);
			size = delete_goods(goods, size);
			delln(goods, size);
			system("pause");
			size = dels(goods, size);
			system("pause");
			openeast(&goods, &size, &capacity);
			sorteast(goods, size);
			size = dels(goods, size);
			system("pause");
			openwest(&goods, &size, &capacity);
			sortwest(goods, size);
			size = dels(goods, size);
			system("pause");
			//	}
			break;
		case 2:
			print_goods(goods, size);
			break;
		case 3:
			shir(goods, size);
			size = dels(goods, size);
			printf("\n\t\t %lf ----%d---> %lf\n\t\t\t%lf\n\t\t", goods[3].helpd, size, goods[5].helpd, goods[4].helpd);
			system("pause");
			break;
		case 4:
			sort(goods, size);
			size = dels(goods, size);
			printf("\n\t\t %lf ----%d---> %lf\n\t\t\t%lf\n\t\t", goods[0].helpd, size, goods[2].helpd, goods[1].helpd);
			system("pause");
			break;
		case 5:
			size = delete_goods(goods, size);
			break;
		case 6:
			save(goods, size);
			break;
		case 7:
			open(&goods, &size, &capacity);
			break;
		case 8:
			size = dels(goods, size);
			open(&goods, &size, &capacity);
			break;
		case 9:
			deldol(goods, size);
			size = dels(goods, size);
			break;
		case 12:
			way(goods, size);
			break;
		case 11:
			swipe(goods, size);
			size = dels(goods, size);
			break;
		case 10:
			delshir(goods, size);
			size = dels(goods, size);
			break;
		case 13:
			km(goods, size);
			system("pause");
			break;
		case 14:
			size = dels(goods, size);
			nonumb(&goods, &size, &capacity);
			break;
		case 15:
			free(goods);
			printf("Память освобождена. Выход."); Sleep(700);
			printf("1 "); Sleep(200);
			printf("2 "); Sleep(300);
			printf("3 ");
			break;
		case 2022:
			Pas();
			break;
		}
	} while (variant != 15);
	return 0;
}
void print_goods(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	printf("|_______________________________________________________________________________|\n");
	printf("|Num |Index |         City        |    latitude    |     longitude    |   Count |\n");
	printf("|_______________________________________________________________________________|\n");

	if (size == 0)
		printf("|                  No cityes was added...                        |\n");

	for (int i = 0; i < size; i++) {
		printf("| %4d |%6d| %31s | %14.7lf | %14.7lf | %8d |\n", i + 1, goods[i].index, goods[i].name, goods[i].shir, goods[i].dol, goods[i].count);
		printf("|_______________________________________________________________________|\n");
	}
	system("pause");
}
void searh(good* goods, int size)
{
	int sear = 0;
	setlocale(LC_ALL, "Rus");
	system("cls");  // очищаем экран
	int sl = 162390;
	int chet = 0;
	for (int i = 0; i < size; i++)
	{
		if (goods[i].index == sl)
		{
			goods[11].helpi = i;
			goods[11].helpd = goods[i].dol;
		}
	}
}
void sort(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	int var = 0;
	printf("Сортировка по:\n1. MAX PRICE\n2. MIN PRICE\n3. MAX COUNT \n4. MAX PRICE\n5. MIN PRICE\n>>>");
	while (var != 1 && var != 2 && var != 3 && var != 4 && var != 5)
		var = 1;//scanf("%d", &var);
	double max = goods[0].shir, min = 0;
	if (var == 1)
		setlocale(LC_ALL, "Rus");
	printf("Введите названия файла, куда следует сохранить список\n>>>>");
	scanf("%s.txt", &goods[0].helpc);
	FILE* list;
	list = fopen(goods[0].helpc, "w");
	double miz = 0, maz = 0;
	int chet = size, z = 0;
	while (chet != 0)
	{
		//for (max = goods[0].shir; max != 0; max--)
		//{
		max = goods[0].shir;
		int i = 0, m = 0;
		for (; i < size; i++)
		{
			if (goods[i].shir > max) {
				max = goods[i].shir;
				m = i;
			}
		}
		fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count);
		if (z == 0)
			goods[2].helpd = goods[m].shir;
		goods[0].helpd = goods[m].shir;
		goods[m].shir = 0;
		system("cls"); z++;
		printf("\n			 _______________\n			|               |\n			| ");
		printf("%4d  /  %d", z, size);
		printf(" |\n			|_______________|\n\n\t");
		chet--;

	}
	printf("\tСпиcок успешно сохранен\a\n");
	fclose(list);
	goods[1].helpd = goods[0].helpd + (goods[2].helpd - goods[0].helpd) / 2;
	printf("\n\t\t %lf ----%d---> %lf\n\t\t\t%lf\n\t\t", goods[0].helpd, size, goods[2].helpd, goods[1].helpd);
	system("pause");
}
void km(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	int m, z = 0, chet = 0;
	char name[32];
	printf("Введите названия файла, куда следует сохранить список\n>>>>");
	scanf("%s.txt", &name);
	FILE* list;
	list = fopen(goods[1].helpc, "w");
	for (int kf = 1, m = 0; m < size; m++)
	{
		if (goods[m].shir <= 70)
			kf = 38.2;
		if (goods[m].shir <= 60)
			kf = 55.8;
		if (goods[m].shir <= 50)
			kf = 71.7;
		goods[m].dol = goods[m].dol * kf;
		goods[m].shir = goods[m].shir * 111.1;
		fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count);
		system("cls"); z++;
		printf("\n			 _______________\n			|               |\n			| ", z, size);
		printf("%4d  /  %d", z, size);
		printf(" |\n			|_______________|\n\n\t", z, size);
		chet--;
	}
	fclose(list);
	if (goods[10].helpi != 0)
		system("pause");
}
void shir(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	double maxx = goods[0].dol, minn = goods[0].dol;
	int chet = size, z = 0;
	while (chet != 0)
	{
		maxx = goods[0].dol;
		int i = 0, m = 0;
		for (; i < size; i++)
		{
			if (goods[i].dol > maxx) {
				maxx = goods[i].dol;
				m = i;
			}
		}
		if (z == 0)
			goods[5].helpd = goods[m].dol;
		goods[3].helpd = goods[m].dol;
		goods[m].dol = 0;
		system("cls"); z++;
		printf("\n			 _______________\n			|               |\n			| ", z, size);
		printf("%4d  /  %d", z, size);
		printf(" |\n			|_______________|\n\n\t", z, size);
		chet--;

	}
	goods[4].helpd = goods[3].helpd + (goods[5].helpd - goods[3].helpd) / 2;
	printf("\n\t\t %lf ----%d---> %lf\n\t\t\t%lf\n\t\t", goods[3].helpd, size, goods[5].helpd, goods[4].helpd);
	system("pause");
}
void deldol(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	int m = 0, z = 0;
	FILE* list;
	list = fopen(goods[2].helpc, "w");
	for (; goods[1].helpd <= goods[m].dol && m < size; m++)
	{
		fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count);
		system("cls"); z++;
		printf("\n			 _______________\n			|               |\n			| ", z, size);
		printf("%4d  /  %d", z, size);
		printf(" |\n			|_______________|\n\n\t", z, size);
	}
	fclose(list);
	list = fopen(goods[3].helpc, "w");
	for (int mm = size - 1; mm >= m; mm--)
	{
		fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", mm + 1, goods[mm].index, goods[mm].name, goods[mm].shir, goods[mm].dol, goods[mm].count);

		system("cls"); z++;
		printf("\n			 _______________\n			|               |\n			| ", z, size);
		printf("%4d  /  %d", z, size);
		printf(" |\n			|_______________|\n\n\t", z, size);
	}
	printf("\tСпиcок успешно сохранен\a\n");
	fclose(list);
	if (goods[10].helpi != 1)
		system("pause");
}
void dell(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	int m, z = 0;
	FILE* list;
	list = fopen(goods[2].helpc, "w");
	for (m = 0; m < size; m++)
	{
		if (goods[11].helpd <= goods[m].dol) {
			fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count);
			system("cls"); z++;
			printf("\n			 _______________\n			|               |\n			| ", z, size);
			printf("%4d  /  %d", z, size);
			printf(" |\n			|_______________|\n\n\t", z, size);
		}
	}
	fclose(list);
	list = fopen(goods[3].helpc, "w");
	for (int m = 0; m < size; m++)
	{
		if (goods[11].helpd > goods[m].dol) {
			fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count);

			system("cls"); z++;
			printf("\n			 _______________\n			|               |\n			| ", z, size);
			printf("%4d  /  %d", z, size);
			printf(" |\n			|_______________|\n\n\t", z, size);
		}
	}
	printf("\tСпиcок успешно сохранен\a\n");
	fclose(list);
}
void swipe(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	int m = size - 1, z = 0;
	char name2[63];
	printf("Введите названия файла, куда следует сохранить список\n>>>>");
	scanf("%s.txt", &name2);
	FILE* list;
	list = fopen(name2, "w");
	for (; m >= 0; m--)
	{
		fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count);
		system("cls"); z++;
		printf("\n			 _______________\n			|               |\n			| ", z, size);
		printf("%4d  /  %d", z, size);
		printf(" |\n			|_______________|\n\n\t", z, size);
	}
	fclose(list);
}
void delshir(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	int m, z = 0;
	char name[63];
	char name2[63];
	printf("Введите названия файла, куда следует сохранить 1/2 пути\n>>>>");
	scanf("%s.txt", &name);
	printf("Введите названия файла, куда следует сохранить 2/2 пути\n>>>>");
	scanf("%s.txt", &name2);
	FILE* list;
	list = fopen(name, "w");
	m = 0;
	for (; m < size; m++)
	{
		if (goods[4].helpd <= goods[m].dol)
		{
			fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count);
			system("cls"); z++;
			printf("\n			 _______________\n			|               |\n			| ", z, size);
			printf("%4d  /  %d", z, size);
			printf(" |\n			|_______________|\n\n\t", z, size);
		}
	}
	fclose(list);
	list = fopen(name2, "w");
	m = 1;
	for (m = 0; m < size; m++)
	{
		if (goods[4].helpd > goods[m].dol)
		{
			fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count);
			system("cls"); z++;
			printf("\n			 _______________\n			|               |\n			| ", z, size);
			printf("%4d  /  %d", z, size);
			printf(" |\n			|_______________|\n\n\t", z, size);
		}
	}
	fclose(list);
	system("pause");
}
void way(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	int z = 0, i = 0;
	goods[8].helpd = 0;
	for (; i + 1 != size; i++)
	{
		goods[6].helpd = goods[i].shir - goods[i + 1].shir;
		goods[7].helpd = goods[i].dol - goods[i + 1].dol;
		goods[6].helpd = sqrt((goods[6].helpd) * (goods[6].helpd) + (goods[7].helpd) * (goods[7].helpd));
		goods[8].helpd = goods[8].helpd + goods[6].helpd;
		system("cls"); z++;
		printf("\n			 _______________\n			|               |\n			| ", z, size);
		printf("%4d  /  %d", z, size);
		printf(" |\n			|_______________|\n\n\t", z, size);
		printf("%lf----%lf------%lf", goods[6].helpd, goods[7].helpd, goods[8].helpd);
	}
	system("pause");
}
void sorts(good* goods, int size)
{
	double max = goods[0].shir, min = 0;
	setlocale(LC_ALL, "Rus");
	if (goods[10].helpi != 0) {
		printf("Введите названия файла, куда следует сохранить список\n>>>>");
		scanf("%s.txt", &goods[1].helpc);
	}
	FILE* list;
	list = fopen(goods[1].helpc, "w");
	double maz = 0;
	int chet = size, m = 0, z = 0; // индексы
	double  a, b = 0; // цена товара
	while (chet != 0)
	{
		maz = maz + b;
		fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count);
		printf("%-4d %-6d %-31s %-14.7lf %-14.7lf %-18lf\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, b);
		b = 999999; goods[m].shir = 0; goods[m].dol = 0;
		for (int i = 1; i < size; i++)
		{
			a = sqrt(((goods[m].shir - goods[i].shir) * (goods[m].shir - goods[i].shir)) + ((goods[m].dol - goods[i].dol) * (goods[m].dol - goods[i].dol)));
			if (a < b) {
				b = a;
				m = i;
			}
		}
		chet--;
	}
	printf("\tСпиcок успешно сохранен\a\n");
	fclose(list);
	system("pause");
}
void delln(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	int m, z = 0;
	double gran = 49.2;
	char name[32] = "west.txt";
	char name2[32] = "east.txt";
	FILE* list;
	list = fopen(name, "w");
	for (m = 0; m < size; m++)
	{
		if (gran <= goods[m].dol) {
			fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count);
			z++;
			if (z % 30 == 1) {
				system("cls");
				printf("\n\tРаспределяем роль первому дрону, чтобы он не обиделся, вы подождете?)\n");
				printf("\n			 _______________\n			|               |\n			| ", z, size);
				printf("%4d  /  %d", z, size);
				printf(" |\n			|_______________|\n\n\t", z, size);
			}
		}
	}
	fclose(list);
	list = fopen(name2, "w");
	for (int m = 0; m < size; m++)
	{
		if (gran > goods[m].dol) {
			fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count);

			z++;
			if (z % 30 == 1) {
				system("cls");
				printf("\n\tРаспределяем роль второму дрону, чтобы он не обиделся, вы подождете?)\n");
				printf("\n			 _______________\n			|               |\n			| ");
				printf("%4d  /  %d", z, size);
				printf(" |\n			|_______________|\n\n");
				printf(" 			      2 / 2\n\n");
			}
		}
	}
	fclose(list);
}
void sorteast(good* goods, int size)
{
	double max = goods[0].shir, min = 0;
	setlocale(LC_ALL, "Rus");
	FILE* list;
	list = fopen("east.txt", "w");
	char name[32] = "Великий-Устюг";
	double maz = 0;
	int chet = size++, m = 0, z = 0, ind = 162390, count = 31664, ak = 0;
	double  a, b = 0, shir = 60.7603243, dol = 46.3053893, rad = 3.14159265358979323846 / 180, R = 6371, shr = 60;
	for (int clean = 0; clean < size; clean++) {
		goods[clean].flag = 0;
	}
	fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d %-20lf\n", 0, ind, name, shir, dol, count, b);
	//fprintf(list, "%-6d %-31s\n", ind, name);
	maz = maz + b;
	b = 999999; int i = 0, mi;
	for (; i < size; i++)
	{
		a = (acos(sin(shir * rad) * sin(goods[i].shir * rad) + cos(shir * rad) * cos(goods[i].shir * rad) * cos(dol * rad - goods[i].dol * rad))) * R;
		if (a < b) {
			b = a;
			mi = i;
		}
	}
	m = mi;
	while (chet >= 0)
	{
		fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d %-20lf\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count, b);
		//fprintf(list, "%-6d %-31s\n", goods[m].index, goods[m].name);
		maz = maz + b;
		b = 999999; goods[m].flag = 1; i = 0;
		for (; i < size; i++)
		{
			if (goods[i].flag != 1) {
				a = (acos(sin(goods[m].shir * rad) * sin(goods[i].shir * rad) + cos(goods[m].shir * rad) * cos(goods[i].shir * rad) * cos(goods[m].dol * rad - goods[i].dol * rad))) * R; ak = a;
				if (a < b) {
					b = a;
					mi = i;
				}
			}
		}
		m = mi;
		chet--;
	}
	a = (acos(sin(goods[m].shir * rad) * sin(shir * rad) + cos(goods[m].shir * rad) * cos(shir * rad) * cos(goods[m].dol * rad - dol * rad))) * R; ak = a;
	fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d %-20lf\n", 0, ind, name, shir, dol, count, a);
	//fprintf(list, "%-6d %-31s\n",ind, name);
	maz = maz + a;
	printf("Общий путь вторго дрона составляет примерно %lf км\n", maz);
	goods[0].helpd = maz;
	fclose(list);
}
void sortwest(good* goods, int size)
{
	double max = goods[0].shir, min = 0;
	setlocale(LC_ALL, "Rus");
	FILE* list;
	list = fopen("west.txt", "w");
	char name[32] = "Великий-Устюг";
	double maz = 0;
	int chet = size++, m = 0, z = 0, ind = 162390, count = 31664, ak = 0;
	double  a, b = 0, shir = 60.7603243, dol = 46.3053893, rad = 3.14159265358979323846 / 180, R = 6371, shr = 60;
	for (int clean = 0; clean < size; clean++) {
		goods[clean].flag = 0;
	}
	fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d %-20lf\n", 0, ind, name, shir, dol, count, b);
	//fprintf(list,"%-6d %-31s\n", ind, name);
	maz = maz + b;

	b = 999999;
	int i = 0, mi;
	for (; i < size; i++)
	{
		a = (acos(sin(shir * rad) * sin(goods[i].shir * rad) + cos(shir * rad) * cos(goods[i].shir * rad) * cos(dol * rad - goods[i].dol * rad))) * R;
		if (a < b) {
			b = a;
			mi = i;
		}
	}
	m = mi;
	while (chet >= 0)
	{
		fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d %-20lf\n", m + 1, goods[m].index, goods[m].name, goods[m].shir, goods[m].dol, goods[m].count, b);
		//fprintf(list, "%-6d %-31s\n", goods[m].index, goods[m].name); 
		maz = maz + b;
		b = 999999; goods[m].flag = 1; i = 0;
		for (; i < size; i++)
		{
			if (goods[i].flag != 1) {
				a = (acos(sin(goods[m].shir * rad) * sin(goods[i].shir * rad) + cos(goods[m].shir * rad) * cos(goods[i].shir * rad) * cos(goods[m].dol * rad - goods[i].dol * rad))) * R;
				if (a < b) {
					b = a;
					mi = i;
				}
			}
		}
		m = mi;
		chet--;
	}
	a = (acos(sin(goods[m].shir * rad) * sin(shir * rad) + cos(goods[m].shir * rad) * cos(shir * rad) * cos(goods[m].dol * rad - dol * rad))) * R;
	fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d %-20lf\n", 0, ind, name, shir, dol, count, a);
	//fprintf(list, "%-6d %-31s\n", ind, name);
	maz = maz + a;
	goods[0].helpd = goods[0].helpd + maz;
	printf("Общий путь первого дрона составляет примерно %lf км\n", maz);
	printf("Общий путь составляет примерно %lf км\n", goods[0].helpd);
	fclose(list);
}
void zst()
{
	system("cls");
	printf("       _   _   _____    _____    _____	 _     _    \n");
	printf("      | | | | |  _  |  |  __  \\ |  __  \\ \\ \\  / /   \n");
	printf("      | |_| | | |_| |  | |__| | | |__| |  \\ \\/ /    \n");
	printf("      |  _  | |  _  |  |  ___/  |  ___/    \\  /     \n");
	printf("      | | | | | | | |  | |      | |        / /      \n");
	printf("      |_| |_| |_| |_|  |_|      |_|       /_/       \n"); Sleep(450);
	printf("       _    _   ______	 _       _	\n");
	printf("      |  \\ | | |  ____| | |     | |	\n");
	printf("      |   \\| | | |____  | |  _	| |	\n");
	printf("      | |\\   | |  ____| | |_/ \\_| |	\n");
	printf("      | | \\  | | |____  |    _	  |	\n");
	printf("      |_|  \\_| |______|  \\__/ \\__/  \n"); Sleep(450);
	printf("       _     _  ______    _____    _____	 \n");
	printf("      \\ \\  / / |  ____|  |  _  |  |  __  \\  \n");
	printf("       \\ \\/ /  | |____   | |_| |  | |__| |  \n");
	printf("        \\  /   |  ____|  |  _  |  |  _   /   \n");
	printf("        / /    | |____   | | | |  | | \\ \\    \n");
	printf("       /_/     |______|  |_| |_|  |_|  |_|   \n"); Sleep(550);
	printf("\n==============================================\nС наступающим Максима Александровича, Ольгу Викторовну и Деда мороза\n От Халилова, Китаева и Новикова)\n\n\n"); Sleep(550);
	system("pause");
}
void print_menuadm() {
	system("cls");  // очищаем экран
	printf("======================================================MENU\n\n");
	printf("1.---> Auto Special for DedMoroz <---\n\n");
	printf("2.  Print List                     ____________    \n");
	printf("3.  ShirOperation                 |            | \n");
	printf("4.  DolgOperation        /\\      _|_____       |_  \n");
	printf("5.  CleanList           /  \\    |       |      | | \n");
	printf("6.  Save               /____\\   |       |      | | \n");
	printf("7.  Open                /  \\    |_______|      | | \n");
	printf("8.  Clean&Open         /    \\     |            | | \n");
	printf("9.  ShareDol          /______\\    |            |_| \n");
	printf("10. ShareShir          /     \\    |            |    \n");
	printf("11. FlipList          /       \\   |     ___    |   \n");
	printf("12. Way              /_________\\  |    |   |   |    \n");
	printf("13. Translate->KM        | |      |____|   |___|    \n");
	printf("14. NoNumbList                        \n");
	printf("15. Exit                          \n");
	printf(">");
}
int delete_goods(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	if (goods[10].helpi != 0) {
		if (size == 0)
			printf("|            ERROR! NO Goods           |\n");
		else {
			int bruh;
			printf("Товар который вы хотите удалить: ");
			scanf("%d", &bruh);
			printf("\n");
			for (int i = bruh - 1; i + 1 < size; i++)
			{

				memcpy(goods[i].name, goods[i + 1].name, 20);
				goods[i].shir = goods[i + 1].shir;
				goods[i].dol = goods[i + 1].dol;
				goods[i].count = goods[i + 1].count;
				goods[i].index = goods[i + 1].index;

			}
			size--;
			printf("Товар |%d| успешно удален!", bruh); Sleep(1650);
		}
	}
	else {
		for (int i = goods[11].helpi; i + 1 < size; i++)
		{

			memcpy(goods[i].name, goods[i + 1].name, 32);
			goods[i].shir = goods[i + 1].shir;
			goods[i].dol = goods[i + 1].dol;
			goods[i].count = goods[i + 1].count;
			goods[i].index = goods[i + 1].index;

		}
		size--;
	}
	return(size);
}
int dels(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	while (size != 0)
	{
		int bruh = 1;
		for (int i = bruh - 1; i + 1 < size; i++)
		{
			memcpy(goods[i].name, goods[i + 1].name, 20);
			goods[i].index = goods[i + 1].index;
			goods[i].shir = goods[i + 1].shir;
			goods[i].dol = goods[i + 1].dol;
			goods[i].count = goods[i + 1].count;

		}
		size--;
	}
	return(size);
}
int get_variant(int count) {
	int variant;
	char s[100]; // строка для считывания введённых данных
	scanf("%s", s); // считываем строку

					// пока ввод некорректен, сообщаем об этом и просим повторить его
	while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count)
	{
		if (variant == 2022)
			Pas();
		printf("Incorrect input. Try again: "); // выводим сообщение об ошибке
		scanf("%s", s); // считываем строку повторно
	}

	return variant;
}
int delop(good* goods, int size) {
	int bruh = size;
	for (int i = bruh - 1; i + 1 < size; i++)
	{
		memcpy(goods[i].name, goods[i + 1].name, 20);
		goods[i].shir = goods[i + 1].shir;
		goods[i].dol = goods[i + 1].dol;
		goods[i].count = goods[i + 1].count;

	}
	size--;
	return(size);
	printf("Файл загружен!");
	Sleep(1000); system("cls");
}
void save(good* goods, int size)
{
	setlocale(LC_ALL, "Rus");
	short f = 0;
	char name[63];
	printf("Введите названия файла, c которыv хотите работать\n>>>>");
	scanf("%s", &name);
	if (size == 0) {
		printf("Спиоск который вы хотите сохранить пустой - хотите очистить файл?\a\n1.Да\n2.Нет\n");
		while (f != 1 && f != 2)
		{
			if (f != 0) {
				printf("Выберите 1 или 2 вариант!");
			}
			scanf("%d", &f);
			system("cls");
		}
	}
	else
	{
		FILE* list;
		list = fopen(name, "w");
		for (int i = 0; i < size; i++)
		{
			fprintf(list, "%-4d %-6d %-31s %-14.7lf %-14.7lf %-8d\n", i + 1, goods[i].index, goods[i].name, goods[i].shir, goods[i].dol, goods[i].count);//222222222222222222222222222222222222222222222
		}
		fclose(list);
		printf("Спиcок успешно сохранен\a\n");
	}
	if (f == 1)
	{
		FILE* list;
		list = fopen(name, "w");
		printf("Файл очищен\a\n");
		fclose(list);
	}
	system("pause");
}
void open(good** goods, int* size, int* capacity)
{
	setlocale(LC_ALL, "Rus");
	int k = 0;
	if ((*goods)[10].helpi != 0 && (*goods)[10].helpi != 1) {
		printf("\nВведите названия файла, который хотите открыть\n>>>>");
		scanf("%s.txt", &(*goods)[0].helpc);
	}
	else
		k = (*goods)[10].helpi;
	FILE* list;

	if ((list = fopen((*goods)[k].helpc, "r")) == NULL)
	{
		printf("Не удалось открыть файл");
		Sleep(2500);
	}
	else
	{
		int n = 4, st = 1, d;
		setlocale(LC_ALL, "Rus");
		while (!feof(list))
		{
			//fseek(list, n, SEEK_CUR);

			fscanf(list, "%d", &(*goods)[*size].numbs);
			fscanf(list, "%d", &(*goods)[*size].index);
			fscanf(list, "%s", &(*goods)[*size].name);
			fscanf(list, "%lf", &(*goods)[*size].shir);
			fscanf(list, "%lf", &(*goods)[*size].dol);
			fscanf(list, "%d", &(*goods)[*size].count);
			if ((*goods)[8].helpi = 0)
				fscanf(list, "%lf", &(*goods)[*size].S);
			int ll = ftell(list);
			(*size)++;
			/*st++;
			if (st > 9)
				n = 2;
			if (st > 99)
				n = 3;
			if (st > 999)
				n = 4;
			if (st > 9999)
				n = 5;
			if (st > 99999)
				n = 6;*/

			if (*size >= *capacity)
			{
				*capacity *= 2;

				*goods = (good*)realloc(*goods, *capacity * sizeof(good));
			}
		}
		fclose(list);

		*size = delop(*goods, *size);
	}
}
void nonumb(good** goods, int* size, int* capacity)
{
	setlocale(LC_ALL, "Rus");
	int k = 0;
	printf("\nВведите названия файла, который хотите открыть\n>>>>");
	scanf("%s.txt", &(*goods)[0].helpc);
	FILE* list;

	if ((list = fopen((*goods)[k].helpc, "r")) == NULL)
	{
		printf("Не удалось открыть файл");
		Sleep(2500);
	}
	else
	{
		int n = 4, st = 1, d;
		setlocale(LC_ALL, "Rus");
		while (!feof(list))
		{

			fscanf(list, "%d", &(*goods)[*size].index);
			fscanf(list, "%s", &(*goods)[*size].name);
			fscanf(list, "%lf", &(*goods)[*size].shir);
			fscanf(list, "%lf", &(*goods)[*size].dol);
			fscanf(list, "%d", &(*goods)[*size].count);
			if ((*goods)[8].helpi = 0)
				fscanf(list, "%lf", &(*goods)[*size].S);
			int ll = ftell(list);
			(*size)++;


			if (*size >= *capacity)
			{
				*capacity *= 2;

				*goods = (good*)realloc(*goods, *capacity * sizeof(good));
			}
		}
		fclose(list);

		*size = delop(*goods, *size);
	}
}
void openwest(good** goods, int* size, int* capacity)
{
	setlocale(LC_ALL, "Rus");
	int k = 0;
	FILE* list;
	char name[32] = "west.txt";
	if ((list = fopen(name, "r")) == NULL)
	{
		printf("Не удалось открыть файл");
		Sleep(2500);
	}
	else
	{
		int n = 4, st = 1, d;
		setlocale(LC_ALL, "Rus");
		while (!feof(list))
		{
			//fseek(list, n, SEEK_CUR);

			fscanf(list, "%d", &(*goods)[*size].numbs);
			fscanf(list, "%d", &(*goods)[*size].index);
			fscanf(list, "%s", &(*goods)[*size].name);
			fscanf(list, "%lf", &(*goods)[*size].shir);
			fscanf(list, "%lf", &(*goods)[*size].dol);
			fscanf(list, "%d", &(*goods)[*size].count);
			//fscanf(list, "%lf", &(*goods)[*size].S);
			int ll = ftell(list);
			(*size)++;
			if (*size >= *capacity)
			{
				*capacity *= 2;

				*goods = (good*)realloc(*goods, *capacity * sizeof(good));
			}
		}
		fclose(list);

		*size = delop(*goods, *size);
	}
}
void openeast(good** goods, int* size, int* capacity)
{
	setlocale(LC_ALL, "Rus");
	int k = 0;
	FILE* list;
	char name[32] = "east.txt";
	if ((list = fopen(name, "r")) == NULL)
	{
		printf("Не удалось открыть файл");
		Sleep(2500);
	}
	else
	{
		int n = 4, st = 1, d;
		setlocale(LC_ALL, "Rus");
		while (!feof(list))
		{
			//fseek(list, n, SEEK_CUR);

			fscanf(list, "%d", &(*goods)[*size].numbs);
			fscanf(list, "%d", &(*goods)[*size].index);
			fscanf(list, "%s", &(*goods)[*size].name);
			fscanf(list, "%lf", &(*goods)[*size].shir);
			fscanf(list, "%lf", &(*goods)[*size].dol);
			fscanf(list, "%d", &(*goods)[*size].count);
			//fscanf(list, "%lf", &(*goods)[*size].S);
			int ll = ftell(list);
			(*size)++;
			if (*size >= *capacity)
			{
				*capacity *= 2;

				*goods = (good*)realloc(*goods, *capacity * sizeof(good));
			}
		}
		fclose(list);

		*size = delop(*goods, *size);
	}
}
void Pas()
{
	setlocale(LC_ALL, "Rus");
	for (int sec = 0; sec != 3; sec++) {
		Sleep(1050); system("cls");
		printf("Поздравляю. Вы нашли пасхалку.\n                     _____                                   *    \n    *             __|_____|__            *                           \n                   / *   * \\                        *               \n          *       |   <     |                 /\\                                 \n     *            |  \\___/  |  \\/_           /  \\             *                       \n             _\\/   \\_______/   /            /____\\                               \n               \\  /        \\  /      *       /  \\                        \n      *         \\/    *     \\/              /    \\     *                 \n                 |    *      |             /______\\                              \n                 |           |         *    /     \\                             \n                  \\_________/              /       \\                  *          \n                 /           \\            /_________\\                           \n================|     *       |===============| |====================================\n                |             |                                                      \n                 \\____________/                                                     \n"); Sleep(1050); system("cls");
		printf("Поздравляю. Вы нашли пасхалку.\n       *             _____                       *                \n                  __|_____|__                                       \n                   / *   * \\                                   *     \n    *             |   <     |               * /\\         *                        \n                  |  \\___/  |  \\/_           /  \\                                    \n          *  _\\/   \\_______/   /            /____\\                               \n     *         \\  /        \\  /              /  \\            *            \n                \\/    *     \\/              /    \\     *                 \n                 |    *      |           * /______\\                              \n      *          |           |              /     \\                             \n                  \\_________/              /       \\                            \n                 /           \\       *    /_________\\                      *     \n================|     *       |===============| |====================================\n                |             |                                                      \n                 \\____________/                                                     \n");
	}
	printf("Снеговик поздравляет вас с наступающим и очень просит поставить автомат его создателям\n");
	system("pause");
}