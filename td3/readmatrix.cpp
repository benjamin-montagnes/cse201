#include <iostream>

int** readMatrix(int& n, int& m)
{
    std::cout << "Insert the number of rows: ";
    std::cin >> n;
    std::cout << "Insert the number of columns: ";
    std::cin >> m;

    int** myMatrix;

    myMatrix = new int*[n];

    for (int i=0; i<n; i++) myMatrix[i] = new int[m];

    std::cout << "Set the values: "<<std::endl;

    int val;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            std::cout << "Insert the value of (" << i << "," << j << ") :";
            std::cin >> val;
            myMatrix[i][j] = val;
        }
    }

    return myMatrix;
}

int main()
{
    int nA, mA;
    int** A = readMatrix(nA, mA);

    std::cout << "Your matrix is: "<<std::endl;
    
    for (int r = 0; r < nA; r++){
        for (int c = 0; c < mA; c++) std::cout << A[r][c] << " ";
        std::cout << std::endl;
    }

    delete[] A;

  return 0;
}