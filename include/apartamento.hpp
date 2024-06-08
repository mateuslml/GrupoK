#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "imovel.hpp"

class Apartamento : public Imovel {
private:
    int num_quartos;
    int num_vagas_garagem;
    int andar;
    static int nextId; // Contador estático para gerar IDs únicos

public:
    // Construtores
    Apartamento();
    Apartamento(const std::string& endereco, double area, double preco_aluguel, bool disponivel, int num_quartos, int num_vagas_garagem, int andar);

    // Métodos virtuais puros
    virtual void cadastrar() override;
    virtual void editar() override;
    virtual void remover() override;
    virtual void visualizar() const override;

    // Método para converter para vetor de strings
    virtual std::vector<std::string> toVector() const override;

    // Métodos getters
    int getNumQuartos() const;
    int getNumVagasGaragem() const;
    int getAndar() const;
};

#endif // APARTAMENTO_HPP
