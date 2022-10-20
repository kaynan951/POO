#include <iomanip>
#include <iostream>
#include <string>
#include "superheroi.h"

int main() {

    SuperHeroi *sh = new SuperHeroi("kaynan", "masculino", 28, "cearense", "interior", "bizoro do cao", true, false, false, "tabaco", "amor", "super forca");
    sh -> printSuperHeroi();

}