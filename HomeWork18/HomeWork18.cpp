#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

//Задача 1
double task1(int a, int b, int c) {
	double sum = a + b + c;
	return sum / 3;
}

//Задача 2
int task2(int A, int B, int C) {
	cout << "Тип данных - INT.\n";
	return A > (B > C ? B : C) ? A : (B > C ? B : C);
}
short task2(short A, short B, short C) {
	cout << "Тип данных - SHORT.\n";
	return A > (B > C ? B : C) ? A : (B > C ? B : C);
}
double task2(double A, double B, double C) {
	cout << "Тип данных - DOUBLE.\n";
	return A > (B > C ? B : C) ? A : (B > C ? B : C);
}

//Задача 3
template <typename T>
void fill_arr(T arr[], const int lenght, int begin, int end) {
	srand(time(0));
	int min = 0;
	cout << "[";
	for (int i = 0; i < lenght; i++) {
		
		arr[i] = rand() % (end - begin) + begin;
		cout << arr[i] << ", ";
		if (i == 0)
			min = arr[i];
		if (arr[i] <= min)
			min = arr[i];
	}
	cout << "\b\b]\n";
	cout << "Минимальное число - " << min << endl;
}



int main() {
	setlocale(LC_ALL, "ru");
	int x, x1, x2;
	int n, n1, n2;
	short m, m1, m2;
	double k, k1, k2;

	//Задача 1
	cout << "Задача 1.\nВведите три числа: ";
	cin >> x >> x1 >> x2;
	cout << "Среднее арифметическое трех чисел = " << task1(x, x1, x2) << endl;

	//Задача 2
	cout << "\n\nЗадача 2.\nВведите три целых числа: ";
	cin >> n >> n1 >> n2;
	cout << "Максимальное число - " << task2(n, n1, n2) << ".\n";
	cout << "Введите три \"коротких\" числа: ";
	cin >>  m >> m1 >> m2;
	cout << "Максимальное число - " << task2(m, m1, m2) << ".\n";
	cout << "Введите три вещественных числа: ";
	cin >> k >> k1 >> k2;
	cout << "Максимальное число - " << task2(k, k1, k2) << ".\n";

	//Задача 3
	cout << "\nЗадача 3.\nМассив:\n";
	const int size = 6;
	int arr[size];
	fill_arr(arr, size, -100, 100);


	return 0;
}