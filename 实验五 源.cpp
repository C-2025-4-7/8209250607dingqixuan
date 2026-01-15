/*1.
#include<iostream>
using namespace std;
class Time             // 定义Time类
{
	private:             // 数据成员为私有的
		int hour;
		int minute;
		int sec;
	public:              // 数据成员为公用的
		Time()
		{
			hour = 0;
			minute = 0;
			sec = 0;
		}
		void setTime() // 成员函数设定时间
		{
			cout << "请输入时间:" << endl;
			cin >> hour >> minute >> sec;
			if (hour < 0 || hour>23) {
				hour = 0;
			}
			if (minute < 0 || minute>59) {
				minute = 0;
			}if (sec < 0 || sec>59) {
				sec = 0;
			}
		}
		void showTime()      // 成员函数显示时间
		{
			cout << hour << ":" << minute << ":" << sec << endl;
		}
};
int main()
{
	Time tl;
	tl.setTime();
	tl.showTime();
	return 0;
}*/
/*3.
#include<iostream>
using namespace std;
class A {
private:
	double length;
	double width;
	double height;
public:
	void setA()
	{
		cin >> length >> width >> height;
	}
	double V()
	{
		return length * width * height;
	}
	void display()
	{
		cout << "l=" << length << ";";
		cout << "w=" << width<< ";";
		cout << "h=" << height << ";";
		cout << "V=" << V() << endl;
	}
};
int main(){
	A a,b,c;
	cout << "请输入三个长方体的长、宽、高："<<endl;
	a.setA();
	b.setA();
	c.setA();
	cout << "结果为："<<endl;
	a.display();
	b.display();
	c.display();
	return 0;
}*/
/*4.
#include<iostream>
using namespace std;
class Student {
private:
	int id;
	double score;
public:
	void setA(int i, double s)
	{
		id = i;
		score = s;
	}
	int getid()
	{
		return id;
	}
	double getscore()
	{
		return score;
	}
	void display()
	{
		cout << "学号" << id << "成绩" << score << endl;
	}
};
Student* max(Student* students[],int size)
{
	Student* maxstudent = students[0];
	for (int i = 1; i < size; i++)
	{
		if (students[i]->getscore() > maxstudent->getscore())
		{
			maxstudent = students[i];
		}
	}
	cout << "最高成绩者的学号为：" << maxstudent->getid() << endl;
	return 0;
}
int  main()
{
	const int size = 5;
	Student students[size];
	students[0].setA(1, 89);
	students[1].setA(2, 88);
	students[2].setA(3, 90);
	students[3].setA(4, 99);
	students[4].setA(5, 95);
	Student* student[size];
	student[0] = &students[0];
	student[1] = &students[1];
	student[2] = &students[2];
	student[3] = &students[3];
	student[4] = &students[4];
	Student* maxstudent = max(student, size);
	return 0;
}*/
/*5.*/
#include <iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	Point(int i, int j)
	{
		x = i;
		y = j;
	}
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "修改后的坐标值为:(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	cout << "测试默认构造函数" << endl;
	Point p0;
	p0.display();
	cout << "测试带参构造函数" << endl;
	Point p1(10,20);
	p1.display();
	cout << "测试setPoint函数" << endl;
	Point p2;
	p2.setPoint(10, 20);
	p2.display();
}
