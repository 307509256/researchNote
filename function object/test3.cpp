#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> vec(10, 1);
	int count1 = count_if(vec.begin(), vec.end(), bind2nd(less_equal<int>(), 10));       //��������С�ڵ���10��Ԫ�ظ���
	int count2 = count_if(vec.begin(), vec.end(), not1(bind2nd(less_equal<int>(), 10))); //�������в�С�ڵ���10��Ԫ�ظ��������������溯����ȡ��
	cout<<count1<<' '<<count2<<endl;  //10 0
	return 0;
}