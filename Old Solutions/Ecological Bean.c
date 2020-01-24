#include <stdio.h>

int g[9];

int count(int a,int b,int c)
{
    int count;
    int total = 0;

    for(count = 0; count<9; count++)
    {
        if(count != a && count != b && count != c)
            total += g[count];
    }
    return total;
}

int main()
{

  while(scanf("%d",&g[0]) != EOF)
  {
      int BGC,BCG,CBG,CGB,GBC,GCB;
      int min_movement;

      for(int i = 1; i < 9 ; i++)
        scanf("%d",&g[i]);
      char *mname[1];
      BCG = count(0 , 5, 7);
      min_movement = BCG;
      mname[0] = "BCG";

      BGC = count(0 , 4, 8);
      if(BGC < min_movement)
      {
          min_movement = BGC;
          mname[0] = "BGC";
      }
      CBG = count(2 , 3, 7);
      if(CBG < min_movement)
      {
          min_movement = CBG;
          mname[0] = "CBG";
      }
      CGB = count(2 , 4, 6);
      if(CGB < min_movement)
      {
          min_movement = CGB;
          mname[0] = "CGB";
      }
      GBC = count(1 , 3, 8);
      if(GBC < min_movement)
      {
          min_movement = GBC;
          mname[0] = "GBC";
      }
      GCB = count(1 , 5, 6);
      if(GCB < min_movement)
      {
          min_movement = GCB;
          mname[0] = "GCB";
      }

        printf("%s %d\n",mname[0],min_movement);
}

}

