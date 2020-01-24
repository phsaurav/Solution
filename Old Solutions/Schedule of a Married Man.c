#include <stdio.h>

int main()
{
	int N,ws,we,ms,me,i;
	int wsh,wsm,weh,wem,msh,msm,meh,mem;

	scanf("%d",&N);

	for (i = 0; i < N; i++)
	{
		scanf("%d:%d %d:%d",&wsh,&wsm,&weh,&wem);
		scanf("%d:%d %d:%d",&msh,&msm,&meh,&mem);

		ws = (wsh*100) + wsm;
		we = (weh*100) + wem;
		ms = (msh*100) + msm;
		me = (meh*100) + mem;

		if(((ms >= ws) && (ms <= we))|| ((me >= ws) && (me <= we)) || (me >= we && ms <= ws))
			printf("Case %d: Mrs Meeting\n",i+1);
		else
			printf("Case %d: Hits Meeting\n",i+1);
	}

	return 0;
}
