#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <cstring>
#include <algorithm>
#include <fstream>
#include <chrono>
#include <thread>
#include "banners.h"

#define TEMPO 1000

BANNERS banner;

void contador(void)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(TEMPO));
}

bool mensagemSaida(const std::string &s)
{
    if (std::strcmp(s.c_str(), "sair") == 0)
    {
        std::cout << NEGRITO << ITALICO << "\nObrigado por usar este programa! " << RESET << "\U0001F603" << '\n';
    }

    return true;
}

void retornarMensagens(const std::string &s)
{
    mensagemSaida(s);
}



#endif // FILE_H
