#ifndef REPO_H
#define REPO_H
#include "numar_complex.h"
using namespace std;
class Repo{
private:NumarComplex Numere[10];
    int noNumere;
public:
    Repo();
    ~Repo();
    void addItem(NumarComplex &n);
    NumarComplex getItemFromPos(int pos);
    int getSize();

};
#endif // REPO_H