# Prova Sistemas Hardware Software

### Duração: 180 minutos
### 4 Questões

**ATENÇÃO:** O proctorio estará com tempo superior a 180 minutos, o tempo do proctorio é válido apenas para quem tem direito a tempo extra. Se não for o seu caso, entregue por favor com no máximo 180 minutos.

* Em cada questão é indicado um arquivo para colocar sua resposta.
* Dúvidas dos enunciados da prova serão resolvidos via chat. Fale direto com os professores para não tirar a atenção dos colegas.
* É permitido consultar o material da disciplina durante a prova e materiais em formato digital. Isto inclui suas próprias soluções aos exercícios de sala de aula, **mas não inclui materiais não digitais**. **Ficam proibidas consultas a materiais de outros alunos ou publicar questões na Internet.**
* A prova é individual. Qualquer consulta a outras pessoas durante a prova constitui violação ao Código de Ética do Insper.
* A prova deve ser um exercício intelectual seu. Fica proibido utilizar calculadora, programas ou qualquer outra ferramenta que resolva para você os exercícios (engenharia reversa ou conversão entre bases). Ex: você pode utilizar a calculadora para fazer operações, mas se utilizar a calculadora para converter automaticamente de uma base para outra, então você estará infringindo as regras.



## Questão 01

Neste exercício você deve realizar conversões entre bases.

**ATENÇÃO**: Neste exercício, fica proibido utilizar qualquer ferramenta (ex: calculadora, programa, site) que realize toda a conversão pra você. É permitido utilizar a calculadora para realizar contas simples (soma, divisão, subtração, etc.), mas lembre-se que a conversão deve ser um exercício intelectual seu!

Passe suas respostas para o arquivo `solucao.txt` e execute com

./q1 < solucao.txt

**Onde deixo minhas respostas?**: no arquivo `solucao.txt`

**Critérios de avaliação**: proporção de respostas **corretas**

**Pontos possíveis**: 2,0



## Questão 02

Este exercício contém três funções `func1`, `func2` e `func3`. Cada função recebe um parâmetro, faz algo e então retorna `1` ou `0`.

Seu objetivo é descobrir entradas que fazem as funções `func1`, `func2` e `func3` retornar 1.

Coloque as respostas no arquivo `solucao.txt` e rode

> `./q2 < solucao.txt`

- **Preciso fazer engenharia reversa?** Você vai precisar analisar o assembly para entender as operações envolvidas, mas não entregar esta tradução. Sua entrega deve ser apenas as entradas no arquivo `solucao.txt`.

**Onde deixo minhas respostas?**: no arquivo `solucao.txt`

**Critérios de avaliação**: proporção de respostas **corretas**



## Questão 3 e Questão 4

Faça engenharia reversa das funções `ex3` e `ex4` contidas, respectivamente, em `q3.o` e `q4.o`.

Coloque sua solução no arquivo `solucao.c`, chamando sua função de `ex3_solucao` e `ex4_solucao`.

Para compilar os testes e sua solução use

> `gcc -Og -g -fno-stack-protector solucao.c q3.o -lsystemd -lm -o q3`
ou
> `gcc -Og -g -fno-stack-protector solucao.c q4.o -lsystemd -lm -o q4`

Estes exercícios possuem testes automáticos para servir como auxílio.

Execute os testes automáticos com:
> `./q3`
ou
> `./q4`

**Critérios de avaliação**:
* 50% - passar em todos os testes (sem truques para burlá-los)
* 20% - acertar os tipos das chamadas de função
* 30% - código legível e sem construções estranhas (entregue a melhor versão do seu exercício, não precisa fazer if goto e depois C legível, entregue direto C legível!)

**Pontos possíveis**: 3,0 cada questão