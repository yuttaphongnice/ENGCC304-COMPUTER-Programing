#include <stdio.h>
#include <string.h>


int No ;
int Day   = 0 ;
int Month = 0 ;
int Year  = 0 ;
int MaxYear  = 0 ;
int MaxMonth = 0 ;
int MinYear  = 10000 ;
int MinMonth = 10000 ;

char Name[10];
char MinN[10];
char MaxN[10];

int main()
{
    FILE *file;
    file = fopen("Test.txt", "r") ;
    fscanf(file, "%*[^\n]") ;
    if (file == NULL)
    {
        printf("\nError Opening File]") ;
    } // end if

    showfile(file) ;
    fclose(file) ;
    printf("\nMax: %s [%d Years, %d Months]", MaxN, MaxYear, MaxMonth) ;
    printf("\nMin: %s [%d Years, %d Months]", MinN, MinYear, MinMonth) ;
    
	return 0 ;
}

int showfile(FILE *a)
{
	int SetDay   = 21 ; 
	int SetMonth = 06 ; 
	int Setyear  = 2018 ;

	int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 } ;

	while (EOF != fscanf(a, "%d %s %d-%d-%d", &No, &Name, &Year, &Month, &Day)) {
  	
		Year = Setyear - Year;
  	if (SetMonth < Month) {
    	Year--;
    	Month = 12 - ( Month - SetMonth) ;       
  	}
  	else
  	{Month = SetMonth - Month;}
  	if (SetDay < Day) {
    Month--;
	Day = md[SetMonth - 1] - (Day - SetDay);
	}
  	else
  	Day = SetDay - Day;
		
        if (Year > MaxYear) {
            strcpy(MaxN, Name);
            MaxYear = Year;
            MaxMonth = Month;
        }
        else if (Year < MinYear) {
            strcpy(MinN, Name);
            MinYear = Year;
            MinMonth = Month;
        }

        printf("%s %d years, %d months\n", Name, Year, Month);
        
    }
    return 0;
}
