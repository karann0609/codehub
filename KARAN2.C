void main()
  {
  int a;
  int b;
  int c;
  clrscr();
  printf("enter the integer a");
  scanf("%d",&a);

  printf("enter the interger b");
  scanf("%d",&b);

  printf("enter the value of c");
  scanf("%d",&c);

  if (a>b && a>c)
  printf("a is maximum");

  else if (b>a && b>c)
  printf("b is maximum");

  else
  printf("c is maximum");
  }
