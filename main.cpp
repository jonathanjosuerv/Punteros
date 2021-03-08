
#include<iostream>
using namespace std;

//ESTRUCTURA:
struct Alumno{
    char nombres[20];
    char apellidos[20];
    int codigo;
    int n1,n2,n3;
}alumnos[100];

int main(){
    int n_alumnos,posM=0;

    cout<<"Digite el numero de alumnos: ";
    cin>>n_alumnos;

    for(int i=0;i<n_alumnos;i++){
        fflush(stdin);

        cout<< "***INGRESO DE ALUMNOS***"<<endl;
        cout<<"Ingrese Nombres         : "; cin.getline(alumnos[i].nombres,20,'\n' );
        cout<<"Ingrese Apellidos       : "; cin.getline(alumnos[i].apellidos,20,'\n');
        cout<<"Ingrese Codigo de Alumno: "; cin>>alumnos[i].codigo;

        cout<<"INGRESO DE NOTAS: "<<endl;
        cout<<"Nota #1: "; cin>>alumnos[i].n1;
        cout<<"Nota #2: "; cin>>alumnos[i].n2;
        cout<<"Nota #3: "; cin>>alumnos[i].n3;



    }


    cout<<"\n\nMostrando Datos de los alumnos..."<<endl;
    for (int i=0;i<n_alumnos;i++){

        cout<<"_____________________"<<endl;
        cout<<"Codigo: "<<alumnos[posM].codigo<<endl;
        cout<<"Nombre: "<<alumnos[posM].nombres<<endl;
        cout<<"Apellido: "<<alumnos[posM].apellidos<<endl;
        cout<<"________ NOTAS ________"<<endl;
        cout<<"Nota1: "<<alumnos[posM].n1<<endl;
        cout<<"Nota2: "<<alumnos[posM].n2<<endl;
        cout<<"Nota3: "<<alumnos[posM].n3<<endl;

    }



    return 0;
}

