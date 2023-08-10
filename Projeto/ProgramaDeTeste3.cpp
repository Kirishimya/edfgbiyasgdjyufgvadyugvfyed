#include "Autor.hpp"
#include "Livro.hpp"
#include "Revista.hpp"
#include "Cliente.hpp"
#include "FuncUteis.hpp"
#include "LivroDidatico.hpp"

int main ()
{
    Autor autor;
    Livro livro;
    Revista revista;
    Cliente cliente;
    LivroDidatico livroDidatico;
    autor.setNome ("Joan MARIO");
    autor.setDataNascimento (9, 12, 2077);
    autor.setGenero ("Programador");
    autor.setNacionalidade ("Jupiteriano");

    cliente.setNome ("Energaldo");
    cliente.setEmail ("malaverios404@reg.som");
    cliente.setTelefone ("77 95 59555-12354");
    cliente.setIdade (198);

    livroDidatico.setTitulo ("Churrascologia");
    // livroDidatico.setDisciplina ("Gastronomia");
    // livroDidatico.setNivelDeEnsino (8001);
    livroDidatico.setAutor (autor);
    livroDidatico.setAnoDePublicacao (8888);
    livroDidatico.setNumeroDeEdicao (89563232);
    livroDidatico.setNumeroDePaginas (99);
    livroDidatico.setUltimoCliente(cliente);

    livro.setTitulo ("Escrivão das Galáxias");
    livro.setAutor (autor);
    livro.setAnoDePublicacao (8436);
    livro.setNumeroDeEdicao (40028922);
    livro.setNumeroDePaginas (99999);
    livro.setUltimoCliente(cliente);

    revista.setTitulo ("Nókia 4.0");
    revista.setEditora ("Relansos Marquinhos");
    revista.setAnoDePublicacao (8455);
    revista.setNumeroDePaginas (10);
    revista.setNumeroDeEdicao (12345678);
    revista.setUltimoCliente(cliente);

    imprimirInformacoes(&autor);
    imprimirInformacoes(&livroDidatico);
    imprimirInformacoes(&livro);
    imprimirInformacoes(&revista);
    imprimirInformacoes(&cliente);

    return 0;
}