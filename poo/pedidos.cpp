#include"pedidos.hpp"
#include<iostream>
#include<string>
using namespace std;
Pedidos::Pedidos(string clienteQueSolicita, string tipoDeTransporte, string localDeColeta, string localDeEntrega, float pesoDaCarga, int volumeDaCarga){
    m_clienteQueSolicita = clienteQueSolicita;
    m_tipoDeTransporte = tipoDeTransporte;
    m_localDeColeta = localDeColeta;
    m_localDeEntrega = localDeEntrega;
    m_pesoDaCarga = pesoDaCarga;
    m_volumeDaCarga = volumeDaCarga;

}

void Pedidos::mostraPedido(){
    std::cout << "Pedido:" << m_clienteQueSolicita << "," << m_tipoDeTransporte << "," << m_localDeColeta << "," << m_localDeEntrega << ","<< m_pesoDaCarga << ","<< m_volumeDaCarga << std::endl; 
}





