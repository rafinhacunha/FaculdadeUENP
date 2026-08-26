const input1 = document.querySelector("#valor1")
const input2 = document.querySelector("#valor2")

const botao_somar = document.querySelector("#somar")
const botao_subtrair = document.querySelector("#subtrair")
const botao_multiplicar = document.querySelector("#multiplicar")
const botao_dividir = document.querySelector("#dividir")

const resultado = document.querySelector("#resultado")

function somar(){
    const numero1 = Number(input1.value);
    const numero2 = Number(input2.value);

    resultado.textContent = "Resultado: " + (numero1 + numero2);
}

function subtrair(){
    const numero1 = Number(input1.value);
    const numero2 = Number(input2.value);

    resultado.textContent = "Resultado: " + (numero1 - numero2);
}

function multiplicar(){
    const numero1 = Number(input1.value);
    const numero2 = Number(input2.value);

    resultado.textContent = "Resultado: " + (numero1 * numero2);
}

function dividir(){
    const numero1 = Number(input1.value);
    const numero2 = Number(input2.value);

    resultado.textContent = "Resultado: " + (numero1 / numero2);
}

botao_somar.addEventListener("click", somar);

botao_subtrair.addEventListener("click", subtrair);

botao_multiplicar.addEventListener("click", multiplicar);

botao_dividir.addEventListener("click", dividir);
