/*
��蕶
���ʂ������ 3 �C�̃��M�ɃN�b�L�[��n�������ł��B
���ʂ������ A ���̃N�b�L�[���������ʂƁAB ���̃N�b�L�[���������ʂ������Ă��܂��B ���ʂ������ A,B,A+B �̂����ꂩ�̖����̃N�b�L�[�����M�����ɓn�����Ƃ��ł��܂��B
3 �C�̃��M�������������H�ׂ���悤�ɃN�b�L�[��n�����Ƃ��\���ǂ������肵�Ă��������B
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