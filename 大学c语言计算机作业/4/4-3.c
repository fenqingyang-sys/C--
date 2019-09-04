# include <stdio.h>
main ()
{
    float ma,tr,tr_result,ma_result;

   printf("Please enter your price number:");
    scanf("%f",&ma);
    switch((int)ma/1000)
    {
        case(0):tr=0;break;
        case(1):tr=0.05;break;
        case(2):case(3):tr=0.08;break;
        default:tr=0.1;break;
    }
    tr_result = tr*ma;
    ma_result = ma - tr_result;

    printf("tax rate : %.0f%%\n",tr*100);
    printf("tax payable : %.1f\n",tr_result);
    printf("prize money: %.1f\n",ma_result);

}
