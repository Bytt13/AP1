int F (int a){
if (a <= 0)
return 0;

else

return (a + F (a – 1));

// Essa função mostra o somatório de todos os números antes de "a", uma variavel. caso o a seja menor ou igual a 0, a função retorna 0, como se fosse uma condição de parada
// para a condição não ficar infinita, e o valor de a decresce em 1 toda vez que a função é chamada novamente.
