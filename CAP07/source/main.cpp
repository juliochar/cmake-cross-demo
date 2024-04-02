#include <iostream>
#include "dog.h"
#include "operations.h"
#include "log.h"

int main(){
   
    double result = add(10,70);
    std::cout<< "result: " << result<< std::endl;

    Dog dog1("Coxinha");
    dog1.print_info();

    log_data("Olá.. aqui.", LogType::FATAL_ERROR);

    return 0;
}