#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>>
 using namespace std;
 #include "funcionDados.h"



  void menuJuego( ){
      int opciones;

      do{
          system("cls");
          cout<<"Menu: "<<endl;
          cout<<"----------"<<endl;
          cout<<"1. Jugar"<<endl;
           cout<<"----------"<<endl;
          cout<<"2. Estadisticas"<<endl;
           cout<<"---------------"<<endl;
          cout<<"3. creditos"<<endl;
           cout<<"----------"<<endl;
          cout<<"0. Salir"<<endl;
           cout<<"----------"<<endl;
          cout<<"Ingrese una opcion: ";
          cin>>opciones;
          cin.ignore();



          switch(opciones){
              case 1:
                  Jugar();
                  break;
              case 2: ///Estadisticas

                  break;
                   case 3: ///creditos

                  break;
              case 0:
                  cout<<"Saliendo del juego..."<<endl;
                  system("pause");
                  break;
              default:
                  cout<<"Opción no válida, por favor intente de nuevo."<<endl;
                   system("cls");
          }

      }while(opciones!= 0);


}


  void  Jugar (){
    string jugador1;
    string jugador2;
    cout<<"Nombre del primer jugador: "<<endl;
    system("pause>>NULL");
    cin>>jugador1;
    cout<<"Nombre del segundo jugador:"<<endl;
     system("pause>>NULL");
    cin>>jugador2;



     int dado1,dado2;


        srand(time(NULL));
    dado1 = rand() % 6 + 1;

    dado2 = rand() % 6 + 1;

      if(dado1==dado2);
    while(dado1==dado2);
    system("pause>>NULL");

    cout<<jugador1<<" tira  dado: "<<dado1;
    cout<<endl;
    system("pause");
     cout<<jugador2<<" tira  dado: "<<dado2;
     cout<<endl;
      system("pause");

      if (dado1 > dado2) {
    cout<<jugador1<<" empieza primero "<<endl;
    }
     else if (dado2 > dado1) {

    cout<<jugador2<<" empieza primero" <<endl;
    }


        int Sumadedadostock=0;
        int DadosDe12caras[12];
        for(int i=2; i<12; i++){
         DadosDe12caras[0]=rand()% 12+1;
           if(DadosDe12caras[i]<24){
            Sumadedadostock=DadosDe12caras[i]+=DadosDe12caras[i];
           }
           cout<<Sumadedadostock<<"puntaje de los dados stock"<<endl;
        }






    }







