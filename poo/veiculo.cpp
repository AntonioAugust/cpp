#include "veiculo.hpp"
#include<string>

Veiculo::Veiculo(float peso, int ano, int chassi, std::string modelo, std::string localizacao){
    m_peso = peso;
    m_ano = ano;
    m_chassi = chassi;
    m_modelo = modelo;
    m_localizacao = localizacao;

}

std::string Veiculo::getModelo(){
    return this->m_modelo;

}


