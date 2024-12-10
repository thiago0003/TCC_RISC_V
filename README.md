# Análise de desempenho de pipeline para processadoes RISC-V 

## Como rodar os testes regressivos já criados 

Para esse caso, foram criados 3 processaores com os diferentes estágios (2, 3 e 4), no teste localizado em [`src/test/scala/vexriscv/`](src/test/scala/vexriscv/) foram colocado os casos bypass e barrielShifter, permutando-os para crias os diferentes cenários.

`sbt "testOnly vexriscv.TCC_pipeline"`

## Como gerar os Verilogs 

Para gerar os verilogs dos processadores simples com os diferentes estágios de pipeline podemos utilizar os comando abaixo:

- `sbt "runMain vexriscv.demo.GenTwoStage"`
- `sbt "runMain vexriscv.demo.GenThreeStage"`
- `sbt "runMain vexriscv.demo.GenFourStage"`



## Problemas 

### Murax 

Adicionamos o código logo abaixo da instanciação do processador `println(s"Número de estágios no pipeline: ${cpu.stages.length}")` (linha 244) para nos mostrar o número de estágios de pipeline que está sendo configurados (ou deveriam ser). Fizemos também uma alteração na instanciação do processador, adicionando `withMemoryStage = true` e `withWriteBackStage = false` de forma que controle a instanciação dos estágios do processador. Entretanto, ao rodar um teste com o código abaixo, mesmo alterando os estágio de pipeline os valores de saída são sempre `MURAX (RISC-V I) -> 0.67 DMIPS/MHz 0.5889170522110302 Coremark/MHz`


```
getDmips(
        name = s"MURAX (RISC-V I)",
        gen = SpinalVerilog(Murax(MuraxConfig.default)),

        testCmd = "make clean run REDO=10 IBUS=SIMPLE DBUS=SIMPLE CSR=no MMU=no DEBUG_PLUGIN=no MUL=no DIV=no COREMARK=yes"
    )
```
