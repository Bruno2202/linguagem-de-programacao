class Servico {
    private:
        int id, profissional, tarefa;
        float horasTrab, vlrHora;
        char status;

    public:
        Servico();
        Servico(int, int, int, float, float, char);

        int getId() {return id;};
        int getProfissional() {return profissional;};
        int getTarefa() {return tarefa;};
        float getHorasTrab() {return horasTrab;};
        float getVlrHora() {return vlrHora;};
        char getStatus() {return status;};

        void setId(int);
        void setProfissional(int);
        void setTarefa(int);
        void setHorasTrab(float);
        void setVlrHora(float);
        void setStatus(char);

        void imprimir();
        void ler();

        ~Servico() {};
};

Servico::Servico() {
    this->id = 0;
    this->profissional = 0;
    this->tarefa = 0;
    this->horasTrab = 0.0;
    this->vlrHora = 0.0;
    this->status = ' ';
}

Servico::Servico(int id, int profissional, int tarefa, float horasTrab, float vlrHora, char status) {
    this->id = id;
    this->profissional = profissional;
    this->tarefa = tarefa;
    this->horasTrab = horasTrab;
    this->vlrHora = vlrHora;
    this->status = status;
}

void Servico::setId(int id) {
    this->id = id;
}

void Servico::setProfissional(int profissional) {
    this->profissional = profissional;
}

void Servico::setTarefa(int tarefa) {
    this->tarefa = tarefa;  
}

void Servico::setHorasTrab(float horasTrab) {
    this->horasTrab = horasTrab;  
}

void Servico::setVlrHora(float vlrHora) {
    this->vlrHora = vlrHora;  
}

void Servico::setStatus(char status) {
    this->status = status;  
}

void Servico::imprimir() {
    cout << "SERVICO: " << endl 
        << "ID: " << id << endl
        << "profissional: " << profissional << endl
        << "tarefa: " << tarefa << endl
        << "horasTrab: " << horasTrab << endl
        << "vlrHora: " << vlrHora << endl
        << "status" << status << endl << endl;
}

void Servico::ler() {
    cout << "Informe o Servico: " << endl;
    cout << "ID: " << endl; 
    cin >> id;
    cout << "profissional: " << endl; 
    cin >> profissional;
    cout << "tarefa: " << endl; 
    cin >> tarefa;
    cout << "horasTrab: " << endl; 
    cin >> horasTrab;
    cout << "vlrHora: " << endl; 
    cin >> vlrHora;
    cout << "status: " << endl; 
    cin >> status;
    cout << endl << endl;
}