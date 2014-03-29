Subject: 
Pitanje s razgovora za posao …?

na razgovoru za posao iOS developer. Javljam Vam se vezano za nas razgovor o 
rekurzivnim funkcijama.

Da li nam je ovo bio kod o kojem smo razgovarali?

#include <stdio.h>


void calc (int A)
{
    printf("\n FIRST: %d",A);

    if (A > 0) calc(A - 1);
    
    else
    {
        printf("\n\n SECOND: %d\n",A);
        return;
    }
    
    printf("\n THIRD: %d",A);
}

int main (int argc, char *argv[])
{
    calc(4);
    
    return 1;
}


Rekli ste mi da probam napisati kod pa da vidim sto se desava, s obzirom da nisam 
zakljucio da ce se kod izvrsavati beskonacno.

Kod sam testirao u XCode-u i u Xamarin Studio-u, i rezultati su identicni, kod ce se 
izvrsiti tocno 10 puta, ako nam je ulazni parametar 4.

I to u sljedecem redosljedu:
















2013-09-25 08:47:23.429 aaa[11669:303]  FIRST: 4
2013-09-25 08:47:25.917 aaa[11669:303]  FIRST: 3
2013-09-25 08:47:28.100 aaa[11669:303]  FIRST: 2
2013-09-25 08:47:30.766 aaa[11669:303]  FIRST: 1
2013-09-25 08:47:36.302 aaa[11669:303]  FIRST: 0

2013-09-25 08:47:40.094 aaa[11669:303]  SECOND: 0

2013-09-25 08:47:47.688 aaa[11669:303]  THIRD: 1
2013-09-25 08:47:49.219 aaa[11669:303]  THIRD: 2
2013-09-25 08:47:51.661 aaa[11669:303]  THIRD: 3
2013-09-25 08:47:52.784 aaa[11669:303]  THIRD: 4

Ono sto mi je promaknulo dok smo razgovarali su ovih zadnjih 5 ispisa, nisam vodio racuna 
o context - switchingu, tocnije o tome da se prilikom svakog poziva 
funkcije sprema trenutno stanje. Da li je to tocan odgovor?

U prilogu Vam saljem screenshotov -e.