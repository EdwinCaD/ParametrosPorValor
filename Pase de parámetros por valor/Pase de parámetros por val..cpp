///EDWIN CAMPOS DRAGUSIN
///SEGUNDO SEMESTRE DE LA LICENCIATURA EN CIENCIAS COMPUTACIONALES
///MATERIA: ESTRUCTURA DE DATOS.

#include <iostream>
#include <locale.h>

using namespace std;

double operacion(int,int,char);

int encontrarMax(int x,int y);

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("cls");
    system("title EJERCICIO TRABAJADO EN EL VIDEO DE LA PLATAFORMA");
    cout<<"\t\t"<<"//////////////////////////EJEMPLO DEMOSTRADO EN EL VIDEO DE LA PLATADORMA///////////////////////"<<endl<<endl;

        int n1,n2;
        //int mayor;
        cout<<"\t"<<"DIGITE DOS NUMEROS: "<<endl;
        cout<<"\t";cin>>n1;
        cout<<"\t";cin>>n2;
        //mayor=encontrarMax(n1,n2);
        //cout<<"EL VALOR MAYOR DE LOS DOS NUMEROS ES: "<<mayor;
        cout<<"\t"<<"EL VALOR MAYOR DE LOS DOS NUMEROS ES: "<<encontrarMax(n1,n2);
        cout<<endl<<endl;

    system("pause");
    system("color 0a");

        int N1,N2; ///VARIABLES QUE CONTENDRÁN LOS DOS OPERANDOS
        char opr; /// VARIABLE QUE CONTENDRÁ EL OPERADOR
        char respuesta; ///VARIABLE PARA PODER REPETIR EL PROGRAMA

        do{ ///INICIO DEL CICLO PARA REPETIR EL PROGRAMA

    system("cls");
    system("title RESOLUCIÓN AL EJERCICIO PLANTEADO EN PLATAFORMA");
    cout<<"\t\t"<<"//////////////////////RESOLUCIÓN AL EJERCICIO PLANTEADO EN PLATAFORMA///////////////////////"<<endl<<endl;

        ///double resultado;
        cout<<"\t"<<"DIGITE DOS NÚMEROS CON LOS QUE TRABAJAR: "<<endl;
        cout<<"\t";cin>>N1;  ///PIDE POR EL TECLADO LOS DOS NUMEROS PARA GUARDARLOS EN LAS VARIABLES.
        cout<<"\t";cin>>N2;
        cout<<endl<<endl;
        cout<<"\t"<<"DIGITE EL OPERADOR QUE VA A UTILIZAR: (+,-,*,/)"<<endl;
        cout<<"\t";cin>>opr;

        ///resultado=operacion(N1,N2,opr);
        ///cout<<"EL RESULTADO DE LA OPERACIÓN ES: "<<resultado<<endl;
        cout<<"\t"<<"EL RESULTADO DE LA OPERACIÓN ES: "<<operacion(N1,N2,opr)<<endl;

        cout<<"\t"<<"DESEA REPETIR LA APLICACIÓN?(S/N) "; cin>>respuesta;
        }while (respuesta=='s' || respuesta=='S');


    return 0;
}

///DEFINICIÓN DE LAS FUNCIONES
int encontrarMax(int x,int y){
    int numeroMax;

    if (x>y){
        numeroMax=x;
    }
    else{
        numeroMax=y;
    }
    return numeroMax;
}

double operacion(int x,int y,char a){
    double resultado;

    if(a=='+'){
     resultado=x+y;
    }
    else if(a=='-'){
        resultado=x-y;
    }
    else if(a=='*'){
        resultado=x*y;
    }
    else if(a=='/'){
        resultado=x/y;
    }
    else{
        system("color 04");
        system("cls");

        cout<<"EL OPERADOR QUE INTRODUJO NO ESTÁ SOPORTADO POR EL PROGRAMA... FAVOR DE INTENTAR DE NUEVO"<<endl<<endl;
        exit(-1);
    }

    return resultado;
}
