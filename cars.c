#include <studio.h>

struct car
{ 
char modelo[50] ;
double timi ;
int manufacturedate;

};
int main () 
{  
int end= 0;
struct cars [100] ;
for ( int i = 0; i< 100; 1++)
{
	printf("eisagete montelo");
	scanf("%s", &cars[i]. montelo);
	print("eisagete timh");
	scanf("%1f",&cars[i].timh);
	printf("eisagete etos kataskeyis");
	scanf("%d", &cars[i].manufacturedate);
	if(cars[i].manufacturedate == -1)
	
	{
		i=100;
	}
	
}
    while (end == 0)
    {
     printf("1.emfanisi montelou\n");
	 printf("2.emfanisi basi timis\n");
	 printf("3.termatismos\n"   );
	 int epilogi;
	 scanf("%d",&epilogi);
	 if(epilogi ==1)
	 { 
	 char mdl[50];
	 printf("anazitise montelo:");
	 scanf("%s",&mdl);
	 for(int i =0; i < 100; i++)
	 {
	 if (strcp(mdl,"*")==0)
	 { 
	 if (cars[i].timi> 0&&cars[i].manufacturedate>0)
	 {
	 	printf("montelo:% s\n", cars[i].montelo);
	 	printf("timi : % 1f\n",cars[i].timi);
	 	printf("etos kataskeyis: % d\n", cars[i].manufacturedate);
	 	
	 }
	 }
          if(strcmp(cars[i].montelo,mdl)==0)
		  {
		  	printf("montelo: % s\n",cars[i].montelo);
		  	printf("timi: % 1f\n", cars[i].timi);
		  	printf("etos kataskeyis: % d\n", cars[i].manufacturedate );
		  	  i=101;
			   }	
	 }
	 }else if(epilogi==2)
	
	
	
	{ 
	
	double price= 0.0;
	
	printf("eisagete timi:");
	scanf("% 1f",&price);
	if", price);
	for(int i=0; i<99; i++)
	{
		for(int j=0; j<99-i; j++)
		{ 
		if(cars[j].timi>cars[j+1].timi)
		{
			struct car temp = cars[j];
			cars[j] =cars[j+1];
			cars[j+1] = temp;
		}
		}
	}
	 for(int i=0; i<100; 1++)
	 { if(cars[i].timi > price && cars [i].manufacturedate >0)
	 {
	 	printf("montelo: % s\n", cars[i].montelo);
	 	printf("timi: % 1f\n", cars[i].timi);
	 	printf("etos kataskeuis:% d\n", cars[i].manufacturedate);
	 }
	 }
	}
	else if(epilogi ==3)
	{ 
	printf("termatismos programmatos\n");
	end =1;
	return 0;
	}

}
}
