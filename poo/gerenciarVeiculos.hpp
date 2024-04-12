#ifndef gerenciarVeiculos_h
#define gerenciarVeiculos_h

#include<list>
#include<veiculo.hpp>

class ListaVeiculos{
private:
    std::list<Veiculo>cabeca;
public:
    ListaVeiculos();
    void adicionarVeiculo();
};

#endif