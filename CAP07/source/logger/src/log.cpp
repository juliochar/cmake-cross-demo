#include "log.h"
#include <iostream>

void log_data(const char* message, LogType lt){
    auto value = ((10 <=> 20) > 0);

    switch(lt){
        case LogType::MESSAGE:
            std::cout<<"Mensagem: "<<message<<std::endl;
            break;
        case LogType::WARNING:
            std::cout<<"AVISO: "<< message <<std::endl;
            break;
        case LogType::FATAL_ERROR:
            std::cout<<"Erro Fatal: "<<message<<std::endl;
            break;

        default:
            break;
            
    }
    
}