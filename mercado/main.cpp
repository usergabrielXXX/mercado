/* arquivo-pai: main.cpp */

#include "includes/file.h"

int main(void)
{
    std::string opcao_menu;

    do
    {
        banner_menu();
        menu_principal_mercado();

        std::cout << "Insira a opção desejada: ";
        std::getline(std::cin, opcao_menu);

        retornarMensagens(opcao_menu);

    } while (std::strcmp(opcao_menu.c_str(), "sair") != 0);

    return 0;
}
