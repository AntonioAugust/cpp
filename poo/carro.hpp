#ifndef carro_h
#define carro_h

#include<string>
#include"veiculo.hpp"


class Carro : public Veiculo{
private:

public:
    Carro(float pesoa, int anoa, int chassia, std::string modeloa, std::string localizacaoa);
    
};


#endif