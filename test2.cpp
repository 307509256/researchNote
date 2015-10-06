#include <iostream>
#include <algorithm>
#include <vector> 
#include <functional>
#include <math.h>

using namespace std;

struct less_mag : public binary_function<double, double, bool>
{  
	bool operator()(double x, double y) { return fabs(x) < fabs(y); }  
};  

int main()
{
//	<span style="font-size:18px;">    
	vector<int> V(100);
    generate(V.begin(), V.end(), rand);//</span>

	sort(V.begin(), V.end(), less_mag());

	for(int i=0;i<100;i++)      //��������о�Ϊ�����С�汾�ġ�������
	{
		printf("%d\n",V[i]);
	}

	return 0;
}