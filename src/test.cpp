#include <iostream>
using namespace std;
int print(int a){
    cout << "函数调用" << endl;
    return a;

}
int main(){
    int b = 0;
    cout << "请输入b:" << endl;
    cin >> b;
    int c = print(b);
    cout << "刚才输入的是" << c << endl;

    return 0;
}