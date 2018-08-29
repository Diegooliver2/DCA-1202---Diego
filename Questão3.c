considerando o endereço de i = 4094;

int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
}

Os valores mostrados na tela seriam: 4094, 7, 5, 15, 9.
