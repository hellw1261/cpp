#include <iostream>
using namespace std;

class Number{
	private:
		int value;
	public:
		Number(int x);
		Number maxDivisor(Number x);
		void show();
};

int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1), no2(n2);
        Number no3 = no1.maxDivisor(no2);  //最大公约数
        no3.show();
    }
    return 0;
}

Number::Number(int x){
	value = x;
}

Number Number::maxDivisor(Number x){
	int m,j,result;
	if(x.value < value) m = x.value;
	else m = value;
	for(j=m;j>0;j--){
		if(x.value%j==0&&value%j==0){
			result=j;
			break;
		} 
	}
	return result;
}

void Number::show(){
	cout<<value<<endl;
}

