#include <stdio.h>

int main()
{
    int totMoney, problem, masala;
    int totMasala,temp,rMasala,totProb;

    while(1)
    {
        totMasala = 0;
        scanf("%d %d %d",&totMoney, &problem, &masala);
        
        if(totMoney == 0 && problem == 0 && masala == 0)
        break;

        totMasala += (totMoney/5) * 2;
        temp = totMoney%5;
        totMasala += temp/3;

        totProb = totMasala/masala;
        totProb *= problem;

        rMasala = totMasala % masala;

        printf("Emrul solves %d Problems, saves %d Pan Moshlas\n",totProb, rMasala);
        
    }
    return 0;
}