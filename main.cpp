
#include <stdio.h>
#include <stdlib.h>
#include "cache.hpp"
int main(int argc, char const *argv[]) {
    //guarda los parametros enviados en variables tipo enteroo
    int asociatividad = atoi(argv[1]);
    int tamano_cache = atoi(argv[2]);
    int tamano_bloque = atoi(argv[3]);

    //para estar seguro de que se tomaron bien los parametros se imprimen
    std::cout << "asociatividad: "<< asociatividad << std::endl;
    std::cout << "tamaño de cache: "<< tamano_cache << std::endl;
    std::cout << "tamaño de bloque: "<< tamano_bloque << std::endl;

    //se crea el objeto
    Cache miCache(asociatividad, tamano_cache, tamano_bloque);

    //se llama a los diferentes metodos necesarios
    miCache.setCache();
    miCache.createCache();
    miCache.limpiarCache();
    return 0;
}
