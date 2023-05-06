#include <iostream>

using namespace std;

void SwapByRef2(int &ref1, int &ref2) {
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main(void) {
    return 0;
}
