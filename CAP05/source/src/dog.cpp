#include "dog.h"
#include <iostream>

Dog::Dog(std::string name_param): dog_name(name_param){
    std::cout<<"Construtor para o Dog: " << dog_name << " foi chamado " <<std::endl;
}

Dog::~Dog(){
    std::cout<<"Destrutor para o Dog: " << dog_name << " foi chamado " <<std::endl;
}
