#include <iostream>
#include <algorithm>
#include <vector> 
#include <functional>

using namespace std;

int main()
{
//	<span style="font-size:18px;">    
	vector<int> V(100);
    generate(V.begin(), V.end(), rand);//</span>
	for(int i=0;i<100;i++)      //��������о�Ϊ�����С�汾�ġ�������
	{
		printf("%d\n",V[i]);
	}

	return 0;
}