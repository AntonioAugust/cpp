#ifndef lista_h
#define lista_h
#include"node.hpp"


class Lista{
private:
    Node* cabeca;
public:
    Lista();
    void adicionarVeiculo(Caminhao *tipoVeiculo);
    void adicionarVeiculo(Carro *tipoVeiculo);


};




#endif