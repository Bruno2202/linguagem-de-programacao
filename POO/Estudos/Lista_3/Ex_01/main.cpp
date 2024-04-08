#include <iostream>
#include <string>

using namespace std;

#include "Especialidade.h"
#include "Profissional.h"
#include "TipoTarefa.h"
#include "Tarefa.h"
#include "Servico.h"

int main() {
    // // Maneira 1
    // Especialidade e1(1, 1, "Comunicativo");
    // Profissional p1(1, "Bruno", "22/02/2005", e1);

    // Maneira 2
    Profissional p1(1, "Bruno", "23/02/2005", Especialidade(1, 1, "Responsavel"));

    // // Maneira 1
    // TipoTarefa tp1(1, "Manutencao");
    // Tarefa t1(1, "Verficar se o codigo está sendo executado da forma correta", 100.5, 8, tp1);

    // Maneira 2
    Tarefa t1(1, "Verficar se o codigo esta sendo executado da forma correta", 100.5, 8, TipoTarefa(1, "Manutencao"));

    Servico s1(1, 16.5, 100.5, true, p1, t1);
    s1.imprimir();

    Servico s2(2, 16.5, 100.5, true, Profissional(2, "Lucas", "21/02/2000", Especialidade(2, 1, "Comunicativo")), Tarefa(2, "Manuetancao dos computadores", 200, 6, TipoTarefa(1, "Manutencao")));
    s2.imprimir();
}