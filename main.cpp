#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cache.hpp"
using namespace std;
int main(int argc, char const *argv[]) {
    
    srand(time(NULL));

    //guarda los parametros enviados en variables tipo enteroo
    int asociatividad = atoi(argv[1]);
    int tamano_cache = atoi(argv[2]);
    int tamano_bloque = atoi(argv[3]);
	
    //para estar seguro de que se tomaron bien los parametros se imprimen
    cout << "asociatividad: "<< asociatividad << endl;
    cout << "tamaño de cache: "<< tamano_cache << endl;
    cout << "tamaño de bloque: "<< tamano_bloque << endl;

    //se crea el objeto
    Cache miCache(asociatividad, tamano_cache, tamano_bloque);

    //se llama a los diferentes metodos necesarios
    miCache.setCache();
    miCache.createCache();
    miCache.limpiarCache();
	miCache.simulacion();
    return 0;
}
