#include <iostream>;

// whileѭ��
int startWhile(int num) {
	while (num < 100) {
		std::cout << num << std::endl;
		num++;
	}
	return 0;
}

// forѭ��
int startFor(int num) {
	int endNum = 100;
	for (num; num < endNum; num++) {
		std::cout << num << std::endl;
	}
	return 0;
}

int main2() {
	std::cout << "������������" << std::endl;
	int num1, num2 = 0;
	std::cin >> num1 >> num2;
	std::cout << "�������ֵĺ�Ϊ��" << num1 + num2 << std::endl;
	startFor(num2);
	std::cout << "------------" << num1 + num2 << std::endl;
	startWhile(num2);
	return 0;
}


// ��������
int main() {
	std::cout << "��������" << std::endl;
	int sum = 0;
	int value = 0;
	while (std::cin >> value) {
		sum += value;
		std::cout << "�������ֵĺ�Ϊ��" << sum << std::endl;
	}
	return 0;
}