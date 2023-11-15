function inserirAluno(){

var matricula = prompt('Digite a matrícula do aluno:')
var nome = prompt('Digite o nome do aluno:')
var B1 = parseFloat(prompt('Digite a nota do 1º Bimestre do aluno:'))
var B2 = parseFloat(prompt('Digite a nota do 2º Bimestre do aluno:'))
var media = ((B1 + B2) / 2)
alert('A média do aluno é ' + media)
var faltas = parseInt(prompt('Digite a quantidade de faltas do aluno):'))



var tabela = document.querySelector("body > main > table")

var linha = tabela.InsertRow(-1)

linha.insertCell(0).innerText = matricula
linha.insertCell(1).innerText = nome
linha.insertCell(2).innerText = B1
linha.insertCell(3).innerText = B2
linha.insertCell(4).innerText = media
linha.insertCell(5).innerText = faltas

}