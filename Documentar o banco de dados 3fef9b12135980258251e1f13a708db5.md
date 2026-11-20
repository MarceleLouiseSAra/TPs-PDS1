# Documentar o banco de dados

Status: Em andamento
Data: 19 de outubro de 2026 14:49

<aside>

## O que é preciso?

- [ ]  Modelo Entidade-Relacionamento (ME-R): permite visualizar como os dados estão organizados e como as entidades se relacionam no sistema de informações;
    - [x]  Entidades;
    - [x]  Descrição das Entidades;
    - [x]  Relacionamentos.
- [ ]  Diagrama(s) Entidade-Relacionamento (DE-R): descreve entidades, atributos e os relacionamentos mantidos entre as entidades;
- [ ]  Diagrama Lógico de Dados (DLD): representação gráfica que ilustra a estrutura lógica de um banco de dados e que orienta a sua implementação efetiva;
- [ ]  Dicionário de Dados: documento que descreve detalhadamente os elemntos de um banco de dados, como tabelas, campos, relacionamentos e regras de negócios associadas.
</aside>

<aside>

## Módulos

administracao

contratos

fornecedores

funcionarios

postos

produtos

seguros

veiculos

ccv

departamento

lavagem

motivo

oficina

relatorios

</aside>

<aside>

## 2.1 - ME-R

### 2.1.1 - Entidades

administracao_contratos

administracao_fornecedores

administracao_funcionarios

administracao_funcionarios_enderecos

administracao_funcionarios_movimentacoes_custo

administracao_funcionarios_clientes_projetos

administracao_funcionarios_epis

administracao_funcionarios_ferias

administracao_funcionarios_cursos_capacitacoes

administracao_funcoes

administracao_postos_abastecimentos

administracao_produtos

administracao_produtos_servicos_defeitos

administracao_produtos_almoxarifados

administracao_produtos_itens_kit

administracao_seguros

administracao_seguros_valores_franquia

administracao_veiculos

administracao_veiculos_orcamentos

administracao_veiculos_motoristas_autorizados

ccv_agendamentos

departamentos

ordens_lavagem

lavagem_produtos

lavagem_servicos

lavagem_mao_de_obra

motivos

ordens_servico

oficina_os_defeitos

oficina_documentos_fiscais

oficina_mao_de_obra

oficina_pneus

### 2.1.2 - Descrição das Entidades

**administracao_contratos**(<u>codigo</u>, contrato, dataEmissao, dataVencimento, status, nomeResponsavel, telefoneResponsavel, emailResponsavel, nomeGestor, telefoneGestor, nomeGestor, telefoneGestor, emailGestor, empresa, centroCustoProjeto, diretoria, gerenciaGeral, gerenciaArea)

**administracao_fornecedores**(<u>codigo</u>, nome, cpfCnpj, telefone)

**administracao_funcionarios**(<u>codigo</u>, nome, apelido, status, matricula, dataCadastro, estadoCivil, nacionalidade, dataNascimento, naturalidade, nomePai, nomeMae, dataAdmissao, dataDemissao, horasDisponiveis, salario, salarioHora, comissaoPercentual, maximo, categoria, turno, funcao, contrato, telefoneResidencial, telefoneComercial, celular, email, empresa, unidade, departamento, cpf, pis, siape, identidade, orgaoEmissor, banco, numeroConta, numeroAgencia, tituloEleitor, zonaEleitoral, secaoEleitoral, carteiraTrabalho, numeroSerieCtps, numeroCertificado, numeroCnh, tipoCnh, prontuario, emissaoCnh, vencimentoCnh, primeiraHabilitacao, numeroPortaria, vencimentoPortaria)

**administracao_funcionarios_enderecos**(<u>codigo</u>, cep, logradouro, numero, complemento, enderecoPadrao, funcionarioCodigo)

**administracao_funcionarios_movimentacoes_custo**(<u>codigo</u>, data, horasTrabalhadas, horaExtra, valorAPagar, funcionarioCodigo)

**administracao_funcionarios_clientes_projetos**(<u>codigo</u>, cliente, sistema, grupoGerencia, esforco, funcionarioCodigo)

**administracao_funcionarios_epis**(<u>codigo</u>, tipoEpi, numeroCa, dataEntrega, funcionarioCodigo)

**administracao_funcionarios_ferias**(<u>codigo</u>, dataFerias, numeroDias, dataSegundaParte, funcionarioCodigo)

**administracao_funcionarios_cursos_capacitacoes**(<u>codigo</u>, curso, dataConclusao, dataVencimento, capacitacao, funcionarioCodigo)

**administracao_funcoes**(<u>codigoFuc</u>, funcao)

**administracao_postos_abastecimentos**(<u>codigo</u>, localidade, dataHoraAbastecimento, dataHoraLancamento,veiculoPlaca, frota, familia, status, marcacaoAnterior, marcacaoAtual, kmImprodutivo, kmPercorrido, consumoPorKm, produtoBomba, quantidade, valorUnitario, total, motorista, combustivel, fornecedor, notaFiscal, departamento, unidade, limiteTanque)

**administracao_produtos**(<u>codigo</u>, nome, grupo, familia, tipo, medida, marca, modelo, grupoGerencial, codBarra, codFabricante, paralelo, ncm, exTipi, genero, cst, codBarraTrib, unidTrib, qtdTrib, codCliente, orcamento, distanciaPrevista, validade, estoqueMinimo, estoqueMaximo, valorFixo, estoqueGiro, calculaImposto, foto, localAutocad)

**administracao_produtos_servicos_defeitos**(<u>codigo</u>, servico, defeito, produtoCodigo)

**administracao_produtos_almoxarifados**(<u>codigo</u>, almoxarifado, saldo, minimo, maximo, valorCompra, valorMedio, valorImposto, vale, produtoCodigo)

**administracao_produtos_itens_kit**(<u>codigo</u>, quantidade, produtoReferenciaCodigo, produtoCodigo)

**administracao_seguros**(<u>codigo</u>, tipo, veiculoPlaca, modelo, unidade, dataCadastro, vencimento, sinalizacao, unidadeSinalizacao, assistencia24h, ativo, notaFiscal, descricao, contrato, apolice, numeroItemApolice, dataEmissao, valorApolice, vigencia, franquia, cancelamento, parcelas, classeBonus, bonusPercentual, corretora, telefoneCorretora, contatoCorretora, seguradora, telefoneSeguradora, contatoSeguradora, qtdeSinistros, ultimoSinistro, dataSinistro, arquivamento, envioDocumentos, chegadaDocumentos)

**administracao_seguros_valores_franquia**(<u>codigo</u>, franquia, valor, seguroCodigo)

**administracao_veiculos**(<u>codigo</u>, frota, placa, modelo, marca, situacao, ultimaPreventivaF12, placaAnterior, anoFabricacao, anoModelo, centroResponsabilidade, centroCusto, ordemInterna, limiteTanque, limitePassageiro, limiteCarga, dataAtualizacao, origemAtualizacao, valorMaoDeObra, valorPecas, familia, local, licenciamento, licenciamentoAnterior, combustivel, preventiva, trocaOleo, cor, grupo, motorizacao, numeroMotor, cilindro, numeroCaixa, severidade, transmissao, tipoMarcacao, tipoEixo, tipoVeiculo, unidade, departamento, chassi, codRenavam, numeroApolice, patrimonio, conservacao, patio, cartao, setor, fornecedor, proprietario, responsavel, seguradora, estado, radio, notaCompra, serieCompra, dataCompra, notaVenda, serieVenda, dataVenda, valorVenda, valorMercado, valorCompra, aquisicao, dataInclusaoBase, dataCancelamento, marcacaoAtual, bancoAlienacao, funcao, veiculoDesmobilizado, localLavagem, diaLavagem, horaLavagem, horasTrabalhadas, velocidadeRef, consumo, indiceManutencao, veiculoReserva)

**administracao_veiculos_orcamentos**(<u>codigo</u>, ano, sistema, valor, produtoServico, motivo, veiculoCodigo)

**administracao_veiculos_motoristas_autorizados**(<u>codigo</u>, motorista, email, inicio, final, veiculoCodigo)

**ccv_agendamentos**(<u>codigo</u>, dataSolicitacao, origem, destino, tipoAgendamento, dataHoraSaida, dataHoraChegada, status, motivo, usuarioSolicitante, emailSolicitante, telefoneSolicitante, faxSolicitante, unidadeSolicitante, setorSolicitante, veiculoPlaca, motorista, auxiliar, servico, hodometroAnterior, hodometroSaida, hodometroChegada), 

**departamentos**(<u>codigoDep</u>, nome, unidade)

**ordens_lavagem**(<u>numeroOs</u>, tipoLancamento, status, data, dataEntrega, motivo, responsavelNome, responsavelTelefone, veiculoPlaca, unidade, departamento, tanqueNivel, marcacaoAtual, marcacaoAnterior, local, observacoes)

