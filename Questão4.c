p = i;
q = &j;
p = &*&i;
i = (*&)j; -> Inválida
i = *&j;
i = *&*&j;
q = *p;
i = (*p)++ + *q;
