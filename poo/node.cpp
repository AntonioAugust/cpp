#include"node.hpp"

Node :: Node(){
    caminhao = nullptr;
    car = nullptr;
    prox = nullptr;
}

Node :: Node(Caminhao *tipoVeiculo){
    caminhao = tipoVeiculo;
    car = nullptr;
    prox = nullptr;

}

Node :: Node(Carro *tipoVeiculo){
    caminhao = nullptr;
    car = tipoVeiculo;
    prox = nullptr;
}