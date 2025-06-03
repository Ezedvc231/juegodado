 #include <iostream>
 using namespace std;
 #include "funcionDados.h"

  void menuJuego( ){
      int opciones;

      do{
          system("cls");
          cout<<"1. Jugar"<<endl;
          cout<<"0. Salir"<<endl;
          cout<<"Ingrese una opcion: ";
          cin>>opciones;

          switch(opciones){
              case 1:
                  ///jugar();
                  break;
              case 2:

                  break;
              case 0:
                  cout<<"Saliendo del juego..."<<endl;
                  system("pause");
                  break;
              default:
                  cout<<"Opción no válida, por favor intente de nuevo."<<endl;
          }
      }while(opciones != 0);

}


void Jugadores(){
    string jugador1;
    string jugador2;

    cout<<"ingrese el nombre del jugador 1"<<endl;
    cin>>jugador1;
    cout<<"ingrese el nombre del jugador 2"<<endl;
    cin>>jugador2;
}

