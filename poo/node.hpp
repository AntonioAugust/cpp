#ifndef node_h
#define node_h
#include"caminhao.hpp"
#include"carro.hpp"


class Node{

public:
    Caminhao* caminhao;
    Carro* car;
    Node();
    Node(Caminhao* tipoVeiculo);
    Node(Carro* tipoVeiculo);


    Node* prox;
};


#endif