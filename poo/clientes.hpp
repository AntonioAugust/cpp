#ifndef clientes_h
#define clientes_h
#include<string>

class Cliente{
private:
    int m_idade;
    std::string m_cpf;
    std::string m_nome;

public:

    Cliente(int idade, std::string cpf, std::string nome);
    void mostraCliente();


};







#endif