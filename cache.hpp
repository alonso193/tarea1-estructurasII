#ifndef CACHE_H
#define CACHE_H
#endif
#include <iostream>
#include <math.h>
using namespace std;


class Cache{
private:
    int tamano_cache;
    int tamano_bloque;
    int asociatividad;
    int tamano_de_direccion = 32;
    int numero_de_bloques;
    int numero_de_sets;
    double byte_offset;
    double index;
    int **cache;
    int direccion[];
    int tag[];
public:
    //constructor
    Cache(int asociatividad, int tamano_cache, int tamano_bloque){
        this -> asociatividad = asociatividad;
        this -> tamano_cache = tamano_cache;
        this -> tamano_bloque = tamano_bloque;
    }
    //métodos de la clase
    void setCache();
    void createCache();
    void limpiarCache();
    void calcularTag();
    void simulacion();
};

//se encarga de calcular los parámetros del cache con base en los parámetros ingresados
void Cache::setCache(){
    std::cout << "asociatividad: "<< asociatividad << std::endl;
    std::cout << "tamano_cache: "<<tamano_cache << std::endl;
    std::cout << "tamano_bloque: "<<tamano_bloque << std::endl;
    numero_de_bloques = (tamano_cache)/(tamano_bloque);
    numero_de_sets = (numero_de_bloques)/(asociatividad);
    byte_offset = log2(tamano_bloque);
    index = log2(numero_de_sets);
    std::cout << "byte_offset: "<< byte_offset << std::endl;
    std::cout << "numero_de_bloques: "<< numero_de_bloques << std::endl;
    std::cout << "numero_de_sets: "<< numero_de_sets << std::endl;
    std::cout << "index: "<< index << std::endl;
}

//crea una matriz con el tamaño correspondiente a la cantidad de sets y la asociatividad
void Cache::createCache(){
    cache = new int *[numero_de_sets];
    for(int i = 0; i < numero_de_sets; i++){
        cache[i] = new int[asociatividad];
    }
    for(int i = 0; i < numero_de_sets; i++){
        for(int j = 0; j < asociatividad; j++){
            cache[i][j] = 0;
        }
    }
}

//se encarga de poner en cero todos los bloques del cache para "limpiarla"
void Cache::limpiarCache() {
    //inicializa la matriz en ceros
    for(int i = 0; i < numero_de_sets; i++){
        for(int j = 0; j < asociatividad; j++){
            std::cout << cache[i][j];
        }
        std::cout << " " << std::endl;
    }
}

void Cache::calcularTag(){
    //aqui debería de ir el método que calcula los tags tanto del bloque presente en cache como del que se estra trayendo
    //pero no se como hacerlo
    int corrimiento = index + byte_offset;
    for (int i = 0; i < corrimiento; i++) {
        /* code */
    }
}

void Cache::simulacion(){
    //aquí debe ir código que se encargue de extraer linea por linea las direcciones del archivo
    /* código */ //la dirección debe ir guardada en la variable entera llamada "dirección" en forma de arreglo
    //luego se debe llamar al método "calcularTag(direccion)" enciando como parámetro "direccion"

}