**lavagem_produtos**(<u>id</u>, produtoId, almoxarifadoOrigem, quantidade)

**lavagem_servicos**(<u>id</u>, servicoId)

**lavagem_mao_de_obra**(<u>id</u>, nome, dataExecucao, tempoGastoMinutos)

**motivos**(<u>codigoMot</u>, nome)

**ordens_servico**(<u>numeroOs</u>, status, dataAbertura, dataEntrega, dataFechamento, motivo, processo, responsavelNome, responsavelTelefone, veiculoPlaca, unidade, departamento, tanqueNivel, marcacaoAtual, marcacaoAnterior, comentarios)

**oficina_os_defeitos**(<u>id</u>, codigo, nome)

**oficina_documentos_fiscais**(id, documento, dataEmissao, fornecedor)

**oficina_mao_de_obra**(id, nome, dataAtuacao, tempoGasto, valor)

**oficina_pneus**(id, codFogo, posicao, status, vidaUtil, acumuladoKm)

**oficina_catalogo_defeitos**(<u>id</u>, codigo, nome)

### 2.1.3 - Relacionamentos

#### 2.1.3.1 - Relacionamentos de `administracao_funcionarios`

<aside>

```tsx
@OneToMany(
	() => EnderecoFuncionarioModel,
	(endereco) => endereco.funcionario,
	{ cascade: true }
)
enderecos?: EnderecoFuncionarioModel[];
```

```tsx
@ManyToOne(
	() => FuncionarioModel, 
	(funcionario) => funcionario.enderecos,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('FUNCIONARIO_ENDERECO_CODIGOFUN', 'funcionarioCodigo', 'CODIGOFUN') })
funcionario!: FuncionarioModel;
```

`administracao_funcionarios` TEM `administracao_funcionarios_enderecos`

Uma instância de `administracao_funcionarios` possui zero ou várias instâncias de `administracao_funcionarios_enderecos`, e uma instância de `administracao_funcionarios_enderecos` está associada a apenas uma instância de `administracao_funcionarios`.

Cardinalidade: (1:N)

Lado 1: `administracao_funcionarios`

Lado N: `administracao_funcionarios_enderecos`

</aside>

<aside>

```tsx
@OneToMany(
	() => MovimentacaoCustoModel,
	(movimentacao) => movimentacao.funcionario,
	{ cascade: true }
)
movimentacoesCusto?: MovimentacaoCustoModel[];
```

```tsx
@ManyToOne(
	() => FuncionarioModel,
	(funcionario) => funcionario.movimentacoesCusto,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('FUNCIONARIO_CUSTO_CODIGOFUN', 'funcionarioCodigo', 'CODIGOFUN') })
funcionario!: FuncionarioModel;
```

`administracao_funcionarios` TEM `administracao_funcionarios_movimentacoes_custo`

Uma instância de `administracao_funcionarios` possui zero ou várias instâncias de `administracao_funcionarios_movimentacoes_custo`, e uma instância de `administracao_funcionarios_movimentacoes_custo` está associada a apenas uma instância de `administracao_funcionarios`.

Cardinalidade: (1:N)

Lado 1: `administracao_funcionarios`

Lado N: `administracao_funcionarios_movimentacoes_custo`

</aside>

<aside>

```tsx
@OneToMany(
	() => ClienteProjetoModel,
	(clienteProjeto) => clienteProjeto.funcionario,
	{ cascade: true }
)
clientesProjetos?: ClienteProjetoModel[];
```

```tsx
@ManyToOne(
	() => FuncionarioModel, 
	(funcionario) => funcionario.clientesProjetos,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('FUNCIONARIO_CLIENTE_CODIGOFUN', 'funcionarioCodigo', 'CODIGOFUN') })
funcionario!: FuncionarioModel;
```

`administracao_funcionarios` TEM `administracao_funcionarios_clientes_projetos` 

Uma instância de `administracao_funcionarios` possui zero ou várias instâncias de `administracao_funcionarios_clientes_projetos`, e uma instância de `administracao_funcionarios_clientes_projetos` está associada a apenas uma instância de `administracao_funcionarios`.

Cardinalidade: (1:N)

Lado 1: `administracao_funcionarios`

Lado N: `administracao_funcionarios_clientes_projetos`

</aside>

<aside>

```tsx
@OneToMany(
	() => EpiModel,
	(epi) => epi.funcionario,
	{ cascade: true }
)
episEntregues?: EpiModel[];
```

```tsx
@ManyToOne(
	() => FuncionarioModel,
	(funcionario) => funcionario.episEntregues,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('FUNCIONARIO_EPI_CODIGOFUN', 'funcionarioCodigo', 'CODIGOFUN') })
funcionario!: FuncionarioModel;
```

`administracao_funcionarios` TEM `administracao_funcionarios_epis`

Uma instância de `administracao_funcionarios` possui zero ou várias instâncias de `administracao_funcionarios_epis`, e uma instância de `administracao_funcionarios_epis` está associada a apenas uma instância de `administracao_funcionarios`.

Cardinalidade: (1:N)

Lado 1: `administracao_funcionarios`

Lado N: `administracao_funcionarios_epis`

</aside>

<aside>

```tsx
@OneToMany(
	() => FeriasModel,
	(ferias) => ferias.funcionario,
	{ cascade: true }
)
periodosFerias?: FeriasModel[];
```

```tsx
@ManyToOne(
	() => FuncionarioModel,
	(funcionario) => funcionario.periodosFerias,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('FUNCIONARIO_FERIAS_CODIGOFUN', 'funcionarioCodigo', 'CODIGOFUN') })
funcionario!: FuncionarioModel;
```

`administracao_funcionarios` TEM `administracao_funcionarios_ferias`

Uma instância de `administracao_funcionarios` possui zero ou várias instâncias de `administracao_funcionarios_ferias`, e uma instâncias de `administracao_funcionarios_ferias` está associada a apenas uma instância de `administracao_funcionarios`.

Cardinalidade: (1:N)

Lado 1: `administracao_funcionarios`

Lado N: `administracao_funcionarios_ferias`

</aside>

<aside>

```tsx
@OneToMany(
	() => CursoCapacitacaoModel,
	(curso) => curso.funcionario,
	{ cascade: true }
)
cursosCapacitacoes?: CursoCapacitacaoModel[];
```

```tsx
@ManyToOne(
	() => FuncionarioModel,
	(funcionario) => funcionario.cursosCapacitacoes,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('FUNCIONARIO_CURSO_CODIGOFUN', 'funcionarioCodigo', 'CODIGOFUN') })
funcionario!: FuncionarioModel;
```

`administracao_funcionarios` TEM `administracao_funcionarios_cursos_capacitacoes`

Uma instância de `administracao_funcionarios` possui zero ou várias instâncias de `administracao_funcionarios_cursos_capacitacoes`, e uma instâncias de `administracao_funcionarios_cursos_capacitacoes` está associada a apenas uma instância de `administracao_funcionarios`.

Cardinalidade: (1:N)

Lado 1: `administracao_funcionarios`

Lado N: `administracao_funcionarios_cursos_capacitacoes`

</aside>

#### 2.1.3.2 - Relacionamentos de `administracao_produtos`

<aside>

```tsx
@OneToMany(
	() => ServicoDefeitoProdutoModel,
	(servicoDefeito) => servicoDefeito.produto,
	{ cascade: true }
)
servicosDefeitos?: ServicoDefeitoProdutoModel[];
```

```tsx
@ManyToOne(
	() => ProdutoModel,
	(produto) => produto.servicosDefeitos,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('PRODUTO_DEFEITO_FK', 'produtoCodigo') })
produto!: ProdutoModel;
```

`administracao_produtos` TEM `administracao_produtos_servicos_defeitos`

Uma instância de `administracao_produtos` possui zero ou várias instâncias de `administracao_produtos_servicos_defeitos`, e uma instâncias de `administracao_produtos_servicos_defeitos` está associada a apenas uma instância de `administracao_produtos`.

Cardinalidade: (1:N)

Lado 1: `administracao_produtos`

Lado N: `administracao_produtos_servicos_defeitos`

</aside>

<aside>

```tsx
@OneToMany(
	() => AlmoxarifadoProdutoModel,
	(almoxarifado) => almoxarifado.produto,
	{ cascade: true }
)
almoxarifados?: AlmoxarifadoProdutoModel[];
```

```tsx
@ManyToOne(
	() => ProdutoModel,
	(produto) => produto.almoxarifados,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('PRODUTO_ALMOX_PROD_COD', 'produtoCodigo') })
produto!: ProdutoModel;
```

`administracao_produtos` TEM `administracao_produtos_almoxarifados`

