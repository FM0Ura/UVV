function calcularIMC() {

    var peso = parseFloat(prompt('Digite seu peso em KG:'))
    var altura = parseFloat(prompt('Digite sua altura em metro:'))
    var IMC = peso / altura ** 2
    alert('Seu IMC é ' + IMC.toFixed(2))
    
    if (IMC < 18.5) {
        alert('Você está na classificação MAGREZA (Obesidade GRAU 0)')
    }
    else
        if (IMC >= 18.5 && IMC <= 24.9) {
            alert('Você está na classificação NORMAL (Obesidade GRAU 0)')
        }
        else
            if (IMC >= 25 && IMC <= 29.9) {
                alert('Você está na classificação LEVEMENTE ACIMA DO PESO(Obesidade GRAU 0)')
            }
    
            else
                if (IMC >= 30 && IMC <= 34.9) {
                    alert('Você está na classificação OBESO (Obesidade GRAU I)')
                }
    
                else
                    if (IMC >= 35 && IMC <= 39.9) {
                        alert('Você está na classificação OBESIDADE SEVERA (Obesidade GRAU II)')
                    }
                    else
                        if (IMC >= 40) {
                            alert('Você está na classificação OBESIDADE MÓRBIDA(Obesidade GRAU III)')
                        }
}

calcularIMC()

