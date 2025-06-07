// #pragma once

#include "includes/file.h"

int main(void)
{
    std::string opcao_menu, opcao_hortifruti;
    VARIAVEIS variavel;

    do
    {
        menu_principal_mercado();

        std::printf("%s[MENU] Insira a opção desejada: %s", NEGRITO, RESET);
        std::getline(std::cin, opcao_menu);

        // pKill = &opcao_menu;

        if (opcao_menu == "1") // hortifruti
        {
            do // loop hortifruti
            {
                banner.banner_hortifruti();
                menu_hortifruti();

                std::printf("%s[%sHORTIFRUTI%s] Insira a opção desejada: %s", NEGRITO, VERMELHO_CLARO, RESET, RESET);
                std::getline(std::cin, opcao_hortifruti);

                op_horti(opcao_hortifruti);
                // retornarErro(opcao_hortifruti);

                if (opcao_hortifruti == "<<")
                {
                    // return false;
                    break;
                }

                if (opcao_hortifruti > "3")
                {
                    // std::cout << NEGRITO << VERMELHO << "Opção inválida!" << RESET << '\n';
                    std::printf("%s%sOpção inválida!%s%s\n", NEGRITO, VERMELHO_CLARO, RESET, RESET);
                    contador();
                }

                if (opcao_hortifruti == "2")
                { // legumes
                    do
                    {
                        banner.banner_legumes();
                        exibir_legumes_hortifruti();

                        // std::cout << NEGRITO << "[LEGUMES] Insira a opção desejada: " << RESET;
                        // #define COLORIR_PERGUNTAS_HORTIFRUT
                        std::printf("%s[%sLEGUMES%s] Insira a opção desejada: %s", NEGRITO, VERMELHO_CLARO, RESET, RESET);
                        std::getline(std::cin, variavel.op_legumes);

                        if (variavel.op_legumes == "<<")
                        {
                            break;
                        }
                    } while (1);

                } // fim legumes

                if (opcao_hortifruti == "3")
                { // verduras
                    do
                    {
                        banner.banner_verduras();
                        exibir_verduras_hortifruti();

                        // std::cout << NEGRITO << "[VERDURAS ] Insira a opção desejada: " << RESET;
                        std::printf("%s[%sLEGUMES%s] Insira a opção desejada: %s", NEGRITO, VERMELHO_CLARO, RESET, RESET);
                        std::getline(std::cin, variavel.op_verduras);

                        if (variavel.op_verduras == "<<")
                        {
                            break;
                        }
                    } while (1);

                } // fim verduras

            } while (1); // fim loop hortifruti
        }

        retornarMensagens(opcao_menu);

    } while (std::strcmp(opcao_menu.c_str(), "sair") != 0);

    return 0;
}
