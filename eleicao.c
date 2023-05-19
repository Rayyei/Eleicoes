//#include<stdio.h>

int main()
{
  // VARIÁVEIS
  int voto, i = 0;
  int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, branco =       0, nulo = 0, ele;
  printf("----Eleições para governador 2022----\n\n");
  printf("Digite a quantidade de eleitores: \n");
  scanf("%d", &ele);
  printf("\n");
  //CANDIDATOS
  printf("Votaçao aos candidatos a Governador \n");
  printf("Candidato [1] \n");
  printf("Candidato [2] \n");
  printf("Candidato [3] \n");
  printf("Candidato [4] \n");
  printf("Branco [5] \n");
  printf("Nulo [6] \n");
  printf("---------------------------------------\n");
  printf("\n");

  //SOMA DOS VOTOS E A QUANTIDADES DE ELEITORES
  {
    for (i = 1; i <= ele; i++){
      printf("Escolha o seu candidato: \n");
      scanf("%d", &voto);
      printf("\n");
      if (voto == 1)
      {
        cand1++;
        printf("Você votou no Candidato 1 \n\n");
      }
      if (voto == 2)
      {
        cand2++;
        printf("Você votou no Candidato 2 \n\n");
      }
      if (voto == 3)
      {
        cand3++;
        printf("Você votou no Candidato 3 \n\n");   
      }
      if (voto == 4)
      {
        cand4++;
        printf("Você votou no Candidato 4\n\n");    
      }
      if(voto == 5){
        branco++;
        printf("Você votou Branco\n\n");
      }
      if(voto == 6){
        nulo++;
        printf("Você votou Nulo\n\n");
      }
    }
    //RESULTADO DE VOTOS E PERCENTUAL
    printf("\n----RESULTADO DOS VOTOS----\n");
    printf("\nCandidato 1: %d\n", cand1);
    printf("Porcentagem: %.1f \n", cand1 * 100.0/ ele);
    
    printf("\nCandidato 2: %d\n", cand2);
    printf("Porcentagem: %.1f \n", cand2 * 100.0/ ele);
    
    printf("\nCandidato 3: %d\n", cand3);
    printf("Porcentagem: %.1f \n", cand3 * 100.0/ ele);
    
    printf("\nCandidato 4: %d\n", cand4);
    printf("Porcentagem: %.1f \n", cand4 * 100.0/ ele);
    
    printf("\nBranco: %d\n", branco);
    printf("Porcentagem: %.1f \n", branco * 100.0/ ele);
    
    printf("\nNulo: %d\n", nulo);
    printf("Porcentagem: %.1f \n", nulo * 100.0/ ele);

    //QUEM VENCEU
    if((cand1 > cand2)&&(cand1>cand3)&&(cand1 > cand4)&&(cand1 > branco)&&(cand1 > nulo)){
      printf("\n*CANDIDATO 1 VENCEU!*");
    }
    else if((cand2 > cand1)&&(cand2 > cand3)&&(cand2>cand4)&&(cand2 > branco)&&(cand2 > nulo)){
      printf("\n*CANDIDATO 2 VENCEU!*");
    }
    else if((cand3 > cand1)&&(cand3>cand2)&&(cand3 > cand4)&&(cand3 > branco)&&(cand3 > nulo)){
      printf("\n*CANDIDATO 3 VENCEU!*");
    }
    else if((cand4 > cand1)&&(cand4 > cand2)&&(cand4>cand3)&&(cand4 > branco)&&(cand4 > nulo)){
      printf("\n*CANDIDATO 4 VENCEU!*");
    }
    else if((branco > cand1)&&(branco > cand2)&&(branco > cand3) && (branco > cand4)&&(branco>nulo)){
      printf("\n*VOTOS EM BRANCO VENCEU!*");
    }
    else if((nulo > cand1)&&(nulo > cand2)&&(nulo>cand3)&&(nulo > cand4)&&(nulo>branco)){
      printf("\n*VOTOS EM NULO VENCEU*");
    }  
    else if((cand1 == cand2)||(cand2 == cand3)||(cand1 == cand3)||(cand1 == cand4)||(cand1 == nulo)||(cand1 == branco)){
      printf("\n*EMPATE*");
    }
  }
     return 0;
}