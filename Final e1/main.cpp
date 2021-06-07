//Hugo Andreé Argueta Rodas
//0909-20-4492

//Declaracion de libreras 
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

//Declaracion de variable
int dimpila;//Variable dimension de pila
int op;//Variable opcion del menu
int pil[1];//Array pila

//Funcion para determinar el tamaño del vector
int Fsizepil(){
  
  cout<<"\n\tIngrese el limite de la pila: "; 
  cin>>dimpila;
}//Fin de la función

//Funcion para Insertar los datos 
int Fpush(){ 

  cout<<"\n\tPUSH"; 
  
  //For para el ingreso de datos
  for (int i=0; i<dimpila; i++){
  	
    cout<<"\n\tIngrese la calificacion del estudiante " << i+1 << ": "; 
    cin>>pil[i];
    
  }
}//Fin de la función

//Funcion para eliminar los datos 
int Fpop(){ 

  pil[dimpila-1] = 0;
  
  cout<<"\n\tPOP";
  cout <<"\n\tLa calificacion ha sido eliminada"; //Mensaje a usuario
  _getch();
}//Fin de la funcion

//Funcion para la Visualizacion de los datos 
int Fver(){

  do{  
    cout<<"\n\tCalificacion del estudiante " << dimpila << ": " << pil[dimpila-1];//datos
    dimpila--; }
    while (dimpila!=0);
    cout<<"\n\n";
   _getch();
}//Fin de la funcion

int main(){ 

  do{ 
      system("cls"); //limpiar la pantallla

//Menu de opciones
    cout<<"\n\t      MENU PRINCIPAL";
    cout<<"\n\t 1. Establecer tamano de array ";
    cout<<"\n\t 2. Funcion PUSH               ";
    cout<<"\n\t 3. Funcion POP                ";
    cout<<"\n\t 4. Visualizar pila            ";
    cout<<"\n\t 5. Finalizar                  ";

  
    cout<<"\n\t Elija una Opcion: ";
    cin>>op;
    system("cls"); //limpiar la pantallla
    
    switch(op){
    	
      case 1: system("cls"); //limpiar pantalla
        Fsizepil(); //Llamado de la funcion
        break;
        
      case 2:system("cls"); //limpiar pantalla
        Fpush(); //Llamado de la funcion
        break;
        
      case 3:system("cls"); //limpiar pantalla
        Fpop(); //Llamado de la funcion
        break;
        
      case 4:system("cls"); //limpiar pantalla
        Fver(); //Llamado de la funcion
        break;
        
      case 5: break; 
        
      default:{
      
		cout<<"\tOpcion incorrecta"; //Mensaje de opcion desconocida
		_getch();//detener el porgrama
		 break; }
    }
  } while(op!=5);//Finalizacion del do-while
}//Finalización del menú

