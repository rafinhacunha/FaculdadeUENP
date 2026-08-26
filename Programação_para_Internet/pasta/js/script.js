const campoCep = document.querySelector('#cep');
const botaoBuscar = document.querySelector('#btnBuscar');
const logradouro = document.querySelector('#logradouro');
const bairro = document.querySelector('#bairro');
const cidade = document.querySelector('#cidade');
const estado = document.querySelector('#estado');

async function buscarEndereco(cep){
    const resposta = await fetch(`https://viacep.com.br/ws/${cep}/json/`)

    const dados = await resposta.json();

    return dados;
}

botaoBuscar.addEventListener('click', async function(){

    const cep = campoCep.value;

    const dados = await buscarEndereco(cep);

    if(dados.erro){
        logradouro.textContent = "CEP não encontrado";
        bairro.textContent = "";
        cidade.textContent = "";
        estado.textContent = "";

        return;
    }

        logradouro.textContent = `Rua: ${dados.logradouro}`;
        bairro.textContent = `Bairro: ${dados.bairro}`;
        cidade.textContent = `Cidade: ${dados.localidade}`;
        estado.textContent = `Estado: ${dados.estado}`;
})
