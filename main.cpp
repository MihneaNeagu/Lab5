#include <iostream>
#include "tests.h"
#include "numar_complex.h"
using namespace std;
int main() {
    int n;
    cout<<"Dati numarul de nr complexe: ";
    cin >> n;
    NumarComplex *v = new NumarComplex[n];
    while(true)
    {
        NumarComplex z;
        tests();
        cout<<"1. Dati un numar complex: "<<'\n';
        cout<<"2. Afisati numarul complex: "<<'\n';
        cout<<"3. Afisati modulul numarului complex: "<<'\n';
        cout<<"4. Afisati conjugatul numarului complex:"<<'\n';
        cout<<"5. Afisati suma numarului complex cu un numar dat:"<<'\n';
        cout<<"6. Afisati diferenta dintre numarul complex si un numar dat:"<<'\n';
        cout<<"7. Afisati produsul numarului complex cu un numar dat:"<<'\n';
        cout<<"8. Afisati impartirea dintre numarul complex si un numar dat:"<<'\n';
        cout<<"9. Afisati toate entitatile din cadranul 1:"<<'\n';
        cout<<"10. Afisati cea mai mare entitate(modulul maxim):"<<'\n';
        cout<<"11. Afisati cea mai mare secventa de entitati egale:"<<'\n';
        cout<<"12. Exit"<<'\n';
        int optiune;
        cout<<"Dati optiunea:";
        cin>>optiune;
        if (optiune==1)
        {
            for(int i=0;i<n;i++)
            {   cin>>z;
                v[i] = z;}
        }
        else if (optiune==2)
        {
            for(int i=0;i<n;i++)
                cout<<v[i]<<' ';
            cout << endl;
        }
        else if (optiune==3) {
            for(int i=0;i<n;i++)
                cout<<v[i].modul(v[i])<<' ';
            cout << endl;
        }
        else if (optiune==4) {
            for(int i=0;i<n;i++)
            {
                v[i].conjugat(v[i]);
                cout<<v[i]<<" "<<" ";
            }
            cout<<endl;
        }
        else if (optiune==5){
            for(int i=0;i<n;i++)
            { v[i+1].sumaNumereComplexe(v[i],v[i+1]);
                cout<<v[i+1]<<" ";
            }
            cout<<endl;
        }
        else if (optiune==6)
        {for(int i=0;i<n;i++)
            { v[i+1].diferentaNumereComplexe(v[i],v[i+1]);
                cout<<v[i+1]<<" ";
            }
            cout<<endl;
        }
        else if (optiune==7)
        {
            for(int i=0;i<n;i++)
            { v[i+1].produsNumereComplexe(v[i],v[i+1]);
                cout<<v[i+1]<<" ";
            }
            cout<<endl;
        }
        else if (optiune==8)
        {
            for(int i=0;i<n;i++)
            { v[i+1].impartireNumereComplexe(v[i],v[i+1]);
                cout<<v[i+1]<<" ";
            }
            cout<<endl;
        }
        else if(optiune==9)
        {
            for(int i=0;i<n;i++)
            {
                if(v[i].cadran1(v[i])==1)
                    cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(optiune==10)
        {
            float maxi;
            NumarComplex z;
            for(int i=0;i<n;i++)
            {
                if(v[i].modul(v[i])>maxi)
                {
                    maxi=v[i].modul(v[i]);
                    z=v[i];
                }
            }
            cout<<z<<" este entitatea cu modulul maxim, adica: "<<maxi;
            cout<<endl;
        }
        else if(optiune==11) {
            int i, lmax, pmax, pc, lc;
            lmax = 0;
            lc = 1;
            pc = 0;
            for (i = 1; i < n; i++) {
                if (v[i].operator==(v[i-1])) {
                    lc++;
                } else {
                    lc = 1;
                    pc = i;
                }
                if (lmax < lc) {
                    lmax = lc;
                    pmax = pc;
                }
            }
            for (i = pmax; i <= pmax + lmax - 1; i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        }

        else if (optiune==12)
            {break;}
    }
    return 0;
}
