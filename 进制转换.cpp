#include <iostream>
using namespace std;

class Number{
	private:
		int value;
	public:
		Number(int x,int y);
		Number converto(int x);
		void show();
};

int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1, 10);     //n1是10进制正整数
        Number no3 = no1.converto(n2);  //no3是n2进制的正整数
        no3.show();     //输出结果
    }
}

Number::Number(int x,int y){
	value = x;
}

Number Number::converto(int x){
	Number r(0,10);
	int a[100000]={0},i=0;
	while(value){
		a[i]=value%x;
		value = value/x;
		i++;
	}
	i=0;
	while(a[i]!=0) {
		r.value =r.value *10+a[i];
		i++;
	}
	return r;
}

void Number::show(){
	cout<<value<<endl;
}
