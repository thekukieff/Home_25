#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	//������� 1
	cout << "������� 1 " << endl;

	int nomber_100, nomber_10, nomber_1, sum = 0;//nomber_100 - �����, 10-�������, 1-�������
	for (int i = 100; i < 1000; i++)
	{
		nomber_100 = i / 100;
		nomber_10 = (i / 10) % 10;
		nomber_1 = i % 10;
		if (nomber_1 == nomber_10 || nomber_1 == nomber_100 || nomber_10 == nomber_100) {
			sum++;
		}


	}
	cout << "���������� �����, � ������� ���� 2 ���������� �����, �����: " << sum << endl;
	
	
	
	cout << "������� 2 " << endl;

	//������� 2
	int nomber_100_, nomber_10_, nomber_1_, sum_ = 0;//nomber_100 - �����, 10-�������, 1-�������
	for (int i = 100; i < 1000; i++)
	{
		nomber_100_ = i / 100;
		nomber_10_ = (i / 10) % 10;
		nomber_1_ = i % 10;
		if (nomber_1_ == nomber_10_ || nomber_1_ == nomber_100_ || nomber_10_ == nomber_100_) {
			sum_++;
		}


	}
	cout << "���������� �����, � ������� ���� 2 ���������� �����, �����: " << 999 - sum_ << endl;




	cout << "������� 3 " << endl;



	//������� 3
	int number, new_num = 0, ostatok = 1,  i=1;
	cout << "\n������� �����: ";
	cin >> number;




	while (true) {
		ostatok = number % 10;



		if (ostatok != 3 && ostatok != 6) {
			new_num += i * ostatok;
			i *= 10;
		}

		if (number / 10 == 0) {
			break;
		}
		number = number / 10;


	}
	cout << "�����: "<<new_num<<endl;


	cout << "������� 4 " << endl;

	//������� 4
	int number_a, quant=0;
	cout << "������� �����: ";
	cin >> number_a;
	for (int i = 1; i < number_a; i++)
	{
		if (number_a%(i*i)==0 && number_a % (i * i * i) != 0)
		{
			cout << "�����: "<<i << endl;
			quant ++;//����� �� �����, ���� �� ���� ���� ����� ���������� �� �������(������ 84)
		}

	}
	if (quant < 1) {
		cout << "��� ���������, ���������� �� �������" << endl;
	}

	//������� 5
	cout << "������� 5 " << endl;

	int number_b, ost, num=0;
	cout << "������� �����: ";
	cin >> number_b;

	while (true)
	{


		ost = number_b % 10;
		num += ost;
		if (number_b / 10 == 0)
		{
			break;
		}


		number_b /= 10;



	}


	if (num * num * num == number_b * number_b) {
		cout << "��� ����� ���� ����� ����� ����� ����� � ��������" << endl;
	}
	else {
		cout << "��� ����� ���� ����� ����� �� ����� ����� � ��������" << endl;

	}

	cout << "������� 6 " << endl;


	//������� 6
	int number_c;
	cout << "������� �����: ";
	cin >> number_c;

	for (int i = 1; i <= number_c; i++)
	{
		if (number_c % i == 0) {
			cout << "�����: " << i<<endl;
		}
	}


	//������� 7
	cout << "������� 7 " << endl;
	int first_number, second_number, min, quan=0;
	cout << "������� ������ �����: ";
	cin >> first_number;
	cout << "������� ������ �����: ";
	cin >> second_number;
	if (first_number<second_number)
	{
		min = first_number;
	}
	else {
		min = second_number;
	}
	for (int i = 1; i <= min; i++)
	{
		if (second_number % i == 0 && first_number % i == 0) {
			cout << "�����: " << i << endl;
			quan++;
		}
	}
	if (quan == 0) {
		cout << "��� ����� ���������" << endl;
	}


	return 0;
}