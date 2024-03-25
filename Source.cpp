#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	//задание 1
	cout << "Задание 1 " << endl;

	int nomber_100, nomber_10, nomber_1, sum = 0;//nomber_100 - сотни, 10-десятки, 1-единицы
	for (int i = 100; i < 1000; i++)
	{
		nomber_100 = i / 100;
		nomber_10 = (i / 10) % 10;
		nomber_1 = i % 10;
		if (nomber_1 == nomber_10 || nomber_1 == nomber_100 || nomber_10 == nomber_100) {
			sum++;
		}


	}
	cout << "Количество чисел, у которых есть 2 одинаковые цифры, равно: " << sum << endl;
	
	
	
	cout << "Задание 2 " << endl;

	//задание 2
	int nomber_100_, nomber_10_, nomber_1_, sum_ = 0;//nomber_100 - сотни, 10-десятки, 1-единицы
	for (int i = 100; i < 1000; i++)
	{
		nomber_100_ = i / 100;
		nomber_10_ = (i / 10) % 10;
		nomber_1_ = i % 10;
		if (nomber_1_ == nomber_10_ || nomber_1_ == nomber_100_ || nomber_10_ == nomber_100_) {
			sum_++;
		}


	}
	cout << "Количество чисел, у которых есть 2 одинаковые цифры, равно: " << 999 - sum_ << endl;




	cout << "Задание 3 " << endl;



	//задание 3
	int number, new_num = 0, ostatok = 1,  i=1;
	cout << "\nВведите число: ";
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
	cout << "Ответ: "<<new_num<<endl;


	cout << "Задание 4 " << endl;

	//заднаие 4
	int number_a, quant=0;
	cout << "Введите число: ";
	cin >> number_a;
	for (int i = 1; i < number_a; i++)
	{
		if (number_a%(i*i)==0 && number_a % (i * i * i) != 0)
		{
			cout << "Число: "<<i << endl;
			quant ++;//чтобы мы знали, есть ли хоть одно число подходящих по условию(строка 84)
		}

	}
	if (quant < 1) {
		cout << "Нет делителей, подходящих по условию" << endl;
	}

	//задание 5
	cout << "Задание 5 " << endl;

	int number_b, ost, num=0;
	cout << "Введите число: ";
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
		cout << "Куб суммы цифр этого числа равен числу в квадрате" << endl;
	}
	else {
		cout << "Куб суммы цифр этого числа не равен числу в квадрате" << endl;

	}

	cout << "Задание 6 " << endl;


	//задание 6
	int number_c;
	cout << "Введите число: ";
	cin >> number_c;

	for (int i = 1; i <= number_c; i++)
	{
		if (number_c % i == 0) {
			cout << "Число: " << i<<endl;
		}
	}


	//задание 7
	cout << "Задание 7 " << endl;
	int first_number, second_number, min, quan=0;
	cout << "Введите первое число: ";
	cin >> first_number;
	cout << "Введите второе число: ";
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
			cout << "Число: " << i << endl;
			quan++;
		}
	}
	if (quan == 0) {
		cout << "Нет общих делителей" << endl;
	}


	return 0;
}