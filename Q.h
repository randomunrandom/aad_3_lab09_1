//
// Created by danai on 10/25/18.
//

#ifndef AAD_3_LAB09_1_Q_H
#define AAD_3_LAB09_1_Q_H
#include <iostream>
using namespace std;


class Q {
private:
    int n, *a;
public:
    Q();
    Q(int nn);
    Q(int nn, int *aa);

    void print();
    int check();
};


#endif //AAD_3_LAB09_1_Q_H
