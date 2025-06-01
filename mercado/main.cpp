/* arquivo-pai: main.cpp */

#include "includes/file.h"

int main(void)
{
    std::string opcao_menu;

    // EMOJIS_PRODUTOS_FLV* emojis = new EMOJIS_PRODUTOS_FLV();
    // std::shared_ptr<EMOJIS_PRODUTOS_FLV> emojis();

    do
    {
        menu_principal_mercado();

        std::cout << "Insira a opção desejada: ";
        std::getline(std::cin, opcao_menu);

        retornarMensagens(opcao_menu);
        tratar_opcao_menu_principal(opcao_menu);

    } while (std::strcmp(opcao_menu.c_str(), "sair") != 0);

    // delete emojis; emojis = nullptr;

    return 0;
}
