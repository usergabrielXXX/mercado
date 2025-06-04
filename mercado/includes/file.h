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
VARIAVEIS variavel;

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
    int n = 6;
    n = std::atoi(s.c_str());
    if(n > 6){
        std::printf("%s%sErro! Essa opção não existe no MENU%s%s.\n", NEGRITO, VERMELHO_CLARO, RESET, RESET);
        contador();
    }

    mensagemSaida(s);
}

void op_horti(const std::string &op_frutas)
{
    if (op_frutas == "1")
    { // frutas
        do
        {
            banner.banner_frutas();
            exibir_frutas_hortifruti();
            // std::cout << NEGRITO << "[FRUTAS] Insira a opção desejada: " << RESET;
            std::printf("%s[%sFRUTAS%s] Insira a opção desejada: %s", NEGRITO, VERMELHO_CLARO, RESET, RESET);
            std::getline(std::cin, variavel.op_fruta);

            if (variavel.op_fruta == "<<")
            {
                break;
            }
        } while (1);
    } // fim frutas
}

int retornarErro(const std::string &erro)
{

    if (erro > "3")
    {
        // std::cout << NEGRITO << VERMELHO << "Opção inválida!" << RESET << '\n';
        std::printf("%sOpção inválida!%s\n", NEGRITO, RESET);
        contador();
    }

    return 0;
}

#endif // FILE_H
