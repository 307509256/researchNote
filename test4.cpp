#include <iostream>
#include <algorithm>
#include <vector> 
#include <functional>
#include <math.h>

using namespace std;

struct less_mag : public binary_function<double, double, bool>
{  
	bool operator()(double x, double y) { return fabs(x) < fabs(y); }  
} myless_mag;  

struct adder : public unary_function<double, void>  
{  
    adder() : sum(0) {}  
    double sum;  
    void operator()(double x) { sum += x; }  
 };  

int main()
{
//	<span style="font-size:18px;">    
	vector<int> V(100);
    generate(V.begin(), V.end(), rand);//</span>

	sort(V.begin(), V.end(), myless_mag);


	for(int i=0;i<100;i++)      //��������о�Ϊ�����С�汾�ġ�������
	{
		printf("%d\n",V[i]);
	}

	adder result = for_each(V.begin(), V.end(), adder());  //���
	cout << "The sum is " << result.sum << endl;


	return 0;
}