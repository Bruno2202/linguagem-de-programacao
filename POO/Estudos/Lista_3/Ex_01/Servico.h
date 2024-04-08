//Classe agregadas

class Servico {
    protected:
        int id;
        float horasTrab, vlrHora;
        bool status;
        Profissional profissional;
        Tarefa tarefa;
    public:
        // Servico();
        //Contrutor (modo de fazer inline)
        Servico(): id(0), horasTrab(0), vlrHora(0), status(false), profissional(Profissional()), tarefa(Tarefa()) {};
        Servico(int, float, float, bool, Profissional, Tarefa);

        int getId() {return this->id;}
        int getHorasTrab() {return this->horasTrab;}
        int getVlrHora() {return this->vlrHora;}
        int getStatus() {return this->status;}

        void setId(int id) {this->id = id;}
        void setHorasTrab(float horasTrab) {this->horasTrab = horasTrab;}
        void setVlrHora(float vlrHora) {this->vlrHora = vlrHora;}
        void setStatus(bool status) {this->status = status;}

        void imprimir(); 
        void ler();
};

//Construtor (modo de fazer declarativo)
// Servico::Servico() {
//     setId(0);
//     setHorasTrab(0);
//     setVlrHora(0);
//     setStatus(false);
//     Profissional();
//     Tarefa();
// }

Servico::Servico(int id, float horasTrab, float vlrHora, bool status, Profissional profissional, Tarefa tarefa) {
    setId(id);
    setHorasTrab(horasTrab);
    setVlrHora(vlrHora);
    setStatus(status);
    this->profissional = profissional;
    this->tarefa = tarefa;
}

void Servico::imprimir() {
    cout << "----DADOS DO SERVICO----" << endl
        << "ID: " << getId() << endl
        << "Horas trabalhadas: " << getHorasTrab() << endl
        << "Valor por hora: " << getVlrHora() << endl
        << "Status: " << (getStatus() ? "Ativo" : "Inativo" ) << endl
        << "Profissional responsavel: " << this->profissional.getNome() << endl
        << "Tarefa: " << this->tarefa.getDescricao() << endl << endl; 
}

void Servico::ler() {
    cout << "INFORME OS DADOS DO SERVICO: " << endl;
    cout << "ID: " << endl;
    cin >> id;
    cout << "Horas trabalhadas: " << endl;
    cin >> horasTrab;
    cout << "Valor por hora: " << endl;
    cin >> vlrHora;
    cout << "Status: " << endl;
    cin >> status;
}

