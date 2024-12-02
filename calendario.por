programa
{
	
	funcao inicio()
	{
		 // Variáveis
    inteiro ano, a, b, c, d, n, f, g, h, i, k, l, m
    inteiro pascoaDia, pascoaMes, carnavalDia, carnavalMes, corpusDia, corpusMes
    inteiro bissexto
    
    // Leitura do ano
    escreva("Digite o ano: ")
    leia(ano)

    // Cálculo da Páscoa
    a = ano % 19
    b = ano / 100
    c = ano % 100
    d = b / 4
    n = b % 4
    f = (b + 8) / 25
    g = (b - f + 1) / 3
    h = (19 * a + b - d - g + 15) % 30
    i = c / 4
    k = c % 4
    l = (32 + 2 * n + 2 * i - h - k) % 7
    m = (a + 11 * h + 22 * l) / 451
    pascoaMes = (h + l - 7 * m + 114) / 31
    pascoaDia = (h + l - 7 * m + 114) % 31 + 1

    // Verificação se o ano é bissexto
    se ((ano % 4 == 0 e ano % 100 != 0) ou (ano % 400 == 0)) {
        bissexto = 1
    }
    senao{
        bissexto = 0
    }

    // Cálculo do Carnaval (47 dias antes da Páscoa)
    inteiro diasPascoa = pascoaDia + (pascoaMes - 1) * 31
    diasPascoa -= 47 // Subtraindo 47 dias (Carnaval)
    
    se (diasPascoa <= 0){
        carnavalMes = 2 // Considerando fevereiro
        carnavalDia = 28 + diasPascoa
    }
        se (bissexto == 1) {
            carnavalDia += 1 // Ajuste para ano bissexto
        }
    senao{
        carnavalMes = diasPascoa / 31 + 1
        carnavalDia = diasPascoa % 31
    }

    // Cálculo de Corpus Christi (60 dias após a Páscoa)
    diasPascoa = pascoaDia + (pascoaMes - 1) * 31
    diasPascoa += 60 // Somando 60 dias (Corpus Christi)
    corpusMes = diasPascoa / 31 + 1
    corpusDia = diasPascoa % 31

    // Exibir resultados
    escreva("Ano: ", ano, "\n")
    escreva("Páscoa: ", pascoaDia, "/", pascoaMes, "\n")
    escreva("Carnaval: ", carnavalDia, "/", carnavalMes, "\n")
    escreva("Corpus Christi: ", corpusDia, "/", corpusMes, "\n")
    se(bissexto == 1){
    	escreva("Ano bissexto")
    	}
    	senao{
    		escreva("Não é bissexto")
    		}
		}
   
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1024; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */