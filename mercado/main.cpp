#include "includes/file.h"

int main(void)
{
    std::string opcao_menu;



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
                printar_produtos_frutas();
                
                std::cout << "Escolha o produto que deseja: ";
                std::getline(std::cin, opcao_hortifruti);

                if (opcao_hortifruti == "voltar")
                {
                    break;
                }

            } while (1); // fim do loop hortifruti
        }

        retornarMensagens(opcao_menu);

    } while (std::strcmp(opcao_menu.c_str(), "sair") != 0);

    return 0;
}
