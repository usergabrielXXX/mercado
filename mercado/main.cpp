#include "includes/file.h"

int main(void)
{
    std::string opcao_menu;
    VARIAVEIS variavel;

    do
    {
        menu_principal_mercado();

        std::cout << NEGRITO << "[MENU] Insira a opção desejada: " << RESET;
        std::getline(std::cin, opcao_menu);

        std::string opcao_hortifruti;

        if (opcao_menu == "1") // hortifruti
        {
            do // loop hortifruti
            {
                banner.banner_hortifruti();
                menu_hortifruti();

                std::cout << NEGRITO << "[HORTIFRUTI] Insira a opção desejada: " << RESET;
                std::getline(std::cin, opcao_hortifruti);

                if (opcao_hortifruti == "1")
                { // frutas
                    do
                    {
                        banner.banner_frutas();
                        exibir_frutas_hortifruti();
                        std::cout << NEGRITO << "[FRUTAS] Insira a opção desejada: " << RESET;
                        std::getline(std::cin, variavel.op_fruta);

                        if (variavel.op_fruta == "<<")
                        {
                            break;
                        }
                    } while (1);
                } // fim frutas

                if (opcao_hortifruti == "<<")
                {
                    break;
                }

                if (opcao_hortifruti > "3")
                {
                    std::cout << NEGRITO << VERMELHO << "Opção inválida!" << RESET << '\n';
                    contador();
                }

                if (opcao_hortifruti == "2")
                { // legumes
                    do
                    {
                        banner.banner_legumes();
                        exibir_legumes_hortifruti();

                        std::cout << NEGRITO << "[LEGUMES] Insira a opção desejada: " << RESET;
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

                        std::cout << NEGRITO << "[VERDURAS ] Insira a opção desejada: " << RESET;
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

        /* fazer função que mata o programa independente da localização do user no programa */
        /* palavra-chave: kill */

    } while (std::strcmp(opcao_menu.c_str(), "sair") != 0);

    return 0;
}
