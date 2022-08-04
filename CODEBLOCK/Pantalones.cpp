#ifdef __MSDOS__
    #include <iostream.h>
    #include <stdlib.h>
#else
    #include <iostream>
    #include <cstdlib>
    using namespace std;
#endif

int main (void)
{
    int modelo, talla;
    float N_pantalones, cargo_por_talla, costo_de_la_tela, ganancia, ganancia_extra;
    float mano_de_obra, metro_de_tela, metros_de_tela, precio_final;
    cout << "Ingresa el valor de N pantalones: ";
    cin >> N_pantalones;
    cin.get();
    cout << "Ingresa el valor de metro de tela: ";
    cin >> metro_de_tela;
    cin.get();
    cout << "Selecciona el valor de modelo." << endl;
    cout << "\t1.- A" << endl;
    cout << "\t2.- B" << endl;
    cout << "\t: ";
    do {
        cin >> modelo;
        cin.get();
        if (modelo<1||modelo>2)
        {
            cout << "Valor incorrecto. Ingr\202salo nuevamente.: ";
        }
    } while (modelo<1||modelo>2);
    cout << "Selecciona el valor de talla." << endl;
    cout << "\t1.- 30" << endl;
    cout << "\t2.- 32" << endl;
    cout << "\t3.- 36" << endl;
    cout << "\t: ";
    do {
        cin >> talla;
        cin.get();
        if (talla<1||talla>3)
        {
            cout << "Valor incorrecto. Ingr\202salo nuevamente.: ";
        }
    } while (talla<1||talla>3);
    if(modelo==1)
        metros_de_tela=1.5*N_pantalones;
    else
        metros_de_tela=1.8*N_pantalones;
    costo_de_la_tela=metros_de_tela*metro_de_tela;
    if(modelo==1)
        mano_de_obra=costo_de_la_tela*0.8;
    else
        mano_de_obra=costo_de_la_tela*0.95;
    if(talla==2||talla==3)
        cargo_por_talla=mano_de_obra*0.04;
    else
        cargo_por_talla=0;
    ganancia_extra=(costo_de_la_tela+mano_de_obra+cargo_por_talla)*0.3;
    precio_final=costo_de_la_tela+mano_de_obra+cargo_por_talla+ganancia_extra;
    ganancia=cargo_por_talla+ganancia_extra;
    cout << "Valor de cargo por talla: " << cargo_por_talla << endl;
    cout << "Valor de costo de la tela: " << costo_de_la_tela << endl;
    cout << "Valor de ganancia: " << ganancia << endl;
    cout << "Valor de ganancia extra: " << ganancia_extra << endl;
    cout << "Valor de mano de obra: " << mano_de_obra << endl;
    cout << "Valor de metros de tela: " << metros_de_tela << endl;
    cout << "Valor de precio final: " << precio_final << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}