Uma instância de `administracao_produtos` possui zero ou várias instâncias de `administracao_produtos_almoxarifados`, e uma instâncias de `administracao_produtos_almoxarifados` está associada a apenas uma instância de `administracao_produtos`.

Cardinalidade: (1:N)

Lado 1: `administracao_produtos`

Lado N: `administracao_produtos_almoxarifados`

</aside>

<aside>

```tsx
@OneToMany(
	() => ItemKitModel,
	(item) => item.produtoKit,
	{ cascade: true }
)
itensKit?: ItemKitModel[];
```

```tsx
@ManyToOne(
	() => ProdutoModel,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('PRODUTO_KIT_PROD_COD', 'produtoReferenciaCodigo') })
produtoReferencia!: ProdutoModel;
```

`administracao_produtos` TEM `administracao_produtos_servicos_defeitos`

Uma instância de `administracao_produtos` possui zero ou várias instâncias de `administracao_produtos_servicos_defeitos`, e uma instâncias de `administracao_produtos_servicos_defeitos` está associada a apenas uma instância de `administracao_produtos`.

Cardinalidade: (1:N)

Lado 1: `administracao_produtos`

Lado N: `administracao_produtos_servicos_defeitos`

</aside>

#### 2.1.3.3 - Relacionamentos de `administracao_seguros`

<aside>

```tsx
@OneToMany(
	() => ValorFranquiaModel,
	(valor) => valor.seguro,
	{ cascade: true }
)
valoresFranquia?: ValorFranquiaModel[];
```

```tsx
@ManyToOne(
	() => SeguroModel,
	(seguro) => seguro.valoresFranquia,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('SEGURO_FRANQUIA_FK', 'seguroCodigo') })
seguro!: SeguroModel;
```

`administracao_seguros` TEM `administracao_seguros_valores_franquia`

Uma instância de `administracao_seguros` possui zero ou várias instâncias de `administracao_seguros_valores_franquia`, e uma instâncias de `administracao_seguros_valores_franquia` está associada a apenas uma instância de `administracao_seguros`.

Cardinalidade: (1:N)

Lado 1: `administracao_seguros`

Lado N: `administracao_seguros_valores_franquia`

</aside>

#### 2.1.3.4 - Relacionamentos de `administracao_veiculos`

<aside>

```tsx
@OneToMany(
	() => OrcamentoVeiculoModel,
	(orcamento) => orcamento.veiculo,
	{ cascade: true }
)
orcamentos?: OrcamentoVeiculoModel[];
```

```tsx
@ManyToOne(
	() => VeiculoModel,
	(veiculo) => veiculo.orcamentos,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('VEICULO_ORCAMENTO_PLACA', 'veiculoPlaca', 'PLACA') })
veiculo!: VeiculoModel;
```

`administracao_veiculos` TEM `administracao_veiculos_orcamentos`

Uma instância de `administracao_veiculos` possui zero ou várias instâncias de `administracao_veiculos_orcamentos`, e uma instâncias de `administracao_veiculos_orcamentos` está associada a apenas uma instância de `administracao_veiculos`.

Cardinalidade: (1:N)

Lado 1: `administracao_veiculos`

Lado N: `administracao_veiculos_orcamentos`

</aside>

<aside>

```tsx
@OneToMany(
	() => MotoristaAutorizadoModel,
	(motorista) => motorista.veiculo,
	{ cascade: true }
)
motoristasAutorizados?: MotoristaAutorizadoModel[];
```

```tsx
@ManyToOne(
	() => VeiculoModel,
	(veiculo) => veiculo.motoristasAutorizados,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('VEICULO_MOTORISTA_PLACA', 'veiculoPlaca', 'PLACA') })
veiculo!: VeiculoModel;
```

`administracao_veiculos` TEM `administracao_veiculos_motoristas_autorizados`

Uma instância de `administracao_veiculos` possui zero ou várias instâncias de `administracao_veiculos_motoristas_autorizados`, e uma instâncias de `administracao_veiculos_motoristas_autorizados` está associada a apenas uma instância de `administracao_veiculos`.

Cardinalidade: (1:N)

Lado 1: `administracao_veiculos`

Lado N: `administracao_veiculos_motoristas_autorizados`

</aside>

#### 2.1.3.5 - Relacionamentos de `ordens_lavagens`

<aside>

```tsx
@OneToMany(
	() => ProdutoModel,
	produto => produto.lavagem,
	{ cascade: true, eager: true }
)
produtos!: ProdutoModel[];
```

```tsx
@ManyToOne(
	() => LavagemModel,
	lavagem => lavagem.produtos,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('LAVAGEM_DEP_PRODUTO_FK', 'numeroOs') })
lavagem!: LavagemModel;
```

`ordens_lavagem` TEM `lavagem_produtos`

Uma instância de `ordens_lavagem` possui zero ou várias instâncias de `lavagem_produtos`, e uma instância de `lavagem_produtos` está associada a apenas uma instância de `ordens_lavagem`.

Cardinalidade: (1:N)

Lado 1: `ordens_lavagem`

Lado N: `lavagem_produtos`

</aside>

<aside>

```tsx
@OneToMany(
	() => ServicoModel,
	servico => servico.lavagem,
	{ cascade: true, eager: true }
)
servicos!: ServicoModel[];
```

```tsx
@ManyToOne(
	() => LavagemModel,
	lavagem => lavagem.servicos,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('LAVAGEM_DEP_SERVICO_FK', 'numeroOs') })
lavagem!: LavagemModel;
```

`ordens_lavagem` TEM `lavagem_servicos`

Uma instância de `ordens_lavagem` possui zero ou várias instâncias de `lavagem_servicos`, e uma instâncias de `lavagem_servicos` está associada a apenas uma instância de `ordens_lavagem`.

Cardinalidade: (1:N)

Lado 1: `ordens_lavagem`

Lado N: `lavagem_servicos`

</aside>

<aside>

```tsx
@OneToMany(
	() => MaoDeObraModel,
	mao => mao.lavagem,
	{ cascade: true, eager: true }
)
maoDeObra!: MaoDeObraModel[];
```

```tsx
@ManyToOne(
	() => LavagemModel,
	lavagem => lavagem.maoDeObra,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('LAVAGEM_DEP_MAO_DE_OBRA_FK', 'numeroOs') })
lavagem!: LavagemModel;
```

`ordens_lavagem` TEM `lavagem_mao_de_obra`

Uma instância de `ordens_lavagem` possui zero ou várias instâncias de `lavagem_mao_de_obra`, e uma instâncias de `lavagem_mao_de_obra` está associada a apenas uma instância de `ordens_lavagem`.

Cardinalidade: (1:N)

Lado 1: `ordens_lavagem`

Lado N: `lavagem_mao_de_obra`

</aside>

#### 2.1.3.6 - Relacionamentos de `oficina`

<aside>

```tsx
@OneToMany(
	() => OrdemServicoDefeitoModel,
	d => d.ordemServico,
	{ cascade: true, eager: true }
)
defeitos!: OrdemServicoDefeitoModel[];
```

```tsx
@ManyToOne(
	() => OrdemServicoModel,
	os => os.defeitos,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('OS_DEFEITO_CODIGOOS', 'numeroOs', 'CODIGOOS') })
ordemServico!: OrdemServicoModel;
```

`ordens_servico` TEM `oficina_os_defeitos`

Uma instância de `ordens_servico` possui zero ou várias instâncias de `oficina_os_defeitos`, e uma instâncias de `oficina_os_defeitos` está associada a apenas uma instância de `ordens_servico`.

Cardinalidade: (1:N)

Lado 1: `ordens_servico`

Lado N: `oficina_os_defeitos`

</aside>

<aside>

```tsx
@OneToMany(
	() => DocumentoFiscalModel,
	doc => doc.ordemServico,
	{ cascade: true, eager: true }
)
documentosFiscais!: DocumentoFiscalModel[];
```

```tsx
@ManyToOne(
	() => OrdemServicoModel,
	os => os.documentosFiscais,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('OS_DOCUMENTO_CODIGOOS', 'numeroOs', 'CODIGOOS') })
ordemServico!: OrdemServicoModel;
```

`ordens_servico` TEM `oficina_documentos_fiscais`

Uma instância de `ordens_servico` possui zero ou várias instâncias de `oficina_documentos_fiscais`, e uma instâncias de `oficina_documentos_fiscais` está associada a apenas uma instância de `ordens_servico`.

Cardinalidade: (1:N)

Lado 1: `ordens_servico`

Lado N: `oficina_documentos_fiscais`

</aside>

<aside>

```tsx
@OneToMany(
	() => MaoDeObraOSModel,
	mo => mo.ordemServico,
	{ cascade: true, eager: true }
)
maoDeObra!: MaoDeObraOSModel[];
```

