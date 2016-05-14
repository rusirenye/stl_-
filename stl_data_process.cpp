#include<iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

template <class T>
struct dispaly{
	void operator()(const T &x){
		cout<< x <<endl;
	}
};

template <class T>
struct even{
	bool operator ()(const T &x)
	{
		return x%2==0? true : false;
	}
};

class even_by_two{
public: 
	int operator ()(){
		_x+=2;
		return _x;
	}
	static int _x;
};
int even_by_two::_x=0;
int main(){
	int ia[]={0,1,2,3,4,5,6,6,7,8};
	vector<int> va(ia,ia+sizeof(ia)/sizeof(int));
	//���ҵ�һ���ڽ���ȵ�Ԫ��
	cout<< *adjacent_find(va.begin(),va.end())<<endl;
	//���ҵ�һ���ڽ���ȵ�Ԫ��(ʹ��ָ���Ƚ���)
	cout<< *adjacent_find(va.begin(),va.end(),equal_to<int>())<<endl;
	//����vector ��6������
	cout<<count(va.begin(),va.end(),6)<<endl;
	//����vector�б�6С������
	cout<<count_if(va.begin(),va.end(),(less_equal<int>(),6))<<endl;
	//����vector��Ԫ��6����λ��
	cout<<*find(va.begin(),va.end(),6)<<endl;
	//����va�б���
	system("pause");
	return 0;
}