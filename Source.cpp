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
		cout << "�����: " << avto[i].brand << endl;
		cout << "�������� �����: " << avto[i].sernumber << endl;
		cout << "��������������� �����: " << avto[i].regnumber << endl;
		cout << "���� �������: " << avto[i].dat << endl;
		cout << endl;
	}
};

int main()
{
	setlocale(0, "");
	int n=3;
	while (n < 4)
	{
		cout << "������� ���-�� �����������(������� 4): ";
		cin >> n;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "��������� ������ �� ����������:" << endl;
		cout << "������� �����:";
		cin>> avto[i].brand;
		cout << "������� �������� �����:";
		cin >> avto[i].sernumber;
		cout << "������� ��������������� �����:";
		cin >> avto[i].regnumber;
		cout << "������� ���� �������:";
		cin >> avto[i].dat;
		cout << endl;
	}
	cout << "����������� ������:" << endl;
	print(3,n);
	string kod;
	cout << "������� ���� ��� ������ � ������� ��������:";
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
			cout << "��������� ������ �� ����������:" << endl;
			cout << "������� �����: ";
			cin >> avto[i+1].brand;
			cout << "������� �������� �����: ";
			cin >> avto[i + 1].sernumber;
			cout << "������� ��������������� �����: ";
			cin >> avto[i + 1].regnumber;
			cout << "������� ���� �������: ";
			cin >> avto[i + 1].dat;
			cout << endl;
			i++;
		};
		i++;
	}
	cout << "����������� ������:" << endl;
	print(3, n);
	system("pause");
}
