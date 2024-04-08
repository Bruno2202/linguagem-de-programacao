#include <iostream>

using namespace std;

#include "Especialidade.h"
#include "Profissional.h"
#include "Servico.h"
#include "Tarefa.h"
#include "TipoTarefa.h"

int main() {
    Especialidade e1(1, 1, "Escrever");
    e1.imprimir();
    e1.ler();
    e1.imprimir();
    e1.setId(2);
    e1.setQtd(2);
    e1.setDescricao("Ler em publico");
    cout << e1.getId() << " // " << e1.getQtd() << " // " << e1.getDescricao() << endl << endl << endl;

    Profissional p1(1, 1, "Pedro", "12/2/2005");
    p1.imprimir();
    p1.ler();
    p1.imprimir();
    p1.setId(2);
    p1.setEspecialidade(2);
    p1.setNome("Bruno");
    p1.setNascimento("22/02/2005");
    cout << p1.getId() << " // " << p1.getEspecialidade()<< " // " << p1.getNome() << " // " << p1.getNascimento() << endl << endl << endl;

    Servico s1(1, 1, 0, 0.5, 100.05, 'S');
    s1.imprimir();
    s1.ler();
    s1.imprimir();
    s1.setId(2);
    s1.setProfissional(2);
    s1.setTarefa(1);
    s1.setHorasTrab(1.5);
    s1.setStatus('N');
    cout << s1.getId() << " // " << s1.getProfissional()<< " // " << s1.getTarefa() << " // " << s1.getHorasTrab()  << " // " << s1.getVlrHora() << " // " << s1.getStatus() << endl << endl << endl;

    Tarefa t1(1, 1, 1, 1, 5.1, "Limpar a pia");
    t1.imprimir();
    t1.ler();
    t1.imprimir();
    t1.setId(2);
    t1.setTipo(2);
    t1.setTarefa(2);
    t1.setQtdeTrabalhada(30);
    t1.setValorHora(500.10);
    t1.setDescricao("Lavar louca");
    cout << t1.getId() << " // " << t1.getTipo()<< " // " << t1.getTarefa() << " // " << t1.getQtdeTrabalhada()  << " // " << t1.getValorHora() << " // " << t1.getDescricao() << endl << endl << endl;

    TipoTarefa tT1(1, "Manutencao");
    tT1.imprimir();
    tT1.ler();
    tT1.imprimir();
    tT1.setId(2);
    tT1.setDescricao("Limpeza");
    cout << tT1.getId() << " // " << tT1.getDescricao() << endl << endl << endl;
}