#include<iostream>
#include<cstdlib>
#include<ctime>
#
/*este programa genera matriz 3*3 al azar*/
int main(){
    char matriz[3][3];//aqui guardamos los numeros
    int fil,col;
    char palabra[10];
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);//inicializar el generador de numeros al
    //genero la matriz de letras al azar
    for(fil=0;fil<3;fil++){
    for(col=0;col<3;col++){
		  matriz[fil][col]=rand()%25+65;
		  std::cout<<matriz[fil][col];
	  }
	  std::cout<<"\n";
	}
	//leemos la palabra
	std::cout<<"Introduce una palabra: ";
	std::cin>>palabra;
	//medimos la longitud de la palabra
	longitud=strlen(palabra);
	//recorro las posiciones y vuelco letra a letra la palabra
	for(col=posy;col<posy+longitud;co++){
        matriz[posx][col]=palabra[col-posy];
    }
	
	std::cout<<"la palabra mide: "<<longitud;
	std::cout<<"\nToca cualquier tecla para salir";
	std::cin>>salir;
	return 0;
}
                                                                                                                         
