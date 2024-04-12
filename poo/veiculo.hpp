#ifndef veiculo_h
#define veiculo_h

#include<string>

class Veiculo{
private:
    float m_peso;
    int m_ano;
    int m_chassi;
    std::string m_modelo;
    std::string m_localizacao;

public:
    Veiculo(float peso, int ano, int chassi, std::string modelo, std::string localizacao);
    std::string getModelo();
    //void adicionarVeiculo();
    //void removerVeiculo();
    //void buscarVeiculo_id(int id);
    //void buscarVeiculo_localizacao(std::string localizacao);

};

#endif