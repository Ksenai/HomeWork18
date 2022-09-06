#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

//������ 1
double task1(int a, int b, int c) {
	double sum = a + b + c;
	return sum / 3;
}

//������ 2
int task2(int A, int B, int C) {
	cout << "��� ������ - INT.\n";
	return A > (B > C ? B : C) ? A : (B > C ? B : C);
}
short task2(short A, short B, short C) {
	cout << "��� ������ - SHORT.\n";
	return A > (B > C ? B : C) ? A : (B > C ? B : C);
}
double task2(double A, double B, double C) {
	cout << "��� ������ - DOUBLE.\n";
	return A > (B > C ? B : C) ? A : (B > C ? B : C);
}

//������ 3
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
	cout << "����������� ����� - " << min << endl;
}



int main() {
	setlocale(LC_ALL, "ru");
	int x, x1, x2;
	int n, n1, n2;
	short m, m1, m2;
	double k, k1, k2;

	//������ 1
	cout << "������ 1.\n������� ��� �����: ";
	cin >> x >> x1 >> x2;
	cout << "������� �������������� ���� ����� = " << task1(x, x1, x2) << endl;

	//������ 2
	cout << "\n\n������ 2.\n������� ��� ����� �����: ";
	cin >> n >> n1 >> n2;
	cout << "������������ ����� - " << task2(n, n1, n2) << ".\n";
	cout << "������� ��� \"��������\" �����: ";
	cin >>  m >> m1 >> m2;
	cout << "������������ ����� - " << task2(m, m1, m2) << ".\n";
	cout << "������� ��� ������������ �����: ";
	cin >> k >> k1 >> k2;
	cout << "������������ ����� - " << task2(k, k1, k2) << ".\n";

	//������ 3
	cout << "\n������ 3.\n������:\n";
	const int size = 6;
	int arr[size];
	fill_arr(arr, size, -100, 100);


	return 0;
}