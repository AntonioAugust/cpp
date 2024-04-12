#include"clientes.hpp"
#include<iostream>


Cliente::Cliente(int idade, std::string cpf, std::string nome){
    m_idade = idade;
    m_cpf = cpf;
    m_nome = nome;
}

void Cliente::mostraCliente(){
    std::cout << m_cpf <<std::endl;
    std::cout << m_idade << std::endl;
    std::cout << m_nome << std::endl;
}