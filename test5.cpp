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

	 vector<int>::iterator new_end =   
	 remove_if(V.begin(), V.end(), bind2nd(greater<int>(), 100));  /*1.remove_if�Ƿ��ܹ������������������bind2nd(less<int>(), 1000)���������û�н��Ŷ������
																	 2.remove_ifֻ�Ǹı�����������Ԫ�ص�λ�ã���������������Ҫ����erase( )
																   */
     
	 
	 V.erase(new_end, V.end()); 

	 for(int j=0;j<V.size();j++)
	 {
		printf("%d\n",V[j]);
	 }


	return 0;
}