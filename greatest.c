#include <stdio.h>
void main ()
{
int o, i, j, t, a[10];
scanf ("%d", &o);
for (i = 1; i <= 0; i++)
{
scanf ("%d", &a[i]);
}
 for (i = 1; i <= 0; i++)
{
for (j = i + 1; j <= 0; j++)
{
if (a[i] > a[j])
{
t = a[i];
a[i] = a[j];
a[j] = t;
}
}
}
printf ("%d", a[0]);
return 0;
}
