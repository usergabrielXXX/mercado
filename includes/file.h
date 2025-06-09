#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <cstring>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <chrono>
#include <thread>
#include "banners.h"

#define TEMPO 1000

struct BANNERS banner;
struct VARIAVEIS variavel;
struct PAGAMENTOS pagamentos;

void op_pagamentos(void)
{
    size_t tam = std::min({pagamentos.formasDePagamentos.size()});
    for (size_t i = 0; i < tam; i++)
    {
        std::cout << '[' << i << ']' << '\b' << pagamentos.formasDePagamentos[i] << '\n';
    }
}

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
    if (n > 6)
    {
        printf("%s%sErro! Essa opção não existe no MENU%s%s.\n", NEGRITO, VERMELHO_CLARO, RESET, RESET);
        contador();
    }

    mensagemSaida(s);
}

void op_frutas(const std::string &op_frutas)
{
    if (op_frutas == "1")
    { // frutas
        do
        {
            banner.banner_frutas();
            exibir_frutas_hortifruti();
            printf("%s%sVENDA SOMENTE POR KG!%s\n", NEGRITO, ITALICO, RESET);
            printf("%s[%sFRUTAS%s] Insira a opção desejada: %s", NEGRITO, VERMELHO_CLARO, RESET, RESET);
            std::getline(std::cin, variavel.op_fruta);

            if (variavel.op_fruta == "<<")
            {
                break;
            }

            int converter = std::stoi(variavel.op_fruta);

            for (int i = 0; i < 10; i++)
            {
                converter = i;
                // converter = std::stoi(variavel.op_fruta);
            }

            if (converter == 1)
            {
                std::cout << "teste" << '\n';
                contador();
            }

            if (converter == 2)
            {
                std::cout << "teste - 2" << '\n';
                contador();
            }

        } while (1);
    } // fim frutas
}

void op_legumes(const std::string &op_legumes)
{
    if (op_legumes == "2")
    {
        do
        {
            banner.banner_legumes();
            exibir_legumes_hortifruti();

            printf("%s%sVENDA SOMENTE POR KG!%s\n", NEGRITO, ITALICO, RESET);
            printf("%s[%sLEGUMES%s] Insira a opção desejada: %s", NEGRITO, VERMELHO_CLARO, RESET, RESET);
            std::getline(std::cin, variavel.op_legumes);

            if (variavel.op_legumes == "<<")
            {
                break;
            }
        } while (1);
    }
}

void op_verduras(const std::string &op_verduras)
{
    if (op_verduras == "3")
    { // verduras
        do
        {
            banner.banner_verduras();
            exibir_verduras_hortifruti();

            printf("%s%sVENDA SOMENTE POR KG!%s\n", NEGRITO, ITALICO, RESET);
            printf("%s[%sLEGUMES%s] Insira a opção desejada: %s", NEGRITO, VERMELHO_CLARO, RESET, RESET);
            std::getline(std::cin, variavel.op_verduras);

            if (variavel.op_verduras == "<<")
            {
                break;
            }

        } while (1);

    } // fim verduras
}

int retornarErro(const std::string &erro)
{

    if (erro > "3")
    {
        // std::cout << NEGRITO << VERMELHO << "Opção inválida!" << RESET << '\n';
        std::printf("%s%sOpção inválida!%s%s\n", NEGRITO, VERMELHO_CLARO, RESET, RESET);
        contador();
    }

    return 0;
}

void op_menu(const std::string &op_menu)
{
    std::string opcao_hortifruti;
    if (op_menu == "1") // hortifruti
    {
        do // loop hortifruti
        {
            banner.banner_hortifruti();
            menu_hortifruti();

            std::printf("%s[%sHORTIFRUTI%s] Insira a opção desejada: %s", NEGRITO, VERMELHO_CLARO, RESET, RESET);
            std::getline(std::cin, opcao_hortifruti);

            op_frutas(opcao_hortifruti);
            op_legumes(opcao_hortifruti);
            op_verduras(opcao_hortifruti);

            if (opcao_hortifruti == "<<")
            {
                // return false;
                break;
            }

            retornarErro(opcao_hortifruti);

        } while (1); // fim loop hortifruti
    }
}

#endif // FILE_H
