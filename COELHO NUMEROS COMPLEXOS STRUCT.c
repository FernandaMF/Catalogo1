#include <stdio.h>

typedef struct{ // Struct
    float r; //Criando as variáveis pertencentes a struct
    float im;
}comp;//nome da struct
comp res;//variável global que é do tipo da struct, podendo usar res.r e res.im
void soma(comp z1,comp z2)
{
    res.r = z1.r+z2.r;
    res.im = z1.im+z2.im;

}
void sub(comp z1,comp z2)
{
    res.r = z1.r-z2.r;
    res.im = z1.im-z2.im;
}
void mult(comp z1,comp z2)
{
    res.r = (z1.r*z2.r)-(z1.im*z2.im);
    res.im = (z1.r*z2.im)+(z1.im*z2.r);
}
void fazSwitch()
{
    comp z2,z1; // criação dos numeros complexos que vao ser lidos
    scanf("%f%f%f%f",&z1.r,&z1.im,&z2.r,&z2.im);
    int op;
    scanf("%d",&op);
    switch(op)
    {
        case 1:soma(z1,z2);
        break;
        case 2:sub(z1,z2);
        break;
        case 3:mult(z1,z2);
        break;
    }
}
int main()
{
    fazSwitch();
    printf("%.2f + %.2fi",res.r,res.im);
    return 0;
}
