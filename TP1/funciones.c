
float suma(float a, float b)
{
    float resultado;
    resultado=a+b;
    printf("Suma : %f \n",resultado);
    return resultado;
}
float resta(float a, float b)
{
    float resultado;
    resultado=a-b;
    printf("Resta : %f \n",resultado);
    return resultado;
}
float division(float a, float b)
{
    float resultado;

    if(b==0)
    {
        printf("Error\n");

    }
    else
    {
        resultado=a/b;
        printf("Division: %f\n",resultado);
    }

    return resultado;

}
float multiplicacion(float a, float b)
{
    float resultado;
    resultado=a*b;
    printf("Multiplicacion : %f \n",resultado);
    return resultado;
}

int factorial(float a)
{
    int AuxiliarA=(int)a;
    float resultado=1;
    if(a<0)
    printf("No se puede hacer factorial de un negativo\n");
     else if(a!=AuxiliarA)
    printf("No se puede hacer el factorial de  decimal\n");
    else
    {
        for(int i=1; i<=(int)a; i++)
        {
            resultado *= i;
        }
        printf("El factorial de A es: %0.f \n ", resultado);
    }
}


