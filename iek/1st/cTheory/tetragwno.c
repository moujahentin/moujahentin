 #include<stdio.h>

 int main()
 {
     int gr,st,i=1,j;
     printf("Poses grammes :");
     scanf("%d", &gr);
     printf("Poses sthles :");
     scanf("%d", &st);
  while (i <= gr)
{
j = 1;
while (j <= st)
{
if (i == 1 || i == gr)
printf("%c",'$');
else
if (j == 1 || j == st)
printf("%c",'$');
else
printf("%c",' ');
j++;
}
printf("\n");
i++;
}
     return 0;
 }
