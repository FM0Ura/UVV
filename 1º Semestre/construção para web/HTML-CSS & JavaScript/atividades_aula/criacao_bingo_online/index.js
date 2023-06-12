function criarTabela() {
  var area_cartelas= document.querySelector('cartelas');
  var tabela = document.createElement('table');
  area_cartelas.appendChild(tabela); 

  var thead = document.createElement('thead');
  var tbody;

  for (var i = 0; i < 5; i++) {
    tbody = document.createElement('tbody');

    for (var j = 0; j < 5; j++) {
      var th = document.createElement('th');
      var td = document.createElement('td');
      // Adicione conteúdo aos elementos 'th' e 'td' se necessário

      thead.appendChild(th);
      tbody.appendChild(td);
    }

    tabela.appendChild(tbody);
  }

  tabela.appendChild(thead);
}
