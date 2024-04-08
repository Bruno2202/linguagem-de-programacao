#include <iostream>
#include <string>

using namespace std;

#include "TipoImovel.h"
#include "Imovel.h"
#include "Profissao.h"
#include "Locador.h"
#include "Locacao.h"

int main() {
    Imovel i1;
    i1.imprimirImovel();
    i1.lerImovel();
    i1.imprimirImovel();

    Imovel i2(1, "Rua Churusbango Churusbago", "Vila vilalva", "Extrema", true, TipoImovel(1, "Residencial"));
    i2.imprimirImovel();
    i2.imprimirTipoImovel();

    Locador l1;
    l1.imprimir();

    Locador l2(1, "Bruno", "Assis", "Sao Paulo", 19, 5200, Profissao(1, "Desenvolvedor"));
    l2.imprimir();
    l2.imprimirProfissao();

    Locacao loc1;
    loc1.imprimirLocacao();

    Locacao loc2(1, 50000, "25/12/2024", i2, l2);
    loc2.imprimirLocacao();
    loc2.aumentoPadrao();
    loc2.imprimirLocacao();
    loc2.aumentoValor(10000);
    loc2.imprimirLocacao();
}