#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 0; i < n; i++){
        if(i > 0 && i < n - 1)cout << " ";
        for(int j = 0; j < 2 * n - 3 ; j++){
            if(i == 0 || j == i - 1 || i != n - 1 &&j == 2 * n - 4 - i)cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
}
// output
// * * * * * * *
//  *         *
//    *     *
//      * *
//       *