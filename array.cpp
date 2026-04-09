#include <iostream>
using namespace std;

int main() {
    int A[] = {1,2,3,4,5};
    int B[] = {2,3,1,0,5};

    int n = 5;

    for(int i = 0; i < n; i++) {
        bool found = false;

        for(int j = 0; j < n; j++) {
            if(A[i] == B[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            cout << "Number not present in second array: " << A[i];
        }
    }

    return 0;
}
