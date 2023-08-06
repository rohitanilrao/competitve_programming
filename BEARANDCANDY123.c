

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,lmax,bobmax;
    int suml;
    int sumb;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    
    scanf("%d",&lmax);
    scanf("%d",&bobmax);
    suml=0;
    sumb=0;
    int i=1;
    for(int i=0;;i++)
    {
        if(i%2==0)
            sumb+=i;
        else
            suml+=i;
          
        if(suml>lmax)
        {
            printf("Bob\n");
            break;
        }
        if(sumb>bobmax)
        {
            printf("Limak\n");
            break;
        }
        

  
    }
  
    }
}
