#ifndef pedidos_h
#define pedidos_h
#include<string>
using namespace std;

class Pedidos{
private:
    string m_clienteQueSolicita;
    string m_tipoDeTransporte;
    string m_localDeColeta;
    string m_localDeEntrega;
    float m_pesoDaCarga;
    int m_volumeDaCarga;

public:
    Pedidos(string clienteQueSolicita, string tipoDeTransporte, string localDeColeta, string localDeEntrega, float pesoDaCarga, int volumeDaCarga);
    void mostraPedido();

};

#endif