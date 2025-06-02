#include "includes/file.h"

int main(void)
{
    std::string opcao_menu, op_fruta;

    do
    {
        menu_principal_mercado();

        std::cout << "Insira a opção desejada: ";
        std::getline(std::cin, opcao_menu);

        std::string opcao_hortifruti;

        if (opcao_menu == "1")
        {
            do // loop hortifruti
            {
                banner.banner_hortifruti();
                menu_hortifruti();

                std::cout << "Escolha o produto que deseja: ";
                std::getline(std::cin, opcao_hortifruti);

                if (opcao_hortifruti == "1")
                {
                    do // loop frutas
                    {
                        banner.banner_frutas();
                        exibir_frutas_hortifruti();
                        std::cout << "Escolha o produto: ";
                        std::getline(std::cin, op_fruta);
                        
                        if(op_fruta == "mh")
                        {
                            break;
                        }
                    } while (1); // fim loop frutas
                }

                if (opcao_hortifruti == "menu")
                {
                    break;
                }

                if (opcao_hortifruti > "3")
                {
                    std::cout << NEGRITO << VERMELHO << "Opção inválida!" << RESET << '\n';
                    contador();
                }

            } while (1); // fim loop hortifruti
        }

        retornarMensagens(opcao_menu);

    } while (std::strcmp(opcao_menu.c_str(), "sair") != 0);

    return 0;
}
