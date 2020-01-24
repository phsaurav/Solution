#include <stdio.h>
#include <string.h>

int main() 
{
    int roundNum,ansLength,pos,guessLength,strokes,flag,atleast = 0;
    char ans[10000],guess[10000];
    
    while(scanf("%d",&roundNum))
    {
        strokes = 0;
        flag = 0;
        atleast = 0;
        int ansChar[26] = {0};
        
        getchar();
        if(roundNum == -1)
            break;
        gets(ans);
        gets(guess);
        
        ansLength = strlen(ans);
        
        for(pos = 0; pos < ansLength ; pos++)
        {
            ansChar[ans[pos] - 'a']++;
        }
        
        guessLength = strlen(guess);
        
        for(pos = 0; pos < guessLength; pos++)
        {
            if(ansChar[guess[pos]- 'a'] == 0 && ansChar[guess[pos]-'a'] != -2)
            {
                strokes++;
                ansChar[guess[pos]-'a'] = -2;
                if(strokes == 7)
                    break;
            }
            else
            {
                ansChar[guess[pos] - 'a'] = -1;
                atleast = 1;
            }
        }
        
        if(strokes == 7)
        {
            for(pos = 0; pos < 26; pos++)
            {
                if(ansChar[pos] != 0 && ansChar[pos] != -1 && ansChar[pos] != -2)
                    flag = 1;
            }
            
            if(flag == 1)
            {
                printf("Round %d\n",roundNum);
                printf("You lose.\n");
            }
            else
            {
                printf("Round %d\n",roundNum);
                printf("You win.\n"); 
            }
            
        }
        else
        {
            for(pos = 0; pos < 26; pos++)
            {
                if(ansChar[pos] != 0 && ansChar[pos] != -1 && ansChar[pos] != -2)
                    flag = 1;
            }
            
            if(flag == 1 || atleast == 0)
            {
                printf("Round %d\n",roundNum);
                printf("You chickened out.\n");
                          
            }
            else
            {
                printf("Round %d\n",roundNum);
                printf("You win.\n");  
                                     
            }
                        
        }       
    }
        
    return 0;
}

