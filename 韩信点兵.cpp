#include <iostream>
using namespace std;

class HanXin{
	private:
		int a,b,c;
	public:
		void line3(int x);
		void line5(int x);
		void line7(int x);
		void showMany();
};

int main() {
    int n, n1, n2, n3;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2 >> n3;
        HanXin hx;  //����
        hx.line3(n1);  //3��һ��
        hx.line5(n2);   //5��һ��
        hx.line7(n3);   //7��һ��
        hx.showMany();
    }
}

void HanXin::line3(int x){
	a=x;
}

void HanXin::line5(int x){
	b=x;
}

void HanXin::line7(int x){
	c=x;
}

void HanXin::showMany() {
	int m=(70*a+21*b+15*c)%105;
	if(m<10||m>100) cout<<"Impossible"<<endl;
	else cout<<m<<endl;
}
