function converterTemperatura() {
    const temperatura = parseFloat(document.getElementById('temperatura').value);
    const escalaDe = document.getElementById('escala-de').value;
    const escalaPara = document.getElementById('escala-para').value;
  
    let temperaturaConvertida;
  
    if (escalaDe === 'celsius') {
      if (escalaPara === 'fahrenheit') {
        temperaturaConvertida = (temperatura * 9/5) + 32;
      } else if (escalaPara === 'kelvin') {
        temperaturaConvertida = temperatura + 273.15;
      }
    } else if (escalaDe === 'fahrenheit') {
      if (escalaPara === 'celsius') {
        temperaturaConvertida = (temperatura - 32) * 5/9;
      } else if (escalaPara === 'kelvin') {
        temperaturaConvertida = (temperatura - 32) * 5/9 + 273.15;
      }
    } else if (escalaDe === 'kelvin') {
      if (escalaPara === 'celsius') {
        temperaturaConvertida = temperatura - 273.15;
      } else if (escalaPara === 'fahrenheit') {
        temperaturaConvertida = (temperatura - 273.15) * 9/5 + 32;
      }
    }
  
    document.getElementById('resultado').textContent = `Resultado: ${temperaturaConvertida} ${escalaPara}`;
  
    // Definir a cor de fundo gradiente
    let redValue = 0;
    if (temperaturaConvertida > 10) {
      redValue = 1;
    }
  
    let blueValue = 1;
    if (temperaturaConvertida < -273) {
      blueValue = 0;
    } else if (temperaturaConvertida <= 10) {
      blueValue = (temperaturaConvertida + 273) / 283;
    }
  
    const gradientColor = `linear-gradient(to bottom, rgba(0, 0, 255, ${blueValue}), rgba(255, 0, 0, ${redValue}))`;
    document.body.style.background = gradientColor;
  }

  function resetarConversao() {
    // Limpar os valores dos campos de entrada
    document.getElementById('temperatura').value = '';
    document.getElementById('escala-de').value = 'celsius';
    document.getElementById('escala-para').value = 'fahrenheit';
    document.getElementById('resultado').textContent = 'Resultado:';
  
    // Definir a cor de fundo para branco
    document.body.style.background = 'white';
  }
  