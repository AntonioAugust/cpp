#include"lista.hpp"

Lista::Lista(){
    cabeca = nullptr;
}

void Lista :: adicionarVeiculo(Caminhao *tipoVeiculo){
    Node* novo = new Node(tipoVeiculo);
    
    if(cabeca == nullptr){
        cabeca = novo;
        return;
    }

    Node* aux = cabeca;
    while(aux->prox != nullptr){        
        aux = aux->prox;
    }
    aux->prox = novo;

}


void Lista :: adicionarVeiculo(Carro *tipoVeiculo){
    Node* novo = new Node(tipoVeiculo);
    
    if(cabeca == nullptr){
        cabeca = novo;
        return;
    }

    Node* aux = cabeca;
    while(aux->prox != nullptr){        
        aux = aux->prox;
    }
    aux->prox = novo;


}