```tsx
@ManyToOne(
	() => OrdemServicoModel,
	os => os.maoDeObra,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('OS_MAO_DE_OBRA_CODIGOOS', 'numeroOs', 'CODIGOOS') })
ordemServico!: OrdemServicoModel;
```

`ordens_servico` TEM `oficina_mao_de_obra`

Uma instância de `ordens_servico` possui zero ou várias instâncias de `oficina_mao_de_obra`, e uma instâncias de `oficina_mao_de_obra` está associada a apenas uma instância de `ordens_servico`.

Cardinalidade: (1:N)

Lado 1: `ordens_servico`

Lado N: `oficina_mao_de_obra`

</aside>

<aside>

```tsx
@OneToMany(
	() => PneuOSModel,
	pneu => pneu.ordemServico,
	{ cascade: true, eager: true }
)
pneus!: PneuOSModel[];
```

```tsx
@ManyToOne(
	() => OrdemServicoModel,
	os => os.pneus,
	{ onDelete: 'CASCADE' }
)
@JoinColumn({ name: nome('OS_PNEU_CODIGOOS', 'numeroOs', 'CODIGOOS') })
ordemServico!: OrdemServicoModel;
```

`ordens_servico` TEM `oficina_pneus`

Uma instância de `ordens_servico` possui zero ou várias instâncias de `oficina_pneus`, e uma instâncias de `oficina_pneus` está associada a apenas uma instância de `ordens_servico`.

Cardinalidade: (1:N)

Lado 1: `ordens_servico`

Lado N: `oficina_pneus`

</aside>

</aside>

<aside>

### 2.2 - DE-R

</aside>

<aside>

### 2.3 - DLD

