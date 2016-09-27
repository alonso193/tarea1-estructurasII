
#include <stdio.h>
#include <stdlib.h>
#include "cache.hpp"
int main(int argc, char const *argv[]) {
    int asociatividad = atoi(argv[1]);
    int tamano_cache = atoi(argv[2]);
    int tamano_bloque = atoi(argv[3]);
    std::cout << "asociatividad: "<< asociatividad << std::endl;
    std::cout << "tamaño de cache: "<< tamano_cache << std::endl;
    std::cout << "tamaño de bloque: "<< tamano_bloque << std::endl;
    Cache miCache(asociatividad, tamano_cache, tamano_bloque);
    miCache.setCache();
    miCache.createCache();
    return 0;
}
