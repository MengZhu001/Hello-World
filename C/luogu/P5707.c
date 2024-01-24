#include <stdio.h>
#define FDM 24*60
int main()
{
int s, v;
int HH = 0, MM;

scanf("%d%d", &s, &v);
MM = 8 * 60 + FDM;
MM = MM - (s / v + 10);

if (MM > FDM) MM = MM - FDM;

HH = MM / 60; 
MM = MM % 60;

printf("%02d:%02d", HH, MM - 1);

return 0;
}