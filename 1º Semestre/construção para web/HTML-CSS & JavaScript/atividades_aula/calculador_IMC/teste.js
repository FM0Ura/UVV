function calcularIMC() {

    var pesoKG = parseFloat(prompt('Digite seu peso em KG:'))
    var altura = parseFloat(prompt('Digite sua altura em metros:'))
    var IMC = pesoKG / (altura ** 2)
    alert('Seu IMC é ' + IMC.toFixed(2))

}

calcularIMC()

