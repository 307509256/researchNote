#include <iostream>
using namespace std;

/*
	1.��������˳��ʹ����λ��ż��ǰ�棨���飩
    2.ʹ����������λ�������ǰ�벿��,����ż��λ������ĺ�벿��
	3.Ҫ��ʱ�临�Ӷ�ΪO(n)
*/

//��������
template<class T>
struct IsOdd
{
	bool operator() (T x){
		return (x & 1)?true: false;
	}
};
//�������� �� ��������˳��ʹ����λ��ż��ǰ��  
//�������� �� pArrayָ�������ָ�룬nLenΪ���鳤��  
//����ֵ ��   ��  
template <class T, class F>
void PartionArray(T *pArray, int nLen, F func)
{  
    int i = -1;  
    for(int j = 0; j < nLen; j++)  
    {  
        if(func(pArray[j])) //�����������  
        {  
            i++;  
            T tmp = pArray[j];  
            pArray[j] = pArray[i];  
            pArray[i] = tmp;  
        }  
    }  
}  
//��������
int main()
{
	short a[] = {1,2,3,4,5,6};
	long b[] = {1,2,3,4,5,6};

	PartionArray(a, 6, IsOdd<short>()); //���Դ���
	for(int i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}

	cout<<"-----------"<<endl;

	PartionArray(b, 6, IsOdd<long>()); //���Դ���
	for(int j=0;j<6;j++)
	{
		printf("%d\n",a[j]);
	}

	return 0;
}