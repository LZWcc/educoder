#include <iostream>

// 包含流操作算子库
#include <iomanip>
using namespace std;

// 定义常量PI，后面可以直接用PI代替后面的数值
#define PI 3.14159265358979323846

int main()
{
    int n;
    cin >> n;
    // 请在Begin-End之间添加你的代码，输入n，按不同的精度输出 PI。
    /********** Begin *********/
    cout << fixed;
    cout << setprecision(n) << PI << endl;
    cout << setprecision(n + 1) << PI << endl;
    cout << setprecision(n + 2) << PI << endl;
    cout << setprecision(n + 3) << PI << endl;
    cout << setprecision(n + 4) << PI << endl;
    /********** End **********/
    return 0;
}
