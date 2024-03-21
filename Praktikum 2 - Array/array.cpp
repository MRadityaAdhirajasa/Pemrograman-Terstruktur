#include <iostream>
using namespace std;

int max(int matrix[3][3]) {
    int maxn = matrix[0][0];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] > maxn) {
                maxn = matrix[i][j];
            }
        }
    }

    return maxn;
}

int min(int matrix[3][3]) {
    int minn = matrix[0][0];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] < minn) {
                minn = matrix[i][j];
            }
        }
    }

    return minn;
}


int main() {
    int matrix[3][3] = {{5, 17, 10}, {58, 32, 29}, {22, 77, 19}};

//    int maxn = max(matrix);
//    int minn = min(matrix);
		
	cout << "angka terkecil : " << min(matrix) << endl;
	cout << "angka terbesar : " << max(matrix) << endl;

//    cout << "Angka terbesar: " << maxn << endl;
//    cout << "Angka terkecil: " << minn << endl;

    return 0;
}
