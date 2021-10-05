function validarCampos()
{
    var nome = document.getElementsByName("labelNome")[0].value;
    var idade = document.getElementsByName("labelIdade")[0].value;
    var endereco = document.getElementsByName("labelEndereco")[0].value;
    var telefone = document.getElementsByName("labelTelefone")[0].value;


    if(nome.length > 40)
    {
        alert("Erro ao registrar nome: mais de 40 caracteres!");
    }

    if(idade <= 0)
    {
        alert("Erro ao registrar idade: valor menor ou igual a zero!");
    }

    var aux1 = typeof telefone;
    var aux2 = typeof idade;

    if(aux1.indexOf("number") == -1)
    {
        alert("Erro ao registrar telefone: valor inserido não é um número!");
    }

    if(aux2.indexOf("number") == -1)
    {
        alert("Erro ao registrar idade: valor inserido não é um número!");
    }
}