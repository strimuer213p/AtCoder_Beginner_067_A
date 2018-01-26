/*
問題文
すぬけくんは 3 匹のヤギにクッキーを渡したいです。
すぬけくんは A 枚のクッキーが入った缶と、B 枚のクッキーが入った缶を持っています。 すぬけくんは A,B,A+B のいずれかの枚数のクッキーをヤギたちに渡すことができます。
3 匹のヤギが同じ枚数ずつ食べられるようにクッキーを渡すことが可能かどうか判定してください。
*/

#include<iostream>

int main() {
	bool flag;
	int a, b;
	std::cin >> a >> b;

	flag = a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0;

	std::cout << (flag ? "Possible" : "Impossible" )<< std::endl;

	return 0;
}