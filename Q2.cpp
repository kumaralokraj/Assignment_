#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;

    
        int N, M;
        cout << "Enter the number of rows and columns: ";
        cin >> N >> M;
        int matrix[100][100];
        

        cout << "Enter the elements of the matrix:\n";
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> matrix[i][j];
            }
        }

        cout << "Row sums: ";
        for (int i = 0; i < N; ++i) {
            int rowSum = 0;
            for (int j = 0; j < M; ++j) {
                rowSum=rowSum+matrix[i][j];
            }
            cout << rowSum << " ";
        }
        cout << endl;
    

    return 0;
}
