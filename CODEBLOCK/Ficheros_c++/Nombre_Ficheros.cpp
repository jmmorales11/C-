#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Palabra {
public:
    Palabra( string = "", int = 0 );
    void establecerTotal();
    void establecerPalabra( string );
    int obtenerTotal() { return total; }

    bool bucarPalabra();
    void insertarPalabra( Palabra );
    void imprimir();

    string obtenerPalabra() { return palabra; }
    static int obtenerGranTotal() { return granTotal; }
private:
    int total;
    string palabra;
    static int granTotal;
};

int Palabra::granTotal = 0;

Palabra::Palabra( string p, int n ){
    palabra = p;
    total = n;
}

void Palabra::establecerTotal() { total++; }
void Palabra::establecerPalabra( string p ) { palabra = p; }

vector<Palabra> V;

bool Palabra::bucarPalabra(){

    string s;
    vector<Palabra>::size_type sz = V.size();

    for( unsigned i = 0; i < sz; i++ ){
        s = V[i].obtenerPalabra();
        if( s == palabra ){
            V[i].establecerTotal();
            granTotal++;
            return true;
        }
    }
    granTotal++;
    return false;
}

void Palabra::insertarPalabra( Palabra p ){

    p.establecerTotal();
    V.push_back( p );

}

void Palabra::imprimir(){

    vector<Palabra>::size_type sz = V.size();

    cout << "Total palabras leidas: "
                 << Palabra::granTotal << endl;

    for( unsigned i = 0; i < sz; i++ ){

        cout << "La palabra " << V[i].obtenerPalabra()
             << " aparece " << V[i].obtenerTotal()
             << " veces.\n";
        }
    cout << endl;
}

int main(){

    Palabra p;
    string s;ifstream fe;
    fe.open("nombres.txt", ios::in );

    while( !fe.eof() ){
        fe >> s;
        p.establecerPalabra( s );
        if( p.bucarPalabra() )
            p.establecerTotal();
        else
            p.insertarPalabra( s );
    }
    fe.close();

    p.imprimir();

    return 0;
}
