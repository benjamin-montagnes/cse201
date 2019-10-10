#include <iostream>

int main() {
    int n=1;
    std::cout << "Enter N: ";
    std::cin >> n;
    bool foo[n-1];
    for (int x=0; x<n-1; x+=1){foo[x]=true;}
    for (int z=0; z<n-1; z+=1){
        if (foo[z]==true){
            for (int a=z; a<n-1; a+=z+2){
                if(a != z) foo[a]=false;
            }
        }
    }
    for (int y=0; y<n-1; y+=1){if (foo[y]==true) std::cout << y+2 << "\t";}
    std::cout << std::endl;
    return 0;
}