#include <iostream>  
using namespace std;  
int main() {  
    int A[10][10], B[10][10], X[10][10], N1, M1, i, j, k, t;     
    cin >> t;
    if (t == 1) {
        cin >> N1 >> M1;         
        for (i = 0; i < N1; i++) {    
            for (j = 0; j < M1; j++) {    
                cin >> A[i][j];
            }
        }       
        for (i = 0; i < N2; i++) {    
            for (j = 0; j < M2; j++) {    
                cin >> (B[i][j]);
            }    
        }       
        for (i = 0; i < N1; i++) {    
            for (j = 0; j < M1; j++) {    
                X[i][j]=0;    
                for (k = 0; k < M1; k++) {    
                X[i][j] += A[i][k] * B[k][j];    
                }
            }
        }
    }
    for (i = 0; i < N1; i++) {
        for (j = 0; j < M1; j++) {
            cout << X[i][j] << endl;
        }
    }

return 0;  

}