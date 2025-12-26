
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
void main(main) 
{
	setlocale(LC_ALL, "rus");
	int num;      
	int arr[10];
	int positive = 0; 
	int negative = 0;  
	int i = 1;         

	printf("Введите 10 целых чисел:\n");

	while (i <= 10) {
		scanf_s("%i", &num);

		if (num > 0)
			positive++;
		else if (num < 0)
			negative++;

		i++;
	}
	printf("Ваши числа");

	if (positive > negative)
		printf("Положительных чисел больше \n");
	else 
		if (negative > positive)
			printf("Отрицательных чисел больше \n");
		else
		printf("Положительных и отрицательных чисел поровну \n");

	_getch();

}
//	НУЖНО ДОДЕЛАТЬ ВАРИАНТ С МАССИВОМ

/*
#include <stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

 void main(void)

{
	 setlocale(LC_ALL, "rus");
	int i;
	double sum = 0.0;  

	for (i = 2; i <= 19; i++) 
	{
		sum += (double)i / (i + 1);  
	}

	printf("Сумма = %.3f\n", sum);

	_getch();
}
*/
/*
#include <stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>


void main(main)
{
	setlocale(LC_ALL, "rus");
	double num;
	int s=0;
	int i=1;
	printf("Введите 8 чисел\n");
	while (i <= 8)
	{
		scanf_s(" %lf", &num);
		if (num > 100)
			s++;
		i ++ ;
	}
	printf("Количество чисел больше 100 равно : %i", s);
	_getch();
}
*/
/*
#include <stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

void main(void)

{
	setlocale(LC_ALL, "rus");
	int i;
	double temp = 0;
	double sum = 0;
	for (i = 10; i >= 1; i--)
	{
		temp = (double)i / 3;
		sum += temp;
	}
	printf("Суммма равна  %lf", sum);
	_getch;
}
*/