#include "Header.h"

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "\tЗадание 23 ЕГЭ" << endl;
	string name[5] = { "Фибо","Калькулятор","ТP4","Вычислитель","Аллегро" };
	string example[4] = { "Траектория вычислений — это последовательность результатов выполнения всех команд программы. Например, для программы 212 при исходном числе 7 и возможных команд 1)+1, 2)*3 траектория будет состоять из чисел 14, 15, 30.","Траектория вычислений – это последовательность результатов выполнения всех команд программы. Например, для программы 312 при исходном числе 4 и возможных командах 1)+5, 2)+1, 3)*2 траектория будет состоять из чисел 8, 13 , 14.","Траектория вычислений — это последовательность результатов выполнения всех команд программы. Например, для программы 312 при исходном числе 3 и возможных командах 1)+1, 2)*2, 3)*3 траектория будет состоять из чисел 9, 10, 20.","Траектория вычислений программы  — это последовательность результатов выполнения всех команд программы. Например, для программы 121 при исходном числе 7 и возможных командах 1)+1, 2)*2 траектория будет состоять из чисел 8, 16, 17." };
	string command[2] = { "Прибавить ","Умножить на " };
	string countstr[2] = { "две команды","три команды" };
	srand(time(0));
	int include = rand() % 4;
	int includnt = rand() % 4;
	int start = rand() % 10;
	int end = rand() % 20 + 60;
	int examplenrand = rand() % 4;
	int countin1, countin2, countin3, countout1, countout2, countout3, command1, command2, command3, flag1, flag2, flag3;
	do
	{
		countin1 = rand() % (end - start + 1) + start;
		countin2 = rand() % (end - start + 1) + start;
		countin3 = rand() % (end - start + 1) + start;
	} while (countin1 == countin2 || countin1 == countin3 || countin3 == countin2 || countin1 == start || countin2 == start || countin3 == start || countin1 == end || countin2 == end || countin3 == end);
	do
	{
		countout1 = rand() % (end - start + 1) + start;
		countout2 = rand() % (end - start + 1) + start;
		countout3 = rand() % (end - start + 1) + start;
	} while (countout1 == countout2 || countout1 == countout3 || countout3 == countout2 || countout1 == countin1 || countout1 == countin2 || countout1 == countin3 || countout2 == countin1 || countout2 == countin2 || countout2 == countin3 || countout3 == countin1 || countout3 == countin2 || countout3 == countin3 || countout1 == start || countout2 == start || countout3 == start || countout1 == end || countout2 == end || countout3 == end);
	int count = rand() % 2;
	do
	{
		command1 = rand() % 5 + 2;
		command2 = rand() % 5 + 2;
		command3 = rand() % 5 + 2;
	} while (command1 == command2 || command1 == command3 || command3 == command2);
	flag1 = rand() % 2;
	flag2 = rand() % 2;
	flag3 = rand() % 2;
	int flag[3];
	flag[0] = flag1;
	flag[1] = flag2;
	flag[2] = flag3;
	int tmp;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (flag[j] > flag[j + 1])
			{
				tmp = flag[j];
				flag[j] = flag[j + 1];
				flag[j + 1] = tmp;
			}
		}
	}
	flag1 = flag[0];
	flag2 = flag[1];
	flag3 = flag[2];
	int commandd[3];
	commandd[0] = command1;
	commandd[1] = command2;
	commandd[2] = command3;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (commandd[j] > commandd[j + 1])
			{
				tmp = commandd[j];
				commandd[j] = commandd[j + 1];
				commandd[j + 1] = tmp;
			}
		}
	}
	command1 = commandd[2];
	command2 = commandd[1];
	command3 = commandd[0];
	cout << "\tИсполнитель " << name[rand() % 5] << " преобразует число на экране." << endl;
	cout << "\tУ исполнителя есть " << countstr[count] << ", которым присвоены номера:" << endl;
	if (count == 0)
	{
		if (flag1 == 0) cout << "\t1." << command[flag1] << command1 << endl;
		else cout << "\t1." << command[flag1] << command1 << endl;
		if (flag2 == 0) cout << "\t2." << command[flag2] << command2 << endl;
		else cout << "\t2." << command[flag2] << command2 << endl;
	}
	else
	{
		if (flag1 == 0) cout << "\t1." << command[flag1] << command1 << endl;
		else cout << "\t1." << command[flag1] << command1 << endl;
		if (flag2 == 0) cout << "\t2." << command[flag2] << command2 << endl;
		else cout << "\t2." << command[flag2] << command2 << endl;
		if (flag3 == 0) cout << "\t3." << command[flag3] << command3 << endl;
		else cout << "\t3." << command[flag3] << command3 << endl;
	}
	int countin[3];
	countin[0] = countin1;
	countin[1] = countin2;
	countin[2] = countin3;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (countin[j + 1] < countin[j])
			{
				tmp = countin[j + 1];
				countin[j + 1] = countin[j];
				countin[j] = tmp;
			}
		}
	}
	countin1 = countin[0];
	countin2 = countin[1];
	countin3 = countin[2];
	cout << "\tПрограмма для исполнителя - это последовательность команд." << endl;
	cout << "\tСколько существует программ, для которых при исходном числе " << start << " результатом является число " << end << "." << endl;
	if (include != 0 || includnt != 0)
	{
		cout << "\tПри этом траектория движений ";
	}
	if (include > 0)
	{
		cout << "содержит число ";
		cout << countin1;
		if (include > 1)
		{
			cout << ", число " << countin2;
		}
		if (include > 2)
		{
			cout << ", число " << countin3;
		}

	}
	if (includnt > 0)
	{
		cout << ", не содержит число ";
		cout << countout1;
		if (includnt > 1)
		{
			cout << ", число " << countout2;
		}
		if (includnt > 2)
		{
			cout << ", число " << countout3 << ".";
		}

	}
	cout << endl << "\t" << example[examplenrand] << endl << endl;
	if (count == 0)
	{
		if (flag1 == 0 && flag2 == 0)
		{
			if (include == 0)
			{
				cout << "\tОтвет: " << plusplus(start, end, countout1, countout2, countout2, command1, command2, includnt);
			}
			if (include == 1)
			{
				cout << "\tОтвет: " << plusplus(start, countin1, countout1, countout2, countout2, command1, command2, includnt) * plusplus(countin1, end, countout1, countout2, countout2, command1, command2, includnt);
			}
			if (include == 2)
			{
				cout << "\tОтвет: " << plusplus(start, countin1, countout1, countout2, countout2, command1, command2, includnt) * plusplus(countin1, countin2, countout1, countout2, countout2, command1, command2, includnt) * plusplus(countin2, end, countout1, countout2, countout2, command1, command2, includnt);
			}
			if (include == 3)
			{
				cout << "\tОтвет: " << plusplus(start, countin1, countout1, countout2, countout2, command1, command2, includnt) * plusplus(countin1, countin2, countout1, countout2, countout2, command1, command2, includnt) * plusplus(countin2, countin3, countout1, countout2, countout2, command1, command2, includnt) * plusplus(countin3, end, countout1, countout2, countout2, command1, command2, includnt);
			}
		}
		if (flag1 == 0 && flag2 == 1)
		{
			if (include == 0)
			{
				cout << "\tОтвет: " << plusmult(start, end, countout1, countout2, countout2, command1, command2, includnt);
			}
			if (include == 1)
			{
				cout << "\tОтвет: " << plusmult(start, countin1, countout1, countout2, countout2, command1, command2, includnt) * plusmult(countin1, end, countout1, countout2, countout2, command1, command2, includnt);
			}
			if (include == 2)
			{
				cout << "\tОтвет: " << plusmult(start, countin1, countout1, countout2, countout2, command1, command2, includnt) * plusmult(countin1, countin2, countout1, countout2, countout2, command1, command2, includnt) * plusmult(countin2, end, countout1, countout2, countout2, command1, command2, includnt);
			}
			if (include == 3)
			{
				cout << "\tОтвет: " << plusmult(start, countin1, countout1, countout2, countout2, command1, command2, includnt) * plusmult(countin1, countin2, countout1, countout2, countout2, command1, command2, includnt) * plusmult(countin2, countin3, countout1, countout2, countout2, command1, command2, includnt) * plusmult(countin3, end, countout1, countout2, countout2, command1, command2, includnt);
			}
		}
		if (flag1 == 1 && flag2 == 1)
		{
			if (include == 0)
			{
				cout << "\tОтвет: " << multmult(start, end, countout1, countout2, countout2, command1, command2, includnt);
			}
			if (include == 1)
			{
				cout << "\tОтвет: " << multmult(start, countin1, countout1, countout2, countout2, command1, command2, includnt) * multmult(countin1, end, countout1, countout2, countout2, command1, command2, includnt);
			}
			if (include == 2)
			{
				cout << "\tОтвет: " << multmult(start, countin1, countout1, countout2, countout2, command1, command2, includnt) * multmult(countin1, countin2, countout1, countout2, countout2, command1, command2, includnt) * multmult(countin2, end, countout1, countout2, countout2, command1, command2, includnt);
			}
			if (include == 3)
			{
				cout << "\tОтвет: " << multmult(start, countin1, countout1, countout2, countout2, command1, command2, includnt) * multmult(countin1, countin2, countout1, countout2, countout2, command1, command2, includnt) * multmult(countin2, countin3, countout1, countout2, countout2, command1, command2, includnt) * multmult(countin3, end, countout1, countout2, countout2, command1, command2, includnt);
			}
		}
	}
	else
	{
		if (flag1 == 0 && flag2 == 0 && flag3 == 0)
		{
			if (include == 0)
			{
				cout << "\tОтвет: " << plusplusplus(start, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 1)
			{
				cout << "\tОтвет: " << plusplusplus(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * plusplusplus(countin1, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 2)
			{
				cout << "\tОтвет: " << plusplusplus(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * plusplusplus(countin1, countin2, countout1, countout2, countout2, command1, command2, command3, includnt) * plusplusplus(countin2, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 3)
			{
				cout << "\tОтвет: " << plusplusplus(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * plusplusplus(countin1, countin2, countout1, countout2, countout2, command1, command2, command3, includnt) * plusplusplus(countin2, countin3, countout1, countout2, countout2, command1, command3, command2, includnt) * plusplusplus(countin3, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
		}
		if (flag1 == 0 && flag2 == 0 && flag3 == 1)
		{
			if (include == 0)
			{
				cout << "\tОтвет: " << plusplusmult(start, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 1)
			{
				cout << "\tОтвет: " << plusplusmult(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * plusplusmult(countin1, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 2)
			{
				cout << "\tОтвет: " << plusplusmult(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * plusplusmult(countin1, countin2, countout1, countout2, countout2, command1, command2, command3, includnt) * plusplusmult(countin2, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 3)
			{
				cout << "\tОтвет: " << plusplusmult(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * plusplusmult(countin1, countin2, countout1, countout2, countout2, command1, command2, command3, includnt) * plusplusmult(countin2, countin3, countout1, countout2, countout2, command1, command3, command2, includnt) * plusplusmult(countin3, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
		}
		if (flag1 == 0 && flag2 == 1 && flag3 == 1)
		{
			if (include == 0)
			{
				cout << "\tОтвет: " << plusmultmult(start, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 1)
			{
				cout << "\tОтвет: " << plusmultmult(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * plusmultmult(countin1, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 2)
			{
				cout << "\tОтвет: " << plusmultmult(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * plusmultmult(countin1, countin2, countout1, countout2, countout2, command1, command2, command3, includnt) * plusmultmult(countin2, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 3)
			{
				cout << "\tОтвет: " << plusmultmult(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * plusmultmult(countin1, countin2, countout1, countout2, countout2, command1, command2, command3, includnt) * plusmultmult(countin2, countin3, countout1, countout2, countout2, command1, command3, command2, includnt) * plusmultmult(countin3, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
		}
		if (flag1 == 1 && flag2 == 1 && flag3 == 1)
		{
			if (include == 0)
			{
				cout << "\tОтвет: " << multmultmult(start, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 1)
			{
				cout << "\tОтвет: " << multmultmult(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * multmultmult(countin1, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 2)
			{
				cout << "\tОтвет: " << multmultmult(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * multmultmult(countin1, countin2, countout1, countout2, countout2, command1, command2, command3, includnt) * multmultmult(countin2, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
			if (include == 3)
			{
				cout << "\tОтвет: " << multmultmult(start, countin1, countout1, countout2, countout2, command1, command2, command3, includnt) * multmultmult(countin1, countin2, countout1, countout2, countout2, command1, command2, command3, includnt) * multmultmult(countin2, countin3, countout1, countout2, countout2, command1, command3, command2, includnt) * multmultmult(countin3, end, countout1, countout2, countout2, command1, command2, command3, includnt);
			}
		}
	}
	cout << endl << endl << endl;
}