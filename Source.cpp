#include <iostream>
#include <string>
using namespace std;

struct avto
{
	string brand;
	string sernumber;
	string regnumber;
	string dat;
} avto[100];

void print(int i,int n)
{
	for (i; i < n; i++)
	{
		cout << "Марка: " << avto[i].brand << endl;
		cout << "Серийный номер: " << avto[i].sernumber << endl;
		cout << "Регистрационный номер: " << avto[i].regnumber << endl;
		cout << "Дата выпуска: " << avto[i].dat << endl;
		cout << endl;
	}
};

int main()
{
	setlocale(0, "");
	int n=3;
	while (n < 4)
	{
		cout << "Введите кол-во автомобилей(минимум 4): ";
		cin >> n;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Заполните данные по автомобилю:" << endl;
		cout << "Введите марку:";
		cin>> avto[i].brand;
		cout << "Введите серийный номер:";
		cin >> avto[i].sernumber;
		cout << "Введите регистрационный номер:";
		cin >> avto[i].regnumber;
		cout << "Введите дату выпуска:";
		cin >> avto[i].dat;
		cout << endl;
	}
	cout << "Обновленный список:" << endl;
	print(3,n);
	string kod;
	cout << "Введите дату для поиска и вставки элемента:";
	cin>>kod;
	int m = n;
	int i = 3;
	while (i < m)
	{
		if (avto[i].dat == kod)
		{
			n++;
			int j = n;
			for (j; j > i + 1; j--)
			{
				avto[j].brand = avto[j - 1].brand;
				avto[j].sernumber = avto[j - 1].sernumber;
				avto[j].regnumber = avto[j - 1].regnumber;
				avto[j].dat = avto[j - 1].dat;
			};
			cout << "Заполните данные по автомобилю:" << endl;
			cout << "Введите марку: ";
			cin >> avto[i+1].brand;
			cout << "Введите серийный номер: ";
			cin >> avto[i + 1].sernumber;
			cout << "Введите регистрационный номер: ";
			cin >> avto[i + 1].regnumber;
			cout << "Введите дату выпуска: ";
			cin >> avto[i + 1].dat;
			cout << endl;
			i++;
		};
		i++;
	}
	cout << "Обновленный список:" << endl;
	print(3, n);
	system("pause");
}
