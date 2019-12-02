Este é um simples método de criptografar strings em c++, basicamente fazemos um XOR entre o caracter da string informada e um caracter "chave" definido no próprio código.

Como é impossível realizar a operação XOR entre strings, primeiramente precisamos transformar a string em caracteres separados (char).

Com isso, podemos realizar o XOR de cada caracter na string, veja abaixo um exemplo:

Digamos que o usuário digite "oi" e a nossa key seja a tecla numero 71 (letra G).

Então separamos os caracteres "o","i" e realizamos o XOR.

O código da tecla O é 79. (veja <a href="http://cherrytree.at/misc/vk.htm">aqui</a> os códigos)

            o = 1001111 --> binário de 79, sendo 79 a keycode da tecla "o"
            g = 1000111 --> binário de 71, sendo 71 a keycode da tecla "g"
              ____________
            BS= 0001000 --> Resultado do Xor / caracter criptografado
*BS significa backspace ou barra de espaço, é o caracter número 8 (ou em binario 0001000)*

OBS: A mesma operação se repete para o caracter i ou demais caracteres.

Para descriptografar é so realizar a mesma operação novamente, vejamos...

            BS= 0001000 --> Caracter criptografado pelo XOR / Barra de espaço
            g = 1000111 --> binário da nossa keycode (71 / caracter g)
            ______________
            o = 1001111 --> Resultado do Xor / caracter descriptografado (caracter original)

OBS: A mesma operação se repete para o caracter i ou demais caracteres.

Se você está se perguntando como isso pode ser útil, vou lhe dar um exemplo prático.

Supomos que você tenha um programa onde exista uma chave mestra definida como string, uma chave que acessa qualquer conta, algo como:
if (senha == "admin"){
  return true;
}

Esta string estaria exposta a editores hexadecimais, ou seja, facilmente vista por qualquer editor de binário.
Desta forma, é possível obfuscar a string do seu código para que os editores hex não a vejam.



-------------------------

Gustavo Gino Scotton    |   Engenharia da Computação - UFSC   |   gustavo.gino@outlook.com
