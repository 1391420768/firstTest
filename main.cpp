#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int day;
	cout << "input day" << endl;
	cin >> day;
	switch (day)//switch表达式，需要用括号包起来,没有分号
	{
	case 1:cout << "monday" << endl; break;
	case 2:cout << "tuesday" << endl; break;
	case 3:cout << "wensday" << endl; break;
	case 4:cout << "thursday" << endl; break;
	case 5:cout << "friday" << endl; break;
	case 6:cout << "saturday" << endl; break;
	case 7:cout << "sunday" << endl; break;//break结束switch语句，否则将逐条执行
	default:cout << "illeagl" << endl; break;
	}
	system("pause");
	return 0;
}