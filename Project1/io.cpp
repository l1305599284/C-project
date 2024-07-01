#include <iostream>;

// while循环
int startWhile(int num) {
	while (num < 100) {
		std::cout << num << std::endl;
		num++;
	}
	return 0;
}

// for循环
int startFor(int num) {
	int endNum = 100;
	for (num; num < endNum; num++) {
		std::cout << num << std::endl;
	}
	return 0;
}

int main2() {
	std::cout << "输入两个数字" << std::endl;
	int num1, num2 = 0;
	std::cin >> num1 >> num2;
	std::cout << "两个数字的和为：" << num1 + num2 << std::endl;
	startFor(num2);
	std::cout << "------------" << num1 + num2 << std::endl;
	startWhile(num2);
	return 0;
}


// 连续输入
int main() {
	std::cout << "输入数字" << std::endl;
	int sum = 0;
	int value = 0;
	while (std::cin >> value) {
		sum += value;
		std::cout << "所有数字的和为：" << sum << std::endl;
	}
	return 0;
}