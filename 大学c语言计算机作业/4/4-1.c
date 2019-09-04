# include <stdio.h>
int main()
{int x;float y;
scanf ("%d",&x);
    switch (x/10)


    {
        case 0:y=x;break ;
         case 1:y=x*2+3;break ;
          case 2:y=-0.5*x+10;break ;
            case 3:y=-0.5*x+10;break ;
            default:printf ("wrong");break;

    }
printf ("y=%f",y);
}
