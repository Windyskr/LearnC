#include <cstring>
#include <iostream>
using namespace std;

class Array {
   public:
    int arr[1000];
    int length;
    void arrayInit();
    void findMax();
    memcpy(a[1000], arr[1000], sizeof arr);

   private:
    int l = length;
    int a[1000];
};

void Array::arrayInit() {
    int length = 0;
    int arr[1000];
    cout << "输入数组长度" << endl;
    cin >> length;
    cout << "输入树组元素" << endl;
    for (int i = 0; i < length; i++) cin >> length;
}

int Array::findMax() {
    int max = -0x3f3f3f;
    for (int i = 0; i < l; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

int main() {
    Array a1;
    a1.arrayInit();
    return 0;
}