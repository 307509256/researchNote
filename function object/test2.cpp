#include <iostream>
#include <algorithm>
#include <functional>
/*
	1.�����㷨sort()Ϊ��������
*/
using namespace std;
int main()
{
	int a[] = {1,3,2,4,5,7};
	sort(&a[0], &a[6]);         //��������
	for(int i = 0; i < 6; i++)
		cout<<a[i]<<' ';
	cout<<endl;
/*
	1.ʵ�ֵݼ�����
	2.����ʵ�������˺�������
	3.ͷ�ļ������ functional
*/
	sort(&a[0], &a[6], greater<int>()); 
	for(int j = 0; j < 6; j++)  
        cout<<a[j]<<' ';  
    cout<<endl; 

	return 0;
}