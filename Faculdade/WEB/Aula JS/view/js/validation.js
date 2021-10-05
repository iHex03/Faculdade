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

    if(typeof(idade) != 'number')
    {
        // alert(typeof(idade));
    }

    if(typeof(telefone) != 'number')
    {
        // alert(typeof(telefone));
    }



}