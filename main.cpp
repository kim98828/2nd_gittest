#include <iostream>

using namespace std;

int main()
{
	int height = 0;
	int base = 0;
	float area = 0.0f;

	//삼각형 구하기

	cout << "삼각형의 높이를 입력해 주세요" << endl;
	cin >> height;
	cout << "삼각형의 밑변을 입력해 주세요" << endl;
	cin >> base;
	area = (static_cast<float>(height) * static_cast<float>(base)) / 2;

	cout << "삼각형의 넓이는 " << area << "입니다" << endl;
	return 0;
}