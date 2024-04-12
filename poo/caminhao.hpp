#ifndef caminhao_h
#define caminhao_h


#include<string>
#include"veiculo.hpp"


class Caminhao : public Veiculo{
private:

public:
    Caminhao(float pesoa, int anoa, int chassia, std::string modeloa, std::string localizacaoa);
    
};

#endif