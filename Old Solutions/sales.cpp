#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int Tcase, dataNum;
    vector<int> data;
    scanf("%d", &Tcase);
    while (Tcase--)
    {
        int sum = 0;
        data.clear();
        scanf("%d", &dataNum);
        for (int i = 0; i < dataNum; i++)
        {
            int temp;
            scanf("%d", &temp);
            data.push_back(temp);
        }
      
        for (int i = 1; i < data.size(); i++)
        {
            int cnt=0;
            for (int j = 0; j < i; j++){
             
              if(data[j]<=data[i]){
                  cnt++;
              }
            }
  
            sum+=cnt;
            
        }
        printf("%d\n",sum);
    
    }
    return 0;
}