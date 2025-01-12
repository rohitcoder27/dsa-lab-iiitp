// Write a program in C to read a string and replace lowercase characters with uppercase and vice
// // versa.

#include <stdio.h>
#include <string.h>

int main()
{

    char str[1000] = "1vKYM,h^dO,<7N-_ZY&}zDj][cv^W76g-h5yc4,>b(=8v9K$qrWQMYxB0S>fi5l:48lZwgPx*C]ccz7lIv1-_*fCz,Hz0KuocF$yDlNkNCfIU4T+{dY1_V:bRtAiWUoY(_^e,kgJNl({*t2Ywsr>$d?vpzw@#CsUn<YihXRM8ruHK[]Y>gW@bV{q$e_QGcbT}S2}gcv6uQ<Ww-eu_0[+f$:)95zh8s0R!lI8oWyAdv^rh)L}Kz3H.Pq5mP4#7wuBzV|Niq5dLLuKm5BO=[-!DczPJ:saqFtI}l$?CK:5$oh{@AxQojsSeR{FLjFUOQ;x2Yo=?iK4wRN{!!G]@Yz7>qeCrB^5)Z;Lohqoh0!Dbol3*RKT?!r<)nraP.XyVI1!H9*OsR9t6+=Nuy]t}?j1mAT1x?()HBL6bslu!#FzPl49BU-kL=@XfniCm(eTkHid0lpB[NSvYn=(Z8|bNVRT8Z$+z(wBiEx8PM|v(KQGPDgg,{?IDQ_:>Y^yy;RGp^fWs](azqz&Ux$Hg#7JmSEchbsF,!4cP9ZZZHS*Q9Ob]kA,&>F|I9:H!n$X&I0vai$RPoz[[$*#]h0W>.OGXA^qFK^l!xz2Fdl#jK1<gI1=IkJGg&4VhB#M3JQEY&>:!jY_Li8JJsp9DYgBx2[E=08Q|h-Q=@CP#)rg|(Pt;4;om}PJTv5G$w&5ETmjvGR{q8.aJLtC?mQl,[MOki$[ETU8dY!q[sge}cesFpUEBbHw{_2|_y&p9s&49Q+X0)1K#X2j#oF.h5k]H#*s:PzV7frzO:=f$GHI-bJYh7UoDW.!s4+mkk7!i*aW@&THm|&?+iP|&;>bP:@7RP@1ZCu7jnm#;Yk<I)[t}El6pb7W[BnF8]]zrk]tx:.qShf}(:k8qnxFo=|cgfz&=p<.z-pO7eWql1?+NbT3g8?vV_pT]Pz34w0-b7s8@6(^y8Z4!by*9y:nak7*R<Lemc{f9a5E6Fj=f9R&!*OL<JQ<Lo5+eh]i";

    // A-Z 65-90
    // a-z 97-122
    // 0-9 48-57

    int len = strlen(str);
    // printf("Length of string is %d\n", len);
    int ascii;
    for (int i = 0; i < len; i++)
    {
        // printf("%c -- %d \n", str[i], str[i]);
        ascii = (int)str[i];

        // if lowercase, make uppercase
        if (ascii >= 97 && ascii <= 122)
        {

            str[i] = (char)(ascii - (97 - 65));
        }

        // if uppercase, make lowercase

        if (ascii >= 65 && ascii <= 90)
        {

            str[i] = (char)(ascii + (97 - 65));
        }
    }
    printf("Modified string is %s", str);
    return 0;
}