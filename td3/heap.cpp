#include <iostream>

void init(int* &a, int size) {
    a = new int[size];
    for (int i = 0; i < size; i = i + 1)
        a[i] = i+1;
}

int main() {
    int *m1 = new int[5];
    for (int i = 0; i < 5; i = i + 1) {
        *(m1+i) = i;
    }

    init(m1, 5);
    std::cout << m1[4] << std::endl;
    delete[] m1;
}