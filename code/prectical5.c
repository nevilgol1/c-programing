#include<stdio.h>literate

void main()
{
    long long man,woman,literate_man,literate_woman,illiterare_man,illiterate_woman;
    man=(51.6*1441981744)/100;
    literate_man=(80.95*man)/100;
    illiterare_man= man-literate_man;
    printf("illiterat men is:%ld",illiterare_man);
    woman=(48.4*1441981744)/100;
    literate_woman=(62.84*woman)/100;
    illiterate_woman= woman-literate_woman;
    printf("\nilliterat women is:%ld",illiterate_woman);
}
