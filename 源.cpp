/*实验三 1.
#include<iostream>
using namespace std;
int min(int x, int y)
{
	int z;
	z = (x > y) ? x : y;
	return z;
}
int m(int a, int b)
{
	int i = min(a, b);
	int k;
	while (i >= 1)
	{
		if (a % i == 0 && b % i == 0)
		{
			k = i;
			break;
		}
		else
		{
			i--;
		}
	}
	return k;
}
int n(int a, int b)
{
	int i;
	i = m(a, b);
	int j;
	j = a * b / i;
	return j;
}
int main()
{
	int a, b;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	int i = m(a, b);
	int j = n(a, b);
	cout << "最大公约数为" << i << endl;
	cout << "最小公倍数为" << j << endl;
	return 0;
}
*/
/*实验三 2.
#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num < 2)
	{
		return false;
	}
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
int main()
{
	int count = 0;
	int num = 2;
	cout<<"前两百个素数为"<<endl;
	while (count < 200)
	{
		if (is_prime(num))
		{
			cout << num << " ";
			count++;
			if (count % 10 == 0)
			{
				cout << endl;
			}
		}
		num++;
	}
	return 0;
}

/*实验三 5.
#include<iostream>
using namespace std;
int main()
{
	int day = 10;
	int peach = 1;
	while (day > 1)
	{
		peach = (peach + 1) * 2;
		day--;
	}
	cout<<"第一天摘了"<<peach<<"个桃子"<<endl;
}
*/
/*实验四 （一）1.
#include<iostream>
using namespace std;
using std::cout;
int main()
{
	int nums[10];
	int distinct[10];
	int distinctcount = 0;
	cout << "Enter ten numbers:" <<endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> nums[i];
	}
	for (int i = 0; i < 10; i++)
	{
		bool isnew = true;
		for (int j = 0; j < distinctcount; j++)
		{
			if (nums[i] == distinct[j])
			{
				isnew = false;
				break;
			}
		}
			if (isnew)
			{
				distinct[distinctcount++] = nums[i];
			}
	}
	cout << "The distinct numbers are:"<< endl;
	for (int i = 0; i < distinctcount; i++)
	{
		cout << distinct[i] << " ";
	}
	cout << endl;
	return 0;
}
*/
/*实验四 (一)2.
#include<iostream>
using namespace std;
void bubbleSort(double list[], int listSize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j],list[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main()
{
	const int SIZE = 10;
	double numbers[SIZE];
	cout << "Enter ten numbers:";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> numbers[i];
	}
	bubbleSort(numbers, SIZE);
	cout << "Sorted numbers:";
	for (int i = 0; i < SIZE; i++)
	{
		cout << numbers[i]<<" ";
	}
	cout << endl;
}*/
/*实验四（一）3.
#include<iostream>
using namespace std;
int main()
{
	bool lockers[100] = { false };
	for (int student = 1; student <= 100; student++)
	{
		for (int locker = student - 1; locker < 100; locker = locker + student)
		{
			lockers[locker] = !lockers[locker];
		}
	}
	cout << "Open lockers:";
	for (int i = 0; i < 100; i++)
	{
		if (lockers[i])
		{
			if (false) {
				cout << "";
			}
			else {
				cout << (i + 1)<<" ";
			}
		}
	}
	cout << endl;
	return 0;
}*/
/*实验四（一）4.
#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0,j = 0,k = 0;
	while (i < size1 && j < size2)
	{
		if (list1[i] <= list2[j])
		{
			list3[k++] = list1[i++];
		}
		else
		{
			list3[k++] = list2[j++];
		}
	}
	while (i < size1)
	{
		list3[k++] = list1[i++];
	}
	while (j < size2)
	{
		list3[k++] = list2[j++];
	}
}
int main()
{
	const int max_size = 80;
	int list1[max_size], list2[max_size],list3[2 * max_size];
	int size1, size2;
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i <size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i <size2; i++)
	{

		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is:";
	for (int i = 0; i <size1+size2; i++)
	{
		cout << list3[i] << " ";
	}
	cout << endl;
	return 0;
}
*/
/*实验四（一）5.
#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1=strlen(s1);
	int len2=strlen(s2);
	//cout<<s1<<" "<<len1 << endl;
	//cout<<s2<<" "<<len2 << endl;
	//for (int i = 0; i < len1; i++)
	//{
		//cout << s1[i]<<" ";
	//}
	//cout << endl;
	//for (int i = 0; i < len2; i++)
	//{
		//cout << s2[i]<<" ";
	//}
	//cout << endl;
if (len1 == 0 || len1 > len2)
{
	return -1;
}
int i, j;
for (i = 0; i < len2 - len1; i++)
{
	bool match = true;
	for (j = 0; j < len1; j++)
	{
		//cout<<i+j<<" "<<s2[i+j]<<" "<<s1[j]<<endl;
		if (s2[i + j] != s1[j])
		{
			match = false;
			break;
		}
	}
	if (match)
	{
		return i;
	}
}
return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string:";
	cin.getline(s1, 100);
	cout << "Enter the second string:";
	cin.getline(s2, 100);
	int index = indexOf(s1, s2);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") = " << index << endl;
	return index;
}
*/
/*实验四（一）6.
* #include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	int len=strlen(s);
	for (int i = 0; i < len; i++)
	{
		char ch = tolower(s[i]);
		if (ch >= 'a' && ch <= 'z')
		{
			counts[ch - 'a']++;
		}
	}
}
int main()
{
	char s[1000];
	int counts[26];
	cout << "Enter a string:";
	cin.getline(s, 1000);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] > 0)
		{
			cout << static_cast<char>('a' + i) << ": " << counts[i]<<"times" << endl;
		}
	}
	return 0;
}
*/
/*实验四（二）1.
(1)
#include<iostream>
using namespace std;
void main()
{
int i, j, * pi, * pj;     //此处的*表示定义指针变量，而非间接运算符
pi = &i;
pj = &j;
i = 5; j = 7;
cout << i << '\t' << j << '\t' << pi << '\t' << pj;
cout << &i << '\t' << *&i << '\t' << &j << '\t'<< *&j;
}
*/
/*实验四（二）1.
(2)
#include<stdio.h>
int main()   //C语言程序，要了解
{
	int a[] = { 1,2,3 };
	int* p, i;
	p = a;    //将数组a首地址送给p
	for (i = 0; i < 3; i++)
	printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //与cout功能差不多
}*/
/*实验四（二）2.
(1)
#include<iostream>
#include<cstring>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 == 0 || len1 > len2)
	{
		return -1;
	}
	int i, j;
	for (i = 0; i <= len2 - len1; i++)
	{
		bool match = true;
		for (j = 0; j < len1; j++)
		{
			if (*(s2 + i + j) != *(s1 + j))
			{
				match = false;
				break;
			}
		}
		if (match)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string:";
	cin.getline(s1, 100);
	cout << "Enter the second string:";
	cin.getline(s2, 100);
	int index = indexof(s1, s2);
	cout << "indexof(\"" << s1 << "\", \"" << s2 << "\") = " << index << endl;
	return index;
}*/
/*实验四（二）2.
(2)
#include<iostream>
#include<cctype>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	int result = 0;
	int len = 0;
	const char* p = hexString;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	for (int i = 0; i < len; i++)
	{
		char ch = toupper(hexString[i]);
		int value;
		if (ch >= '0' && ch <= '9')
		{
			value = ch - '0';
		}
		else if (ch >= 'A' && ch <= 'F')
		{
			value = ch - 'A' + 10;
		}
		else
		{
			return -1;
		}
		result = result * 16 + value;
	}
	return result;
}
int main()
{
	char hexString[20];
	cout << "输入一个十六进制数：";
	cin >> hexString;
	int decimalValue = parseHex(hexString);
	if (decimalValue != -1)
	{
		cout << "对应的十进制数为：" << decimalValue << endl;
	}
	else
	{
		cout << "输入的不是有效的十六进制数。" << endl;
	}
	return 0;
}*/
/*实验四（二）2.
(3)
#include<iostream>
using namespace std;
void reverseArray(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minindex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (*(arr + j) < *(arr + minindex))
			{
				minindex = j;
			}
		}
		if (minindex != 1)
		{
			int temp = *(arr + i);
			*(arr + i) = *(arr + minindex);
			*(arr + minindex) = temp;
		}
	}
}
int main()
{
	int size;
	cout << "输入元素个数：";
	cin >> size;
	int* arr = new int[size];
	cout << "输入数组元素：";
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr + i);
	}
	reverseArray(arr, size);
	cout << "排序后的数组元素：";
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
	delete[] arr;
	return 0;
}*/
