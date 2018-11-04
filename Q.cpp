//
// Created by danai on 10/25/18.
//

#include "Q.h"

Q::Q() {
    n=0;
    a=new int[n];
}

Q::Q(int nn) {
    n=nn;
    a=new int[n];
}

Q::Q(int nn, int *aa) {
    n=nn;
    a=new int[n];
    for (int i = 0; i < n; ++i) a[i]=aa[i];
}

int Q::check() {
    int tmp, n_res = -1;
    tmp = a[0] < 0 ? -1 : 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] * tmp < 0) {
            tmp *= -1;
        }
        else {
            n_res = i;
            i = n;
        }
    }
    return n_res;
}

void Q::print() {
    cout << "массив размера " << n << endl;
    cout << "[";
    for (int i = 0; i < n-1; ++i) cout << a[i] << ", ";
    cout << a[n-1] << "]" << endl;
}
