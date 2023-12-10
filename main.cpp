#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <time.h>
using namespace std;
struct seleccion{
    int nump;
    int cantidad;
};
struct prod{
    string nombre;
    string marca;
    string lineadep;
    float pvp;
    int stock;
};
bool checkrep(int n, int num[]);
int aleatorio (void);
int main()
{
    prod j[100];
    seleccion h[30];
    int i,k,li,ls,m,n,contador,l,b,a=0,c=0,x,q,q2,q3,q4,q5;
    int r[i],z[30],s[i];
    float v,w,y;
    cout <<"1.-PRODCTOS DISPONIBLES"<<endl;
    cout <<"2.-SALIR"<<endl;
    cin>>x;
    if(x==1)
    {
    system("cls");
    li=0;
    ls=99;
    srand(time(NULL));
    string producto[100]={"Camisa UAQ","Sudadera","Cantinfloras","Agenda","Taza","Gorra","Funda de Telefono","Gaceta","Periodico","Calcomanias","Café frío","Caféde holla","Agua600 ml","Agua 1L","Agua Pepino","Agua De Jamaica","Agua de Horchata","Agua de Frutas","Yoguth","Fresca","Coca Cola","Jugo","Frappe","Rufles","Doritos","Sabritas","Takis","Runers","cheetos","Chips","Churrumais","Patatinas","Wapa","Galletas", "Bizcocho", "Empanadas","Flan","Gelatina","Pay de Queso","Pay de Limon","Sopa Azteca" ,"Sopes","Huaraches","chapata","Molletes","huevos","Hot dog", "Baguette", "Sopa aguada","Burritos","Tacos dorados","Gorditas ","Sincronizadas","Spaghetti","Enchiladas","Enmoladas","Ensaladas","Chilaquiles","Papas fritas","Tacos de canasta","Hamburguesas","Bagle","Dulces", "Mazapán","Halls","Paleta","Cacahuates","Quesadillas","Tacos","Pizza","Panques","Arizona","Menu del Dia","Calculadora","Memoria","Resistol","Tijeras","Resistor","Pijas","Corrector","LEDs","Cartulina","Rotafolio","Protector de hojas","Pluma","Copias","Goma"," Clips","Seguros","Hojas de papel","Carpeta","Folder ","Guantes","Clinex","Plumones","Masquinetape","Diurex ","Cuaderno","Estuchera","Compas"};

   for(i=0;i<100;i++)
   {
       j[i].nombre=producto[i];
       if(i<9)

       {
            j[i].marca="UAQ";
            j[i].lineadep="Mercadito UAQ";
            q=aleatorio();
            if(i<3)
                {
                j[i].pvp=95;
                j[i].stock=10;
                }
                if(i>=3 and i<8)
                {
                    j[i].pvp=50;
                    j[i].stock=25;
                }
                if(i>=8 and i<10)
                    {
                    j[i].pvp=20;
                    j[i].stock=23;
                    }

       }

        if(i>=10 and i<73)
        {
            j[i].marca="UAQ";
            j[i].lineadep="Cafeteria UAQ";
            q2=aleatorio();
            if(i>=10 and i<13)
            {
                    j[i].marca="La cafe";
                    j[i].pvp=13;
                    j[i].stock=30;
            }
            if(i>=13 and i<18)
            {
                    j[i].marca="COCA COLA";
                    j[i].pvp=20;
                    j[i].stock=35;
                    q3=aleatorio();
            }
            if(i>=18 and i<23)
            {
                    j[18].marca="LALA";
                    if(i>=19 and i<22)
                            j[i].marca="COCA COlA";
                    j[22].marca="SANTA CLARA";
                    j[i].pvp=18;
                    j[i].stock=25;
            }
            if(i>=23 and i<33)
            {
                    j[i].marca="SABRITAS";
                    j[i].pvp=15;
                    j[i].stock=45;
                    q4=aleatorio();
            }
            if(i>=33 and i<40)
            {
                    j[i].marca="La cafe";
                    j[i].pvp=20;
                    j[i].stock=23;
            }
            if(i>=40 and i<53)
            {
                    j[i].marca="La cafe";
                    j[i].pvp=25;
                    j[i].stock=43;
            }
            if(i>=53 and i<62)
            {
                    j[i].marca="La cafe";
                    j[i].pvp=30;
                    j[i].stock=27;
            }
            if(i>=62 and i<67)
            {
                    j[i].marca="De la rosa";
                    j[i].pvp=3;
                    j[i].stock=16;
            }
             if(i>=67 and i<72)
            {
                    j[i].marca="La cafe";
                    j[i].pvp=16;
                    j[i].stock=28;
            }
            if(i==72)
            {
                    j[i].marca="La cafe";
                    j[i].pvp=60;
                    j[i].stock=20;
            }
        }
        if(i>=73 and i<100 )
        {

            j[i].lineadep="Papeleria UAQ";
            if(i>=73 and i<75)
            {
                    j[i].marca="CASIO";
                    j[i].pvp=100;
                    j[i].stock=27;
            }
            if(i>=75 and i<85)
            {
                    j[i].marca="PELICANO";
                    j[i].pvp=12;
                    j[i].stock=33;
                    q5=aleatorio();
            }
            if(i>=85 and i<90)
            {

                    j[i].marca="PAPER MATE";
                    j[i].pvp=3;
                    j[i].stock=100;
            }
            if(i>=90 and i<100)
            {
                    j[i].marca="OFFICE DEPOT";
                    j[i].pvp=18;
                    j[i].stock=47;
            }

        }


        /*cout<<"Producto: "<<j[i].nombre<<endl;
        cout<<"Marca: "<<j[i].marca<<endl;
        cout<<"Departamento: "<<j[i].lineadep<<endl;
        cout<<"Precio: "<<j[i].pvp<<endl;
        cout<<"Stock: "<<j[i].stock<<endl<<endl;*/
    }

    for(i=0; i<30; i++)
    {
        do
        {
            k = 1 + rand()%100;
        }while(checkrep(k, z));
            z[i] = k;
        //cout << z[i] <<" ";
    }
    cout << "----PRODUCTO----\n";
   do
   {

    for(i=0;i<30;i++)
    {

        cout << "\nnunmero del producto: : "<<z[i];
        cout << "\nnombre : "<<j[z[i]].nombre;
        cout << "\nMarca: "<<j[z[i]].marca;
        cout << "\nDepartamento: "<<j[z[i]].lineadep;
        cout << "\nPrecio : "<<j[z[i]].pvp;
        cout << "\nStock : "<<j[k].stock<<endl<< endl;
    }
    cout<<"Presione 2 para COMPRAR :";
    cout<<"\nPresione 3 para SALIR :";
    cin>>n;
    if(n==2)
    {
        contador=0;
        do
        {

        for(i=0;m!=3;i++)
        {
        cout<<"\nEscriba el numero del Producto que quiera comprar :";
        cin >>h[contador].nump;
        cout<<"\nEscribe la cantidad del producto que seleccionaste :";
        cin >>h[contador].cantidad;
        contador++;
        cout<<"Presione 2 para SEGUIR comprando: ";
        cout<<"\nPresione 3 para DEJAR de comprar: ";
        cin>>m;
        }
        if(m==3)
        {
            n=3;
        }
        }while(m!=3);
    }
    }while(n!=3);
    system("cls");
    li=0;
    ls=40;

    cout << "\n ----------DATOS DE COMPRAS------------\n";
    int f,des,des2,t;
    for(l=0;l<contador;l++)
       {
           /*{
        b=li+rand()%(ls-li+1);
        while(b%5!=0)
        {
         b=li+rand()%(ls-li+1);
        }*/

        cout<<h[l].cantidad<<".-"<<j[h[l].nump].nombre<<endl;
        cout<<"Marca : "<<j[h[l].nump].marca<<endl;
        cout<<"Departamento : "<<j[h[l].nump].lineadep<<endl;
        cout <<"PRECIO DEL PRODUCTO : "<<j[h[l].nump].pvp<<endl;
        if(h[l].nump<100)
        {
            if(h[l].nump<9)
            {
                des=q;
            }
            if(h[l].nump>=10 and h[l].nump<73)
            {
                des=q2;
                if(h[l].nump>=13 and h[l].nump<18)
                    des2=q3;
                if(h[l].nump>=23 and h[l].nump<33)
                    des2=q4;

            }
            if(h[l].nump>=75 and h[l].nump<85)
                des=q5;
        }
        w=h[l].cantidad*j[h[l].nump].pvp;
        cout <<"PRECIO del total de productos: "<<w<<endl;
        cout <<"DESCUENTO : "<<des<<"%"<<endl;
        cout <<"DESCUENTO 2: "<<des2<<"%"<<endl;
        t=des+des2;
        a=(j[h[l].nump].pvp)-(j[h[l].nump].pvp*t/100);
        y=a*v;
        cout <<"PRECIO CON DESCUENTO : "<<y<<endl<<endl;
        c=c+y;
       }
       cout<<"-------TOTAL A PAGAR-------: "<<c<<" pesos"<<endl<<endl;
       cout<<"-------GRACIAS POR SU COMPRA-------: "<<endl<<endl;
    }
    else
        x=2;

    return 0;
}
bool checkrep(int n, int num[])
{
    int i;
    for( i=0; i<30; i++)
            if(n == num[i])
               return true;

    return false;

}
int aleatorio (void)
{
    int k=0,n=0;
    srand(time(NULL));

    do
    {
        k=0+rand()%41;
        if(k%5==0)
            {
                n=1;
                return k;
            }
        else
            n=0;
    } while(n==0);
}
