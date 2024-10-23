#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    int N, b, minIndex, maxIndex;
    int beda = 0;
    int isiMin = numeric_limits<int>::max(), isiMax = numeric_limits<int>::min();
    double rata = 0;

    cin >> N;
    vector<int> isi(N);

    for (int i = 0; i < N; i++) {
        cin >> isi[i];
        rata += isi[i];
    }

    rata /= N;

    for (int i = 0; i < N; i++) {
        if (isi[i] != rata) {
            beda++;
        }
        if (isiMax < isi[i]) {
            isiMax = isi[i];
            maxIndex = i;
        }
        if (isiMin > isi[i]) {
            isiMin = isi[i];
            minIndex = i;
        }
    }

    if (beda >= 3) {
        cout << "TIDAK SESUAI";
    } else if (beda == 0) {
        cout << "SESUAI";
    } else if (beda == 2) {
        if (rata == int(rata)) {
            b = isiMax - rata;
            cout << b << " " << maxIndex + 1 << " " << minIndex + 1;
        } else {
            cout << "TIDAK SESUAI";
        }
    }

    return 0;
}
