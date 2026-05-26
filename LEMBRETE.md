FASE 2: Implementar main() 🔧
Parse de argumentos
Validação
Criar stacks A e B
Chamar algoritmo
Liberar memória
FASE 3: Operações Básicas 🎯
11 operações: sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr
Cada uma printa o nome dela
FASE 4: Algoritmo de Sorting 🧠
Escolher: Turk (complexo), Radix (simples), ou Greedy (fácil)
Implementar ordenação
FASE 5: Edge Cases & Otimizações ✅
Já ordenado, duplicatas, overflow, input inválida
Contar movimentos



### ***IDEIA*** DE DIVISÃO DA MAIN FUTURAMENTE 

Aqui está o plano de divisão para o futuro:

1. Bloco de Entrada e Configuração (init_program_context)
Esta função vai tratar de ler as flags e extrair os argumentos limpos.
O que ela faz: Chama get_flag, valida erros de flags e chama ft_get_args.
O que ela devolve: O array de strings (args) já sem as flags.

2. Bloco de Criação da Stack (setup_stacks)
Esta função transforma as strings em números e inicializa as memórias.
O que ela faz: Chama parse_args, ft_init_stack para a Stack A e ft_init_empty para a Stack B.
O que ela recebe/devolve: Recebe o args e configura os ponteiros das stacks.

3. Bloco de Execução (execute_sorting)
Esta função vai conter a inteligência do novo subject (cálculo de desordem e escolha do algoritmo).
O que ela faz: Calcula a desordem, verifica qual a flags.strategy escolhida e chama o algoritmo correto (sort_simple, sort_adaptive, etc.).

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_flags	flags;
	char	**args;

	if (argc < 2)
		return (0);
	// 1. Configura as flags e extrai os argumentos limpos
	args = init_program_context(argc, argv, &flags);
	if (!args)
		return (0);
	// 2. Transforma argumentos em stacks reais alocadas
	if (!setup_stacks(args, &stack_a, &stack_b))
		return (ft_free_args(args), 0);
	ft_free_args(args);
	// 3. Executa a lógica de ordenação/bench do novo subject
	execute_sorting(stack_a, stack_b, &flags);
	// 4. Limpeza final
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	return (0);
}
