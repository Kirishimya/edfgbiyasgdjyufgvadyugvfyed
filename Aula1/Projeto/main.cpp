#include "Autor.hpp"
#include "Livro.hpp"
#include "Revista.hpp"
#include "Cliente.hpp"

int main ()
{
    Autor autor;
    Livro livro;
    Revista revista;
    Cliente cliente;

    autor.setNome ("Joan MARIO");
    autor.setDataNascimento (9, 12, 2077);
    autor.setGenero ("Programador");
    autor.setNacionalidade ("Jupiteriano");

    livro.setTitulo ("Escrivão das Galáxias");
    livro.setAutor (autor);
    livro.setAnoDePublicacao (8436);
    livro.setNumeroDeEdicao (40028922);
    livro.setNumeroDePaginas (99999);

    revista.setTitulo ("Nókia 4.0");
    revista.setEditora ("Relansos Marquinhos");
    revista.setAnoDePublicacao (8455);
    revista.setNumeroDePaginas (10);
    revista.setNumeroDeEdicao (12345678);

    cliente.setNome ("Energaldo");
    cliente.setEmail ("malaverios404@reg.som");
    cliente.setTelefone ("77 95 59555-12354");
    cliente.setIdade (198);

    livro.imprimirInformacoes ();
    revista.imprimirInformacoes ();
    cliente.imprimirInformacoes ();

    

    return 0;
}