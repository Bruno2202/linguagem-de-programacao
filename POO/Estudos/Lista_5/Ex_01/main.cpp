#include <iostream>
#include <string.h>

using namespace std;

#include "Pais.h"
#include "Uva.h"
#include "Fabricante.h"   
#include "Vinho.h"

int main() {
    Uva u1(1, "Uva verde", "Roxo", Pais(1, "Brasil"));
    Vinho v1(1, 1312.99, "Vinho Stage", Fabricante(1, "Stage Corporation"), u1);
}