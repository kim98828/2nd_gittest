#include <iostream>

using namespace std;

int main()
{
	int height = 0;
	int base = 0;
	float area = 0.0f;

	//�ﰢ�� ���ϱ�

	cout << "�ﰢ���� ���̸� �Է��� �ּ���" << endl;
	cin >> height;
	cout << "�ﰢ���� �غ��� �Է��� �ּ���" << endl;
	cin >> base;
	area = (static_cast<float>(height) * static_cast<float>(base)) / 2;

	cout << "�ﰢ���� ���̴� " << area << "�Դϴ�" << endl;
	return 0;
}