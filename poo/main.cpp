#include"clientes.cpp"
#include"pedidos.cpp"
#include"caminhao.cpp"
#include"veiculo.cpp"
#include"carro.cpp"
#include"lista.cpp"
#include"node.cpp"

#include <iostream>

int main(){
    //Cliente primerioCliente(18, "021-312-412-21", "Pedro Marques");
    //primerioCliente.mostraCliente();
    //Pedidos primeiroPedido("Marcos", "caminhao", "Rua:tres", "Rua: minha casa", 152.31f , 10);
    //primeiroPedido.mostraPedido();

    Caminhao meuCaminhao(130.42f, 2000, 32135321, "fk", "uruguai");

    Carro vectra(234.12f, 2001, 412312, "n sei", "alegrete");

    Lista myList(); // funciona com           Lista myList;

    myList.adicionarVeiculo(&meuCaminhao);




    return 0;
}