[https://drive.google.com/file/d/1QMA9dNcYiMM7lqtOEH7-bNPyDTDrfDbW/view?usp=drive_web](https://drive.google.com/file/d/1QMA9dNcYiMM7lqtOEH7-bNPyDTDrfDbW/view?usp=drive_web)

</aside>

<aside>

## 2.4 - Dicionário de Dados

### 2.4.1 - Entidades

#### 2.4.1.1 - `administracao_funcionarios` (CGFUNCIO)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOFUN | Chave Primária, obrigatório | INT | N/A | Identificador |
| nome | NOME | Não-obrigatório | VARCHAR | (50) |  |
| apelido | APELIDO | Não-obrigatório | VARCHAR | (35) |  |
| status | STAATIVO | Não-obrigatório | VARCHAR | (38,0) |  |
| matricula | MATRICULA | Não-obrigatório | VARCHAR | (10) |  |
| dataCadastro | DTACADASTRO | Não-obrigatório | DATETIME | N/A |  |
| estadoCivil | ESTADOCIVIL | Não-obrigatório | VARCHAR |  |  |
| nacionalidade | NACIONALIDADE | Não-obrigatório | VARCHAR |  |  |
| dataNascimento | DTNASCIMENTO | Não-obrigatório | DATETIME |  |  |
| naturalidade | NATURALIDADE | Não-obrigatório | VARCHAR |  |  |
| nomePai | NOMEPAI | Não-obrigatório | VARCHAR |  |  |
| nomeMae | NOMEMAE | Não-obrigatório | VARCHAR |  |  |
| dataAdmissao | DTADMISSAO | Não-obrigatório | DATETIME | N/A |  |
| dataDemissao | DTDEMISSAO | Não-obrigatório | DATETIME | N/A |  |
| horasDisponiveis | HORASTRABALHO | Não-obrigatório | DECIMAL |  |  |
| salario | SALARIO | Não-obrigatório | DECIMAL |  |  |
| salarioHora | SALARIOHORA | Não-obrigatório | DECIMAL |  |  |
| comissaoPercentual | COMISSAO | Não-obrigatório | DECIMAL |  |  |
| maximo | MAXIMO | Não-obrigatório | DECIMAL |  |  |
| categoria | STAFUNCION | Não-obrigatório | VARCHAR |  |  |
| turno | CODIGOTUR | Não-obrigatório | VARCHAR |  |  |
| funcao | CODIGOFUC | Não-obrigatório | VARCHAR |  |  |
| contrato | CODIGOCLICONTRATO | Não-obrigatório | VARCHAR |  |  |
| telefoneResidencial |  | Não-obrigatório | VARCHAR |  |  |
| telefoneComercial |  | Não-obrigatório | VARCHAR |  |  |
| celular |  | Não-obrigatório | VARCHAR |  |  |
| email |  | Não-obrigatório | VARCHAR |  |  |
| empresa | CODIGOCLI | Não-obrigatório | VARCHAR |  |  |
| unidade | CODIGODEPUNI | Não-obrigatório | VARCHAR |  |  |
| departamento | CODIGODEP | Não-obrigatório | VARCHAR |  |  |
| cpf | CPF | Não-obrigatório | VARCHAR |  |  |
| pis | PIS | Não-obrigatório | VARCHAR |  |  |
| siape | SIAPE | Não-obrigatório | VARCHAR |  |  |
| identidade | INDENTIDADE | Não-obrigatório | VARCHAR |  |  |
| orgaoEmissor | ORGAO | Não-obrigatório | VARCHAR |  |  |
| banco | CODIGOBAN | Não-obrigatório | VARCHAR |  |  |
| numeroConta | CODIGOCONTA | Não-obrigatório | VARCHAR |  |  |
| numeroAgencia | AGENCIA | Não-obrigatório | VARCHAR |  |  |
| tituloEleitor | TITULOELEITOR | Não-obrigatório | VARCHAR |  |  |
| zonaEleitoral | TITULOZONA | Não-obrigatório | VARCHAR |  |  |
| secaoEleitoral | TITULOSECAO | Não-obrigatório | VARCHAR |  |  |
| carteiraTrabalho | CARTEIRAPRO | Não-obrigatório | VARCHAR |  |  |
| numeroSerieCtps | SERIEPROFIS | Não-obrigatório | VARCHAR |  |  |
| numeroCertificado | CODIGOCURSO | Não-obrigatório | VARCHAR |  |  |
| numeroCnh | NUMCNH | Não-obrigatório | VARCHAR |  |  |
| tipoCnh | TIPOCNH | Não-obrigatório | VARCHAR |  |  |
| prontuario | PRONTUARIOCNH | Não-obrigatório | VARCHAR |  |  |
| emissaoCnh | DTEMISSAOCNH | Não-obrigatório | DATETIME | N/A |  |
| vencimentoCnh | DTVENCTOCNH | Não-obrigatório | DATETIME | N/A |  |
| primeiraHabilitacao | DTPRIMEIRACNH | Não-obrigatório | DATETIME | N/A |  |
| numeroPortaria | NUMPROT | Não-obrigatório | VARCHAR |  |  |
| vencimentoPortaria | DTVENCTOPROT | Não-obrigatório | DATETIME | N/A |  |
</aside>

#### 2.4.1.2 - `administracao_funcionarios_enderecos` (CGENDERECO)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOENDER | Chave Primária, obrigatório | INT | N/A | Identificador |
| cep | CODIGOCEP | Não-obrigatório | VARCHAR | 10 | Código de endereçamento postal |
| logradouro | TIPO | Não-obrigatório | VARCHAR | 1 | Logradouro |
| numero | NUMERO | Não-obrigatório | DECIMAL | (38,0) | Número |
| complemento | COMPLEMENTO | Não-obrigatório | VARCHAR | 25 | Complemento |
| enderecoPadrao | PADRAO | Não-obrigatório | DECIMAL | (38,0) | Booleano que indica se a presente instância se trata do endereço padrão |
| telefoneResidencial | TELRESIDENCIAL | Não-obrigatório | VARCHAR |  |  |
| telefoneComercial | TELCOMERCIAL | Não-obrigatório | VARCHAR |  |  |
| celular | TELCELULAR | Não-obrigatório | VARCHAR |  |  |
| email | E_MAIL | Não-obrigatório | VARCHAR |  |  |
| funcionarioCodigo | CODIGOFUN | Chave Estrangeira, obrigatório | INT | N/A | Chave estrangeira que referencia a entidade ‘Funcionario’ |
</aside>

#### 2.4.1.3 - `administracao_funcionarios_movimentacoes_custo` (CGFUNCUSTO)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOFUNCUSTO | Chave primária, obrigatório | INT | N/A | Identificador |
| data | DATA | Não-obrigatório | DATETIME | N/A | Data da movimentação |
| horasTrabalhadas | HORATRABALHADA | Não-obrigatório | VARCHAR | 5 | Horas trabalhadas |
| horaExtra | HORAEXTRA | Não-obrigatório | VARCHAR | 5 | Hora extra |
| valorAPagar | APAGAR | Não-obrigatório | DECIMAL | (15,4) | Valor a pagar |
| funcionarioCodigo | CODIGOFUN | Chave Estrangeira, obrigatório | INT | N/A | Chave estrangeira que referencia a entidade ‘Funcionario’ |
</aside>

#### 2.4.1.4 - `administracao_funcionarios_clientes_projetos` (CGFUNCLIE)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOFUNCLIE | Chave Primária, obrigatório | INT | N/A | Identificador |
| cliente | CODIGOCLI | Não-obrigatório | DECIMAL | (38,0) |  |
| sistema | CODIGOSIT | Não-obrigatório | DECIMAL | (38,0) |  |
| grupoGerencia | CODIGOGGER | Não-obrigatório | DECIMAL | (38,0) |  |
| esforco | ESFORCO | Não-obrigatório | DECIMAL | (15,4) |  |
| funcionarioCodigo | CODIGOFUN | Chave Estrangeira, obrigatório | INT | INT | Chave estrangeira que referencia a entidade ‘Funcionario’ |
</aside>

#### 2.4.1.5 - `administracao_funcionarios_epis` (CGEPI)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOEPI | Chave Primária, obrigatório | INT | N/A | Identificador |
| tipoEpi | TIPO | Não-obrigatório | VARCHAR | 35 |  |
| numeroCa | CERTIFICADO | Não-obrigatório | DECIMAL | (38,0) |  |
| dataEntrega | DTENTREGA | Não-obrigatório | DATETIME | N/A |  |
| funcionarioCodigo | CODIGOFUN | Chave Estrangeira, obrigatório | INT | N/A | Chave estrangeira que referencia a entidade ‘Funcionario’ |
</aside>

#### 2.4.1.6 - `administracao_funcionarios_ferias` (CGFERIAS)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOFER | Chave Primária, obrigatório | INT | N/A | Identificador |
| dataFerias | DTFERIAS | Não-obrigatório | DATETIME | N/A |  |
| numeroDias | DIAS | Não-obrigatório | DECIMAL | (38,0) |  |
| dataSegundaParte | SEGUNDAFERIAS | Não-obrigatório | DATETIME | N/A |  |
| funcionarioCodigo | CODIGOFUN | Chave Estrangeira, obrigatório | INT | N/A | Chave estrangeira que referencia a entidade ‘Funcionario’ |
</aside>

#### 2.4.1.7 - `administracao_funcionarios_cursos_capacitacoes` (CGCURSO)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOCURSO | Chave Primária, obrigatório | INT | N/A | Identificador |
| curso | NOMECURSO | Não-obrigatório | VARCHAR | 100 |  |
| dataConclusao | DTCONCLUSAO | Não-obrigatório | DATETIME | N/A |  |
| dataVencimento | DTVENCIMENTO | Não-obrigatório | DATETIME | N/A |  |
| capacitacao | CURSOCAPACITACAO | Não-obrigatório | VARCHAR | 1 |  |
| funcionarioCodigo | CODIGOFUN | Chave Estrangeira, obrigatório | INT | N/A | Chave estrangeira que referencia a entidade ‘Funcionario’ |
</aside>

#### 2.4.2.1 - `administracao_produtos` (CGPRODUT)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOPRO | Chave Primária, obrigatório | INT | N/A | Identificador |
| nome | PRODUTO | Não-obrigatório | VARCHAR | 50 |  |
| grupo | CODIGOGRU | Não-obrigatório | DECIMAL | (38,0) |  |
| familia | FAMILIA | Não-obrigatório | VARCHAR | 2 |  |
| tipo | CODIGOTIPO | Não-obrigatório | DECIMAL | (38,0) |  |
| medida | CODIGOMED | Não-obrigatório | DECIMAL | (38,0) |  |
| marca | CODIGOMAR | Não-obrigatório | DECIMAL | (38,0) |  |
| modelo | CODIGOMOD | Não-obrigatório | DECIMAL | (38,0) |  |
| grupoGerencial | CODIGOGGER | Não-obrigatório | DECIMAL | (38,0) |  |
| codBarra | BARRA | Não-obrigatório | VARCHAR | 20 |  |
| codFabricante | FABRICANTE | Não-obrigatório | VARCHAR | 20 |  |
| paralelo | PARALELO | Não-obrigatório | VARCHAR | 20 |  |
| ncm | NCM | Não-obrigatório | VARCHAR | 8 |  |
| exTipi | EXTIPI | Não-obrigatório | VARCHAR | 3 |  |
| genero | GENERO | Não-obrigatório | DECIMAL | (18,6) |  |
| cst | CST | Não-obrigatório | VARCHAR | 5 |  |
| codBarraTrib | BARRATRIB | Não-obrigatório | VARCHAR | 14 |  |
| unidTrib | UTRIB | Não-obrigatório | VARCHAR | 6 |  |
| qtdTrib | QTRIB | Não-obrigatório | DECIMAL | (38,0) |  |
| codCliente | CODIGOCLI | Não-obrigatório | DECIMAL | (38,0) |  |
| orcamento | CODIGOORCA | Não-obrigatório | DECIMAL | (38,0) |  |
| distanciaPrevista | DISTANCIAPRE | Não-obrigatório | DECIMAL | (38,0) |  |
| validade | VALIDADE | Não-obrigatório | DECIMAL | (38,0) |  |
| estoqueMinimo | MINIMO | Não-obrigatório | DECIMAL | (15,4) |  |
| estoqueMaximo | MAXIMO | Não-obrigatório | DECIMAL | (15,4) |  |
| valorFixo | VLRFIXO | Não-obrigatório | DECIMAL | (15,4) |  |
| estoqueGiro | STAVALIDO | Não-obrigatório | DECIMAL | (38,0) |  |
| calculaImposto | STAIMPOSTO | Não-obrigatório | DECIMAL | (38,0) |  |
| foto |  | Não-obrigatório | DECIMAL |  |  |
| localAutocad | DESENHOCAD | Não-obrigatório | VARCHAR | 100 |  |
</aside>

#### 2.4.2.1 - `administracao_produtos_servicos_defeitos` (LODEFE)

<aside>

| Atributo | Coluna  | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOLODE | Chave Primária, obrigatório | INT | N/A | Identificador |
| servico | CODIGOOS | Não-obrigatório | DECIMAL | (38,0) |  |
| defeito | CODIGODEF | Não-obrigatório | DECIMAL | (38,0) |  |
| produtoCodigo | CODIGOPRO | Chave Estrangeira, obrigatório | INT | N/A | Chave estrangeira que referencia a entidade ‘Produto’ |
</aside>

#### 2.4.2.1 - `administracao_produtos_almoxarifados` (LESTOQUE)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOPRO + CODIGOALM | Chave Primária, obrigatório | INT | N/A | Identificador |
| almoxarifado | CODIGOALM | Não-obrigatório | INT | N/A |  |
| saldo | SALDO | Não-obrigatório | DECIMAL | (15,4) |  |
| minimo | MINIMO | Não-obrigatório | DECIMAL | (15,4) |  |
| maximo | MAXIMO | Não-obrigatório | DECIMAL | (15,4) |  |
| valorCompra | UNITARIOCOMPRA | Não-obrigatório | DECIMAL | (15,4) |  |
| valorMedio | MEDIO | Não-obrigatório | DECIMAL | (15,4) |  |
| valorImposto | MEDIOIMPOSTO | Não-obrigatório | DECIMAL | (15,4) |  |
| vale | VALE | Não-obrigatório | DECIMAL | (38,0) |  |
| produtoCodigo | CODIGOPRO | Chave Estrangeira, obrigatório | INT | N/A | Chave estrangeira que referencia a entidade ‘Produto’ |
</aside>

#### 2.4.2.1 - `administracao_produtos_itens_kit` (CGPRODUKID)

<aside>

| Atributo |  | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOKIT | Chave Primária, obrigatório | INT | N/A | Identificador |
| quantidade | QUANTIDADE | Não-obrigatório | DECIMAL | (15,4) |  |
| produtoReferenciaCodigo | CODIGOPROKIT | Não-obrigatório | DECIMAL | (38,0) |  |
| produtoCodigo | CODIGOPRO | Chave Estrangeira, obrigatório | INT | N/A | Chave estrangeira que referencia a entidade ‘Produto’ |
</aside>

#### 2.4.3.1 - `administracao_seguros` CGSEGURO

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOSEG | Chave Primária, obrigatório |  |  |  |
| tipo | SEGURO | Não-obrigatório |  |  |  |
| veiculoPlaca | PLACA | Não-obrigatório |  |  |  |
| modelo |  | Não-obrigatório |  |  |  |
| unidade |  | Não-obrigatório |  |  |  |
| dataCadastro | DTSEGURO | Não-obrigatório |  |  |  |
| vencimento |  | Não-obrigatório |  |  |  |
| sinalizacao | SINALIZACAO | Não-obrigatório |  |  |  |
| unidadeSinalizacao |  | Não-obrigatório |  |  |  |
| assistencia24h | STAASSISTENCIA | Não-obrigatório |  |  |  |
| ativo | STAATIVO | Não-obrigatório |  |  |  |
| notaFiscal | CODIGOFISCAL | Não-obrigatório |  |  |  |
| descricao |  | Não-obrigatório |  |  |  |
| contrato | CONTRATO | Não-obrigatório |  |  |  |
| apolice | APOLICE | Não-obrigatório |  |  |  |
| numeroItemApolice | ITEMAPOLICE | Não-obrigatório |  |  |  |
| dataEmissao | DTEMISSAO | Não-obrigatório |  |  |  |
| valorApolice | VALORAPOLICE | Não-obrigatório |  |  |  |
| vigencia | DTVIGENCIAINI | Não-obrigatório |  |  |  |
| franquia | FRANQUIA | Não-obrigatório |  |  |  |
| cancelamento | DTCANCELAMENTO | Não-obrigatório |  |  |  |
| parcelas | PARCELAS | Não-obrigatório |  |  |  |
| classeBonus | CLASSEBONUS | Não-obrigatório |  |  |  |
| bonusPercentual | BONUS | Não-obrigatório |  |  |  |
| corretora | CODCORRETORA | Não-obrigatório |  |  |  |
| telefoneCorretora |  | Não-obrigatório |  |  |  |
| contatoCorretora |  | Não-obrigatório |  |  |  |
| seguradora | CODIGOTSEG | Não-obrigatório |  |  |  |
| telefoneSeguradora |  | Não-obrigatório |  |  |  |
| contatoSeguradora |  | Não-obrigatório |  |  |  |
| qtdeSinistros | QTDESINISTRO | Não-obrigatório |  |  |  |
| ultimoSinistro | STASEGURO | Não-obrigatório |  |  |  |
| dataSinistro | DTSINISTRO | Não-obrigatório |  |  |  |
| arquivamento | ARQUIVO | Não-obrigatório |  |  |  |
| envioDocumentos | DTENVIODOC | Não-obrigatório |  |  |  |
| chegadaDocumentos | DTCHEGADADOC | Não-obrigatório |  |  |  |
</aside>

#### 2.4.3.2 - `administracao_seguros_valores_franquias` (CGSEGVALOR)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOVAL | Chave Primária, obrigatório | INT | N/A | Identificador |
| franquia | CODGOCODIGOFRA | Não-obrigatório | DECIMAL | (38,0) |  |
| valor | VALOR | Não-obrigatório | DECIMAL | (15,4) |  |
| seguroCodigo | CODIGOSEG | Chave Estrangeira, obrigatório | INT | N/A | Chave estrangeira que referencia a entidade ‘Seguro’ |
</aside>

#### 2.4.4.1 - **`administracao_veiculos` (**CGFROTA**)**

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | PLACA | Chave-primária, obrigatório | INT | N/A | Identificador |
| frota | SEQFROTA | Não-obrigatório | VARCHAR | (10) |  |
| placa | PLACA |  | VARCHAR | (7) |  |
| modelo |  |  |  |  |  |
| marca |  |  |  |  |  |
| situacao | CODIGOSITU |  | DECIMAL | (38,0) |  |
| ultimaPreventivaF12 | MARCACAOLUBATUAL |  | DECIMAL | (38,0) |  |
| placaAnterior | PLACAANTERIOR |  | VARCHAR | (7) |  |
| anoFabricacao | ANOFABRI |  | VARCHAR | (4) |  |
| anoModelo | ANOMOD |  | VARCHAR | (4) |  |
| centroResponsabilidade | CODIGOCRES |  | DECIMAL | (38,0) |  |
| centroCusto | CODIGOCCUS |  | DECIMAL | (38,0) |  |
| ordemInterna | PROCESSO |  | VARCHAR | (25) |  |
| limiteTanque | CAPACTANQUE |  | VARCHAR | (20) |  |
| limitePassageiro | CAPACPASSA |  | DECIMAL | (38,0) |  |
| limiteCarga | CAPACCARGA |  | DECIMAL | (38,0) |  |
| dataAtualizacao | DTATUALIZA |  | DATETIME | N/A |  |
| origemAtualizacao | ORIGEMATUALIZA |  | VARCHAR | (45) |  |
| valorMaoDeObra | MAODEOBRA |  | DECIMAL | (15,4) |  |
| valorPecas | PECA |  | DECIMAL | (15,4) |  |
| familia | CODIGOFMVEIC |  | DECIMAL | (38,0) |  |
| local | CODIGOCID |  | DECIMAL | (18,6) |  |
| licenciamento | CODIGOCIDLICE |  | DECIMAL | (38,0) |  |
| licenciamentoAnterior | CODIGOCIDANTE |  | DECIMAL | (38,0) |  |
| combustivel | STACOMBUST |  | VARCHAR | (2) |  |
| preventiva | STAREVISAO |  | VARCHAR | (2) |  |
| trocaOleo | STATROCALUB |  | VARCHAR | (2) |  |
| cor | COR
 |  | VARCHAR | (35) |  |
| grupo | CODIGOGGER |  | DECIMAL | (38,0) |  |
| motorizacao | POTENCIA |  | VARCHAR | (35) |  |
| numeroMotor | MOTOR |  | VARCHAR | (35) |  |
| cilindro | CILINDRO |  | VARCHAR | (35) |  |
| numeroCaixa | CAIXA |  | VARCHAR | (35) |  |
| severidade | SEVERIDADE |  | CHAR | (1) |  |
| transmissao | TRANSMISSAO |  | VARCHAR | (1) |  |
| tipoMarcacao | STAMARCACAO |  | VARCHAR | (1) |  |
| tipoEixo | STAEIXO |  | DECIMAL | (38,0) |  |
| tipoVeiculo | STAVEICEQUIP |  | VARCHAR | (1) |  |
| unidade | CODIGODEPUNI |  | DECIMAL | (38,0) |  |
| departamento | CODIGODEP |  | DECIMAL | (38,0) |  |
| chassi | CHASSI |  | VARCHAR | (20) |  |
| codRenavam | RENAVAM |  | VARCHAR | (15) |  |
| numeroApolice | APOLICE |  | VARCHAR | (10) |  |
| patrimonio | PATRIMONIO |  | VARCHAR | (20) |  |
| conservacao | CONSERVACAO |  | VARCHAR | (2) |  |
| patio | CODIGOPAT |  | BIGINT | N/A |  |
| cartao | TAG |  | VARCHAR | (20) |  |
| setor |  |  |  |  |  |
| fornecedor | CODIGOFORNEC |  | DECIMAL | (38,0) |  |
| proprietario | CODIGOPROPRI |  | DECIMAL | (38,0) |  |
| responsavel | CODIGOPRE |  | DECIMAL | (38,0) |  |
| seguradora | CODIGOSEGURA |  | DECIMAL | (38,0) |  |
| estado | CODIGOEST |  | DECIMAL | (38,0) |  |
| radio | RADIO |  | VARCHAR | (10) |  |
| notaCompra | NFCOMPRA |  | VARCHAR | (10) |  |
| serieCompra | NFSERIECOMPRA |  | VARCHAR | (4) |  |
| dataCompra | DTCOMPRA |  | DATETIME | N/A |  |
| notaVenda | NFVENDA |  | VARCHAR | (10) |  |
| serieVenda | NFSERIEVENDA |  | VARCHAR | (4) |  |
| dataVenda | DTVENDA |  | DATETIME | N/A |  |
| valorVenda | VENDA |  | DECIMAL | (15,4) |  |
| valorMercado | MERCADO |  | DECIMAL | (15,4) |  |
| valorCompra | TOTALORCA |  | DECIMAL | (15,4) |  |
| aquisicao | AQUISICAO |  | VARCHAR | (50) |  |
| dataInclusaoBase | DTINCLUSAO |  | DATETIME | N/A |  |
| dataCancelamento | DTCANCELAMENTO |  | DATETIME | N/A |  |
| marcacaoAtual | MARCACAOATUAL |  | DECIMAL | (38,0) |  |
| bancoAlienacao | CODIGOBAN |  | DECIMAL | (38,0) |  |
| funcao | FUNCAO |  | VARCHAR | (300) |  |
| veiculoDesmobilizado | SITUACAO |  | VARCHAR | (2) |  |
| localLavagem | CODIGOSITLAV |  | DECIMAL | (18,6) |  |
| diaLavagem | DIASEMANASERVICO |  | DECIMAL | (18,6) |  |
| horaLavagem | HORASERVICO |  | DATETIME | N/A |  |
| horasTrabalhadas | TRABALHO |  | DECIMAL | (18,6) |  |
| velocidadeRef | VELOCIDADE |  | DECIMAL | (18,6) |  |
| consumo | CONSUMO |  | DECIMAL | (15,4) |  |
| indiceManutencao | INDMANUTENCAO |  | DECIMAL | (38,0) |  |
| veiculoReserva | STARESERVA |  | CHAR | (1) |  |
</aside>

#### 2.4.4.2 - **`administracao_veiculos_orcamentos` (**CGFRORCA**)**

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGORCA | Chave Primária, obrigatório | INT | N/A | Identificador |
| ano | ANO | Não-obrigatório | DECIMAL | (38,0) |  |
| sistema |  | Não-obrigatório |  |  |  |
| valor | ORCAMENTO | Não-obrigatório | DECIMAL | (15,4) |  |
| produtoServico | PRODUTOSERVICO | Não-obrigatório | VARCHAR | (1) |  |
| motivo | STAMOTIVO | Não-obrigatório | VARCHAR | (1) |  |
| veiculoCodigo | PLACA* | Chave Estrangeira, obrigatório | VARCHAR | (7) | Chave estrangeira que referencia a entidade ‘Veículo’ |
</aside>

#### 2.4.4.3 - **`administracao_veiculos_motoristas_autorizados` (**CGVEICMOTO**)**

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOLOC | Chave Primária, obrigatório | INT | N/A | Identificador |
| motorista | MOTORISTA | Não-obrigatório | VARCHAR | (35) |  |
| email | E_MAIL | Não-obrigatório | VARCHAR | (35) |  |
| inicio | DTINICIAL | Não-obrigatório | DATETIME | N/A |  |
| final | DTFINAL | Não-obrigatório | DATETIME | N/A |  |
| veiculoCodigo | PLACA | Chave Estrangeira, obrigatório | VARCHAR | (7) | Chave estrangeira que referencia a entidade ‘Veículo’ |
</aside>

#### 2.4.5.1 - `ordens_servico` (LORDSERV)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| numeroOs | CODIGOOS | Chave Primária, obrigatório | INT | N/A | Identificador |
| status | STAOFICINA | Não-obrigatório | VARCHAR | (1) |  |
| dataAbertura | DTABERTURA | Não-obrigatório | DATETIME | N/A |  |
| dataEntrega | DTENTREGA | Não-obrigatório | DATETIME | N/A |  |
| dataFechamento | DTFECHAMENTO | Não-obrigatório | DATETIME | N/A |  |
| motivo | CODIGOMOT | Não-obrigatório | DECIMAL | (38,0) |  |
| processo |  | Não-obrigatório |  |  |  |
| responsavelNome | RESPONSAVEL | Não-obrigatório | VARCHAR | (35) |  |
| responsavelTelefone | TELEFONERESP | Não-obrigatório | VARCHAR | (20) |  |
| veiculoPlaca | PLACA | Não-obrigatório | VARCHAR | (7) |  |
| unidade |  | Não-obrigatório |  |  |  |
| departamento | CODIGODEP | Não-obrigatório | DECIMAL | (38,0) |  |
| tanqueNivel | TANQUE | Não-obrigatório | VARCHAR | (10) |  |
| marcacaoAtual | MARCACAOATUAL | Não-obrigatório | DECIMAL | (38,0) |  |
| marcacaoAnterior | MARCACAOANTE | Não-obrigatório | DECIMAL | (38,0) |  |
| comentarios | INFORMACAO | Não-obrigatório | VARCHAR | (900) |  |
</aside>

#### 2.4.5.1 - `oficina_os_defeitos` (CGDEFEITO)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| id |  | Chave Primária, obrigatório | INT | N/A | Identificador |
| codigo | CODIGODEF | Não-obrigatório | INT | N/A |  |
| nome | DEFEITO | Chave Estrangeira, obrigatório | VARCHAR | (60) |  |
</aside>

#### 2.4.5.1 - `oficina_documentos_fiscais` (LODOCFISCAL)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| id | CODIGOFISCALOS | Chave Primária, obrigatório | INT | N/A | Identificador |
| documento | DOCUMENTO | Não-obrigatório | DECIMAL | (38,0) |  |
| dataEmissao | DTEMISSAO | Não-obrigatório | DATETIME | N/A |  |
| fornecedor | CLIENTE | Não-obrigatório | VARCHAR | (35) |  |
</aside>

#### 2.4.5.1 - `oficina_mao_de_obra` (**LOFUNCIO**)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| id | CODIGOFUOS | Chave Primária, obrigatório | INT | N/A | Identificador |
| nome |  | Não-obrigatório |  |  |  |
| dataAtuacao | DATA | Não-obrigatório | DATETIME | N/A |  |
| tempoGasto | TEMPO | Não-obrigatório | VARCHAR | (5) |  |
| valor | VALOR | Não-obrigatório | DECIMAL | (15,4) |  |
</aside>

#### 2.4.5.1 - `oficina_pneus` (LOPNEUS)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| id | CODIGOMOVPN | Chave Primária, obrigatório | INT | N/A | Identificador |
| codFogo |  | Não-obrigatório |  |  |  |
| posicao | POSRODA | Não-obrigatório | VARCHAR | (5) |  |
| status | STAPNEU | Não-obrigatório | VARCHAR | (1) |  |
| vidaUtil | VIDA | Não-obrigatório | DECIMAL | (38,0) |  |
| acumuladoKm | PERCORRIDO | Não-obrigatório | DECIMAL | (38,0) |  |
</aside>

#### 2.4.5.1 - `oficina_catalogo_defeitos` (LODEFE)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| id | CODIGOLODE | Chave-primária, obrigatório | INT | N/A | Identificador |
| codigo | CODIGOOS | Não-obrigatório |  |  |  |
| nome |  | Não-obrigatório |  |  |  |
</aside>

#### 2.4.6.1 - **`ordens_lavagem` (LORDSERV)**

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| numeroOs | CODIGOOS | Chave Primária, obrigatório |  |  |  |
| tipoLancamento | ORDEMEXTERNA | Não-obrigatório |  |  |  |
| status | CODIGOSIT | Não-obrigatório |  |  |  |
| data | DTABERTURA | Não-obrigatório |  |  |  |
| dataEntrega | DTENTREGA | Não-obrigatório |  |  |  |
| motivo | CODIGOMOT | Não-obrigatório |  |  |  |
| responsavelNome | RESPONSAVEL | Não-obrigatório |  |  |  |
| responsavelTelefone | TELEFONERESP | Não-obrigatório |  |  |  |
| veiculoPlaca | PLACA | Não-obrigatório |  |  |  |
| unidade |  | Não-obrigatório |  |  |  |
| departamento | CODIGODEP | Não-obrigatório |  |  |  |
| tanqueNivel | TANQUE | Não-obrigatório |  |  |  |
| marcacaoAtual | MARCACAOATUAL | Não-obrigatório |  |  |  |
| marcacaoAnterior | MARCACAOANTE | Não-obrigatório |  |  |  |
| local | CODIGOLOC | Não-obrigatório |  |  |  |
| observacoes | INFORMACAO | Não-obrigatório |  |  |  |
</aside>

#### 2.4.6.2 - **`lavagem_produtos` (**LOSITEM**)**

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| id | CODIGOITEMOS | Chave-primária, obrigatório | INT | N/A | Identificador |
| produtoId | CODIGOPRO | Não-obrigatório | DECIMAL | (38,0) |  |
| almoxarifadoOrigem | CODIGOALM | Não-obrigatório | DECIMAL | (38,0) |  |
| quantidade | QUANTIDADE | Não-obrigatório | DECIMAL | (15,4) |  |
</aside>

#### 2.4.6.3 - **`lavagem_servicos` (**CGSERVIC**)**

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| id | CODIGOSER | Chave-primária, obrigatório | INT | N/A | Identificador |
| servicoId | SERVICO | Não-obrigatório | VARCHAR | (80) |  |
</aside>

#### 2.4.6.4 - **`lavagem_mao_de_obra` (LOFUNCIO)**

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| id | CODIGOFUOS | Chave-primária, obrigatório | INT | N/A | Identificador |
| nome |  | Não-obrigatório |  |  |  |
| dataExecucao | DATA | Não-obrigatório | DATETIME | N/A |  |
| tempoGastoMinutos | TEMPO | Não-obrigatório | VARCHAR | (5) |  |
</aside>

#### 2.4.6.5 - **`motivos` (CGMOTIVO)**

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigoMot | CODIGOMOT | Chave-primária, obrigatório |  |  | Identificador |
| nome | MOTIVO | Não-obrigatório |  |  |  |
</aside>

#### 2.4.7.1 - `administracao_contratos` (CGCLICONTRATO)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOCLICONTRATO | Chave-primária, obrigatório | INT | N/A | Identificador |
| contrato | CONTRATO | Não-obrigatório | VARCHAR | (20) |  |
| dataEmissao | DTEMISSAO | Não-obrigatório | DATETIME | N/A |  |
| dataVencimento | DTVENCIMENTO | Não-obrigatório | DATETIME | N/A |  |
| status | STATUS | Não-obrigatório | VARCHAR | (1) |  |
| nomeResponsavel | NOMERESPONSAVEL | Não-obrigatório | VARCHAR | (50) |  |
| telefoneResponsavel | TELEFONERESPONSAVEL | Não-obrigatório | VARCHAR | VARCHAR |  |
| emailResponsavel | EMAILRESPONSAVEL | Não-obrigatório | VARCHAR | (100) |  |
| nomeGestor | NOMEGESTOR | Não-obrigatório | VARCHAR | (20) |  |
| telefoneGestor | TELEFONEGESTOR | Não-obrigatório | VARCHAR | VARCHAR |  |
| emailGestor | EMAILGESTOR | Não-obrigatório | VARCHAR | (100) |  |
| empresa | CODIGOCLI | Não-obrigatório | DECIMAL | (18,6) |  |
| centroCustoProjeto | CODIGOCCUS | Não-obrigatório | DECIMAL | (38,0) |  |
| diretoria | CODIGODEP | Não-obrigatório | DECIMAL | (38,0) |  |
| gerenciaGeral | CODIGODEPDIR | Não-obrigatório | DECIMAL | (18,6) |  |
| gerenciaArea | CODIGODEPGG | Não-obrigatório | DECIMAL | (18,6) |  |
</aside>

#### 2.4.8.1 - `departamento` (CGDEPARTO)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigoDep | CODIGODEP | Chave-primária, obrigatório |  |  | Identificador |
| nome | NOME | Não-obrigatório |  |  |  |
| unidade | UNIDADE | Não-obrigatório |  |  |  |
</aside>

#### 2.4.9.1 - **`administracao_fornecedores`**

<aside>

| Atributo | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- |
|  |  |  |  |  |
</aside>

#### 2.4.10.1 - **`administracao_funcoes`**

<aside>

| Atributo | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- |
|  |  |  |  |  |
</aside>

#### 2.4.11.1 - `ccv_agendamentos` (LTRAFEGO)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOTRA |  |  |  |  |
| dataSolicitacao | DTSOLICITACAO |  |  |  |  |
| origem | ORIGEM |  |  |  |  |
| destino | DESTINO |  |  |  |  |
| tipoAgendamento |  |  |  |  |  |
| dataHoraSaida | DTSAIDA |  |  |  |  |
| dataHoraChegada | DTCHEGADA |  |  |  |  |
| status |  |  |  |  |  |
| motivo |  |  |  |  |  |
| usuarioSolicitante | USUARIO |  |  |  |  |
| emailSolicitante | EMAIL |  |  |  |  |
| telefoneSolicitante | TELEFONE |  |  |  |  |
| faxSolicitante | FAX |  |  |  |  |
| unidadeSolicitante |  |  |  |  |  |
| setorSolicitante | CODIGODEP |  |  |  |  |
| veiculoPlaca | PLACA |  |  |  |  |
| motorista | CODIGOFUNMOT |  |  |  |  |
| auxiliar | CODIGOFUNAUX |  |  |  |  |
| servico | SERVICO |  |  |  |  |
| hodometroAnterior |  |  |  |  |  |
| hodometroSaida | MARCACAOSAIDA |  |  |  |  |
| hodometroChegada | MARCACAOCHEGADA |  |  |  |  |
</aside>

#### 2.4.12.1 - `administracao_postos_abastecimentos` (LAMOVABS)

<aside>

| Atributo | Coluna no legado | Propriedades do atributo | Tipo do atributo | Tamanho do atributo | Descrição do atributo |
| --- | --- | --- | --- | --- | --- |
| codigo | CODIGOABS |  |  |  |  |
| localidade | STALOCALIE |  |  |  |  |
| dataHoraAbastecimento | DTABASTECIMENTO |  |  |  |  |
| dataHoraLancamento | DTLANCAMENTO |  |  |  |  |
| veiculoPlaca | PLACA |  |  |  |  |
| frota |  |  |  |  |  |
| familia |  |  |  |  |  |
| status | STATPABS |  |  |  |  |
| marcacaoAnterior | MARCACAOANTE |  |  |  |  |
| marcacaoAtual | MARCACAOATUAL |  |  |  |  |
| kmImprodutivo | STACIRCULACAO |  |  |  |  |
| kmPercorrido | KMPERCORRIDO |  |  |  |  |
| consumoPorKm |  |  |  |  |  |
| bomba | CODIGOBOM |  |  |  |  |
| produtoBomba |  |  |  |  |  |
| quantidade | QUANTIDADE |  |  |  |  |
| valorUnitario | UNITARIO |  |  |  |  |
| total |  |  |  |  |  |
| motorista |  |  |  |  |  |
| combustivel | STACOMBUST |  |  |  |  |
| fornecedor |  |  |  |  |  |
| notaFiscal | DOCFISCAL |  |  |  |  |
| departamento | CODIGODEP |  |  |  |  |
| unidade |  |  |  |  |  |
| limiteTanque |  |  |  |  |  |
</aside>

### 2.4.2 - Relacionamentos

</aside>

<aside>

## Comentários

1. A tabela **`CGENDERECO`**, correspondente a **`administracao_funcionarios_enderecos`** no código-fonte, possui as colunas `E_MAIL`, `TELRESIDENCIAL`, `TELCOMERCIAL` e `TELCELULAR`. Contudo, não há, no código-fonte, atributos correspondentes a essas colunas do legado para **`administracao_funcionarios_enderecos`**; aparecem os atributos `email`, `celular`, `telefoneComercial` e `telefoneResidencial`, contudo, em **`administracao_funcionarios`**, quando deveria ser o contrário, e a entidade *Funcionario* interceptaria essas informações por meio do relacionamento 1:N mantido com a entidade *EnderecoFuncionario*;
2. Na tabela **`CGPRODUT`**, correspondente a **`administracao_produtos`**, não tem correspondência para `modelo`, `unidade`, `vencimento`, `unidadeSinalizacao`, `descricao`, `telefoneCorretora`, `contatoCorretora`, `telefoneSeguradora` e `contatoSeguradora` ainda, no código-fonte;
3. Na tabela **`CGSEGURO`**, correspondente a **`administracao_seguros`**, não tem correspondência para `foto`,  ainda, no código-fonte;
4. A tabela **`LESTOQUE`**, correspondente a **`administracao_produtos_almoxarifados`** no código-fonte, não tem uma primary key. Portanto, decidiu-se utilizar o par `CODIGOPRO` + `CODIGOALM` como chave composta;
5. A tabela **`CGFROTA`**, correspondente a **`administracao_veiculos`** no código-fonte, não tem correspondências para `modelo`, `marca` e `setor` ainda. Acredita-se que `setor` possa ser interceptado por meio de um relacionamento com a entidade *Departamento*;
6. A tabela **`CGFRORCA`**, correspondente a **`administracao_veiculos_orcamentos`** no código-fonte, não tem correspondência para `sistema` ainda;
7. A tabela **`LORDSERV`**, correspondente a **`ordens_servico`** no código-fonte, não tem correspondência para `processo` e `unidade` ainda. Acredita-se que `unidade` possa ser interceptado por meio de um relacionamento com a entidade *Departamento*;
8. A tabela **`CGDEFEITO`**, correspondente a **`oficina_os_defeitos`** no código-fonte, não tem uma primary key;
9. A tabela **`LOFUNCIO`**, correspondente a **`oficina_mao_de_obra`** no código-fonte, não tem correspondência para `nome` ainda. Acredita-se que possa ser interceptado por meio de um relacionamento com a entidade *Funcionario*;
10. A tabela **`LOPNEUS`**, correspondente a **`oficina_pneus`** no código-fonte, não tem correspondência para `codFogo` ainda;
11. A tabela **`LODEFE`**, correspondente a **`oficina_catalogo_defeitos`** no código-fonte, não tem correspondência para `nome` ainda. credita-se que `nome` possa ser interceptado por meio de um relacionamento com a entidade *Defeito*;
12. A tabela **`LOFUNCIO`**, correspondente a **`lavagem_mao_de_obra`** no código-fonte, não tem correspondência para `nome` ainda. Acredita-se que possa ser interceptado por meio de um relacionamento com a entidade *Funcionario*;
13. **`administracao_fornecedores`** e **`administracao_funcoes`** são entidades recentemente adicionadas e precisam passar por análise;
14. A tabela **`LTRAFEGO`**, correspondente a **`ccv_agendamentos`** no código-fonte, não tem correspondência para `tipoAgendamento`, `status`, `motivo`, `unidadeSolicitante` e `hodometroAnterior` ainda;
15. A tabela **`LAMOVABS`**, correspondente a **`administracao_postos_abastecimentos`** no código-fonte, não tem correspondência para `frota`, `familia`, `consumoPorKm`, `produtoBomba`, `total`, `unidade` e `limiteTanque` ainda.
</aside>