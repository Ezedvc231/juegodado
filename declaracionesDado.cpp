 #include <iostream>
 using namespace std;
 #include "funcionDados.h"

  void menuJuego( ){
        int mostrarmenu;
      int opciones;
      cout<<"elegir opcion del menu:";
      cin>>opciones;
        while(opciones!=0){

      switch(opciones){
      case 1:
          cout<< "jugar"<<endl;
          cout<<"--------------";
          break;

          case 2:
              cout<<"estadistica"<<endl;
              cout<<"-----------------";
              break;

              case 0:
              cout<<"salir"<<endl;
              cout<<"salir"<<endl;
              break;
              default:
                cout<<"elige una de las opciones del juego"<<endl;
                break;



      }

        }






  }


     void Jugadores(){
          string jugador1;

          string jugador2;
          cout<<"ingrese el nombre del jugador 1"<<endl;
           cin>>jugador1;
            cout<<"ingrese el nombre del jugador 2"<<endl;
          cin>>jugador2;




      }

