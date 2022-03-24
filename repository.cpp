#include "repository.h"
Repo::Repo()
{this->noNumere=0;
}
Repo::~Repo()
{}
void Repo::addItem(NumarComplex &n)
{this->Numere[this->noNumere++]=n;
}
NumarComplex Repo::getItemFromPos(int pos)
{return this->Numere[pos];
}
int Repo::getSize()
{return this->noNumere;
}
