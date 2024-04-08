class Funcionario {
    private:
        float salario;
        Pessoa dadosFunc;

    private:
        Funcionario(): salario(0.0), dadosFunc(Pessoa()) {};
        Funcionario(float, Pessoa);

        void lerFunc();
        void impFunc();
        
        void setSalario(float novoSal);
        void setNomeFunc(string novoNome) {dadosFunc.setNome(novoNome);}

        float ret_Salario() const {return salario;}
        string get_NomeFunc() const {return dadosFunc.retNome();}
};

Funcionario::Funcionario(float salario, Pessoa pessoa) {
    setSalario(salario);
}

void Funcionario::setSalario(float novoSal) {
    salario = novoSal;
}

void Funcionario::lerFunc() {
    cout << "Nome: " << endl;
    string nome;
    cin >> nome;
    dadosFunc.setNome(nome);
    cout << "Salario: " << endl;
    cout << "Idade: " << endl;
    int idade;
    cin >> idade;
    dadosFunc.setIdade(idade);
    cout << endl;
}

void Funcionario::impFunc() {
    cout << "====DADOS DO FUNCIONARIO===="
        << "Nome: " <<  get_NomeFunc() << endl
        << "Salario: " << ret_Salario() << endl
        << "Idade: " << dadosFunc.retIdade() << endl << endl;
}
