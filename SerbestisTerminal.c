#include <stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
void komunal_odenisler() {
    int secim,qaz_secim,qebz,qaz_odenish,melumat_tesdiq,emeliyyat_tesdiq,ishiq_secim,ishiq,ishiq_odenishi,su_odenish,internet_odenish,mobil_odenish;
    char qaz_kartkodu[14],su_kartkodu[15],ishiq_abonentkodu[13],internet_kodu[13],x[9];

    FILE *qaz;
qaz=fopen("D:\\01. SYSTEM FOLDERS\\Desktop\\Qebz.txt","w");//1
 srand(time(NULL));
    /////
    time_t t;
    time(&t);
    char strqebznomresi[20],stremelnomresi[20];
    long long  qebz_nomresi=rand()*123,emeliyat_nomresi=rand()*176;
    sprintf(strqebznomresi, "%ld", qebz_nomresi);
    sprintf(stremelnomresi, "%ld", emeliyat_nomresi);
    //////////////////
char strqebz_odenish[20];
    long intqebz_odenish=qaz_odenish;

    sprintf(strqebz_odenish, "%ld",intqebz_odenish);
 printf("\n");
    printf("Komunal odenisler:\n");
     printf("\n");
    printf("1. Qaz\n");
    printf("2. Su\n");
    printf("3. Isiq\n");
    printf("4. Internet\n");
      printf("\n");
    printf("Seciminizi edin: ");
    scanf("%d", &secim);
     printf("\n");
    switch (secim) {
        ////////////////////////////////////////////////////////////

        case 1:////////////////////////////////////////////////////////////////////QAZ-start

    printf("1. Bildirishle Odeme \t");
    printf("2. Smart Kartla Odeme\t");
    printf("3. Smart Kart Berpasi\n");

     printf("\n");
 printf("Seciminizi edin: ");
    scanf("%d", &qaz_secim);
    printf("\n");
    switch(qaz_secim){
case 1:
    printf("15 Reqemli kodu Daxil Edin: ");
     scanf("%s", &qaz_kartkodu);
     printf("\n");

if(strlen(qaz_kartkodu)!=15){
    printf("\n Kodunuz Ya  Yanlishdir Ya da 15 reqemli deyil  .\n");
}else{

printf("\n****************************************************************************************************************\n");
printf("Mushterinin Adi : Amin Hasanov\n");
printf("Saygacin Nomresi: 224we23rfewdsGWEFSDfs\n");
printf("Mushterinin Borcu : 13Azn\n");
printf("Abone Kodu : 25563yerhtrhtrstrw\n");
printf("Parol: %s",qaz_kartkodu);
         printf("\n");
         printf("\nOdenilecek Meblegi Daxil Edin:");
         scanf("%d",&qaz_odenish);
         ///////////////////////////////////
         char strqebz_odenish[20],qebz_qaliq[12];
    long intqebz_odenish=qaz_odenish;
   long intqebz_qaliq=13-qaz_odenish;
    sprintf(qebz_qaliq, "%ld",intqebz_qaliq);
    sprintf(strqebz_odenish, "%ld",intqebz_odenish);
//////////////////////////////////////////
         printf("\n");
printf("Qebz Cap Olunsun?\n");
printf("Beli Ucun 1 Xeyr Ucun 0 yazin:");
  scanf("%d",&qebz);
   if(qebz==1){
                  printf("**************************************\n");
                  /////////////////////////////////////////////////////////////////////////QAZ-QEBZ
                   fprintf(qaz,"E-MANAT\n");

 fprintf(qaz,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(qaz,"Qebz nomresi:");
 fprintf(qaz,strqebznomresi);
///////

 fprintf(qaz,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(qaz,"Tarix: ");
  fprintf(qaz,"%s", ctime(&t));
  /////////////
   fprintf(qaz,"\n");
    fprintf(qaz,":AZERIQAZ BILDIRISHLE ODEME: Daxil Edildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");

     fprintf(qaz,"\nOdenildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");
     fprintf(qaz,"\nQaliq: %s",qebz_qaliq);
      fprintf(qaz,"Azn");
     fprintf(qaz,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(qaz,"\nTelefon/Hesab/Erize nomresi: %s",qaz_kartkodu);

      //////////////////
       fprintf(qaz,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(qaz,"\n");
         fprintf(qaz,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(qaz,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(qaz,"E-mail:info@modenis.az\n");
                  /////////////////////////////////////////////////////////////////////////////QAZ-Qebz

                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}


}

    break;
//////////////////////////////////////////////////////////////////////////////////////////////////
case 2:
//////////////////////////////////////////////////
    printf("Karti Oxuyucuya Daxil edin  Zehmet olmasa\n");
        printf("Kart Yoxlanilir........\n\n");
        printf("****************************************************************************************************************\n");
            printf("Melumatlariniz:\n\n");
    printf("Mushterinin Adi : Amin Hasanov\n");
printf("Saygacin Nomresi: GPD235134524224\n");
printf("Kartin  Nomresi: 440004AAFF22341\n");
printf("Kart Balansi :  Kartda Qaliq Yoxdur\n");
    printf("\n");
    printf("Melumatlariniz Dogrudur?\n");
    printf("Dogrudursa 1 Yanlishdirsa 0 yazin: ");
    scanf("%d",&melumat_tesdiq);
    if(melumat_tesdiq==1){
        printf("\nOdenilecek Meblegi Daxil Edin:");
         scanf("%d",&qaz_odenish);
         ////////////////////////////////////////////////
         char strqebz_odenish[20],qebz_qaliq[12];
    long intqebz_odenish=qaz_odenish;
   long intqebz_qaliq=13-qaz_odenish;
    sprintf(qebz_qaliq, "%ld",intqebz_qaliq);
    sprintf(strqebz_odenish, "%ld",intqebz_odenish);
         ///////////////////////////////////////////////
printf("Qebz Cap Olunsun?\n");
printf("Beli Ucun 1 Xeyr Ucun 0 yazin:");
  scanf("%d",&qebz);
    if(qebz==1){
                  printf("**************************************\n");
 fprintf(qaz,"E-MANAT\n");

 fprintf(qaz,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(qaz,"Qebz nomresi:");
 fprintf(qaz,strqebznomresi);
///////

 fprintf(qaz,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(qaz,"Tarix: ");
  fprintf(qaz,"%s", ctime(&t));
  /////////////
   fprintf(qaz,"\n");
    fprintf(qaz,":AZERIQAZ BILDIRISHLE ODEME: Daxil Edildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");

     fprintf(qaz,"\nOdenildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");

     fprintf(qaz,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(qaz,"\nTelefon/Hesab/Erize nomresi: 235214121675675124");

      //////////////////
       fprintf(qaz,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(qaz,"\n");
         fprintf(qaz,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(qaz,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(qaz,"E-mail:info@modenis.az\n");
                  /////////////////////////////////////////////////////////////////////////////QAZ-Qebz

                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}
    break;
////////////////////////////////////////////////////////////////////////////

case 3:
/////////////////////////////////////////////////////////////
 printf("Karti Oxuyucuya Daxil edin  Zehmet olmasa\n");
        printf("Kart Yoxlanilir........\n\n");
            printf("Melumatlariniz:\n\n");
    printf("Mushterinin Adi : Amin Hasanov\n");
printf("Saygacin Nomresi: GPD235134524224\n");
printf("Kartin  Nomresi: 440004AAFF22341\n");
printf("Kart Balansi :  Kartda Qaliq Yoxdur\n");
    printf("\n");
    printf("Melumatlariniz Dogrudur?\n");
    printf("Dogrudursa 1 Yanlishdirsa 0 yazin: ");
    scanf("%d",&melumat_tesdiq);
    if(melumat_tesdiq==1){
        printf("Son Emeliyyatlar\n");
        printf("Istifadechi  Adi : Amin Hasanov\n");
printf("Odenish Novu: Adi Odenish\n");
printf("Kartin  Nomresi: 440004AAFF22341\n");
printf("Son Emeliyyat tarixi :4/28/2023\n");
printf("Son emeliyyat berpa edilsin?\n");
printf("Berpa etmek ucun 1 Emeliyyati bitirmek ucun 0 yazin:");
scanf("%d",&emeliyyat_tesdiq);
if(emeliyyat_tesdiq==1){
    printf("\n\nKart Ugurla Berpa Edildi");
}else{
  printf("\n\nEmeliyyat bitdi");
}

    }

    break;
////////////////////////////////////////////////////////////
default :
printf("\nSeciminiz yanlisdir.\n");
            break;

    }




////////////////////////////////////////////////////
//printf("Qebz Cap Olunsun?\n");
//    scanf("%d",&qebz);
//    (1==qebz)? printf("Qebz Cap Olunur.......\n  Tesekkur edirik!") : printf(" Tesekkur edirik!\n");
    }
            break;//////////////////////////////////////////////////////////////////////////////////////////////////QAZ-end
        case 2:
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////SU-Start
             printf("1. Hesaba odenis \t");
    printf("2. Smart Karta Odenis\t");


     printf("\n");
 printf("Seciminizi edin: ");
    scanf("%d", &secim);
    printf("\n");
    switch(secim){
case 1:
    printf("15 Reqemli kodu Daxil Edin: ");
     scanf("%s", &su_kartkodu);
     printf("\n");

if(strlen(su_kartkodu)!=15){
    printf(" Kodunuz Ya  Yanlishdir Ya da 15 reqemli deyil  .\n");
}else{

printf("****************************************************************************************************************\n");
printf("Mushterinin Adi : Amin Hasanov\n");
printf("Saygacin Nomresi: 231\n");
printf("Mushterinin Borcu : 15 AzN\n");
printf("Abone Kodu : 33624grwst645\n");
printf("Parol: %s",su_kartkodu);
         printf("\n");
         printf("\nOdenilecek Meblegi Daxil Edin:");
         scanf("%d",&su_odenish);
         ////////////////////////////////////////////////
         char strqebz_odenish[20],qebz_qaliq[12];
    long intqebz_odenish=su_odenish;
   long intqebz_qaliq=15-su_odenish;
    sprintf(qebz_qaliq, "%ld",intqebz_qaliq);
    sprintf(strqebz_odenish, "%ld",intqebz_odenish);
         ///////////////////////////////////////////////
printf("Qebz Cap Olunsun?\n");
printf("Beli Ucun 1 Xeyr Ucun 0 yazin:");
  scanf("%d",&qebz);
    if(qebz==1){
                  printf("**************************************\n");
///////////////////////////////////////////////////////////////////////////////////////////qebzSU
  /////////////////////////////////////////////////////////////////////////Su-QEBZ
                   fprintf(qaz,"E-MANAT\n");

 fprintf(qaz,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(qaz,"Qebz nomresi:");
 fprintf(qaz,strqebznomresi);
///////

 fprintf(qaz,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(qaz,"Tarix: ");
  fprintf(qaz,"%s", ctime(&t));
  /////////////
   fprintf(qaz,"\n");
    fprintf(qaz,":AZERISU HESABA ODEME: Daxil Edildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");

     fprintf(qaz,"\nOdenildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");
     fprintf(qaz,"\nQaliq: %s",qebz_qaliq);
      fprintf(qaz,"Azn");
     fprintf(qaz,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(qaz,"\nTelefon/Hesab/Erize nomresi: %s",su_kartkodu);

      //////////////////
       fprintf(qaz,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(qaz,"\n");
         fprintf(qaz,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(qaz,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(qaz,"E-mail:info@modenis.az\n");
                  /////////////////////////////////////////////////////////////////////////////SU-Qebz
                  /////////////////////////////////////////////////////////////////////////////SU-Qebz
                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}
}
printf("****************************************************************************************************************\n");
    break;
//////////////////////////////////////////////////////////////////////////////////////////////////
case 2:
//////////////////////////////////////////////////
printf("****************************************************************************************************************\n");
    printf("Karti Oxuyucuya Daxil edin  Zehmet olmasa\n");
        printf("Kart Yoxlanilir........\n\n");
            printf("Melumatlariniz:\n\n");
    printf("Mushterinin Adi : Amin Hasanov\n");
printf("Saygacin Nomresi: GPD235134524224\n");
printf("Kartin  Nomresi: 440004AAFF22341\n");
printf("Kart Balansi :  Kartda Qaliq Yoxdur\n");
    printf("\n");
    printf("Melumatlariniz Dogrudur?\n");
    printf("Dogrudursa 1 Yanlishdirsa 0 yazin: ");
    scanf("%d",&melumat_tesdiq);
    if(melumat_tesdiq==1){
        printf("\nOdenilecek Meblegi Daxil Edin:");
         scanf("%d",&su_odenish);
         ////////////////////////////////////////////////
         char strqebz_odenish[20],qebz_qaliq[12];
    long intqebz_odenish=su_odenish;
   long intqebz_qaliq=15-su_odenish;
    sprintf(qebz_qaliq, "%ld",intqebz_qaliq);
    sprintf(strqebz_odenish, "%ld",intqebz_odenish);
         ///////////////////////////////////////////////
printf("Qebz Cap Olunsun?\n");
printf("Beli Ucun 1 Xeyr Ucun 0 yazin:");
  scanf("%d",&qebz);
   if(qebz==1){
                  printf("**************************************\n");
/////////////////////////////////////////////////////////////////////////Su-QEBZ
                   fprintf(qaz,"E-MANAT\n");

 fprintf(qaz,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(qaz,"Qebz nomresi:");
 fprintf(qaz,strqebznomresi);
///////

 fprintf(qaz,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(qaz,"Tarix: ");
  fprintf(qaz,"%s", ctime(&t));
  /////////////
   fprintf(qaz,"\n");
    fprintf(qaz,":AZERISU HESABA ODEME: Daxil Edildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");

     fprintf(qaz,"\nOdenildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");
     fprintf(qaz,"\nQaliq: %s",qebz_qaliq);
      fprintf(qaz,"Azn");
     fprintf(qaz,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(qaz,"\nTelefon/Hesab/Erize nomresi: 12412135135497");

      //////////////////
       fprintf(qaz,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(qaz,"\n");
         fprintf(qaz,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(qaz,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(qaz,"E-mail:info@modenis.az\n");
                  /////////////////////////////////////////////////////////////////////////////SU-Qebz




                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}

    }else{
    printf("\nQaynar Xett Ile Elaqe Saxlayin...(104)\n\n");
    }
    printf("****************************************************************************************************************\n");
    break;
////////////////////////////////////////////////////////////////////////////


default :
printf("\nSeciminiz yanlisdir.\n");
            break;

    }


            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////SU-End
            break;
        case 3:
        	///////////////////////////////////////////////////////////////////////////////ISHIQ-Start

 printf("1. Ehali \t");
    printf("2. Qeyri-Ehali\t");
    printf("3. Smart Kart \n");
            printf("Sechiminiz:");
            scanf("%d",&ishiq_secim);
            switch(ishiq_secim){
            	case 1:
            		printf("Abonent kodunu kodu Daxil Edin: ");
     scanf("%s", &ishiq_abonentkodu);


if(strlen(ishiq_abonentkodu)!=13){
    printf("\n Kodunuz Ya  Yanlishdir Ya da 13 reqemli deyil  .\n");
}else{


printf("Mushterinin Adi : Amin Hasanov\n");
printf("Xetai, Ehmedli, Sarayeva,Ev(Bina):0002, Menzil:0023\n");
printf("Borc : 223 Azn\n");
         printf("\n");
         printf("Odenilecek Meblegi Daxil Edin:");
         scanf("%d",&ishiq_odenishi);
          ////////////////////////////////////////////////
         char strqebz_odenish[20],qebz_qaliq[12];
    long intqebz_odenish=ishiq_odenishi;
   long intqebz_qaliq=223-ishiq_odenishi;
    sprintf(qebz_qaliq, "%ld",intqebz_qaliq);
    sprintf(strqebz_odenish, "%ld",intqebz_odenish);
         ///////////////////////////////////////////////
printf("Qebz Cap Olunsun?\n");
printf("Beli Ucun 1 Xeyr Ucun 0 yazin:");
  scanf("%d",&qebz);
if(qebz==1){
                  printf("**************************************\n");
/////////////////////////////////////////////////////////////////////////ISHIQ-QEBZ
                   fprintf(qaz,"E-MANAT\n");

 fprintf(qaz,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(qaz,"Qebz nomresi:");
 fprintf(qaz,strqebznomresi);
///////

 fprintf(qaz,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(qaz,"Tarix: ");
  fprintf(qaz,"%s", ctime(&t));
  /////////////
   fprintf(qaz,"\n");
    fprintf(qaz,":AZERIISHIQ : Daxil Edildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");

     fprintf(qaz,"\nOdenildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");
     fprintf(qaz,"\nQaliq: %s",qebz_qaliq);
      fprintf(qaz,"Azn");
     fprintf(qaz,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(qaz,"\nTelefon/Hesab/Erize nomresi:%s",ishiq_abonentkodu);

      //////////////////
       fprintf(qaz,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(qaz,"\n");
         fprintf(qaz,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(qaz,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(qaz,"E-mail:info@modenis.az\n");
                  /////////////////////////////////////////////////////////////////////////////ISHIQ-Qebz

                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}




}




            		break;
            		case 2:
printf("Abonent kodunu kodu Daxil Edin: ");
     scanf("%s", &ishiq_abonentkodu);


if(strlen(ishiq_abonentkodu)!=13){
    printf("\n Kodunuz Ya  Yanlishdir Ya da 13 reqemli deyil  .\n");
}else{


printf("Muessese Adi :BMU \n");
printf("Xirdalan, Vazin kruqundan asagi\n");
printf("Borc : 2500 Azn\n");
         printf("\n");
         printf("Odenilecek Meblegi Daxil Edin:");
         scanf("%d",&ishiq_odenishi);
           ////////////////////////////////////////////////
         char strqebz_odenish[20],qebz_qaliq[12];
    long intqebz_odenish=ishiq_odenishi;
   long intqebz_qaliq=2500-ishiq_odenishi;
    sprintf(qebz_qaliq, "%ld",intqebz_qaliq);
    sprintf(strqebz_odenish, "%ld",intqebz_odenish);
         ///////////////////////////////////////////////
printf("Qebz Cap Olunsun?\n");
printf("Beli Ucun 1 Xeyr Ucun 0 yazin:");
  scanf("%d",&qebz);

if(qebz==1){
                  printf("**************************************\n");
/////////////////////////////////////////////////////////////////////////ISHIQ-QEBZ
                   fprintf(qaz,"E-MANAT\n");

 fprintf(qaz,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(qaz,"Qebz nomresi:");
 fprintf(qaz,strqebznomresi);
///////

 fprintf(qaz,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(qaz,"Tarix: ");
  fprintf(qaz,"%s", ctime(&t));
  /////////////
   fprintf(qaz,"\n");
    fprintf(qaz,":AZERISHIQ : Daxil Edildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");

     fprintf(qaz,"\nOdenildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");
     fprintf(qaz,"\nQaliq: %s",qebz_qaliq);
      fprintf(qaz,"Azn");
     fprintf(qaz,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(qaz,"\nTelefon/Hesab/Erize nomresi:%s",ishiq_abonentkodu);

      //////////////////
       fprintf(qaz,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(qaz,"\n");
         fprintf(qaz,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(qaz,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(qaz,"E-mail:info@modenis.az\n");
                  /////////////////////////////////////////////////////////////////////////////ISHIQ-Qebz

                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}

}

            			break;
            			case 3:
printf("Karti Oxuyucuya Daxil edin  Zehmet olmasa\n");
        printf("Kart Yoxlanilir........\n\n");
            printf("Melumatlariniz:\n\n");
    printf("Mushterinin Adi : Amin Hasanov\n");
printf("Saygacin Nomresi: GPD235134524224\n");
printf("Kartin  Nomresi: 440004AAFF22341\n");
printf("Kart Balansi :  Kartda Qaliq Yoxdur\n");
    printf("\n");
    printf("Melumatlariniz Dogrudur?\n");
    printf("Dogrudursa 1 Yanlishdirsa 0 yazin: ");
    scanf("%d",&melumat_tesdiq);
    if(melumat_tesdiq==1){
        printf("\nOdenilecek Meblegi Daxil Edin:");
         scanf("%d",&qaz_odenish);
         ////////////////////////////////////////////////
         char strqebz_odenish[20],qebz_qaliq[12];
    long intqebz_odenish=qaz_odenish;
   long intqebz_qaliq=2500-qaz_odenish;
    sprintf(qebz_qaliq, "%ld",intqebz_qaliq);
    sprintf(strqebz_odenish, "%ld",intqebz_odenish);
         ///////////////////////////////////////////////
printf("Qebz Cap Olunsun?\n");
printf("Beli Ucun 1 Xeyr Ucun 0 yazin:");
  scanf("%d",&qebz);
    if(qebz==1){
                  printf("**************************************\n");

/////////////////////////////////////////////////////////////////////////ISHIQ-QEBZ
                   fprintf(qaz,"E-MANAT\n");

 fprintf(qaz,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(qaz,"Qebz nomresi:");
 fprintf(qaz,strqebznomresi);
///////

 fprintf(qaz,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(qaz,"Tarix: ");
  fprintf(qaz,"%s", ctime(&t));
  /////////////
   fprintf(qaz,"\n");
    fprintf(qaz,":AZERISHIQ : Daxil Edildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");

     fprintf(qaz,"\nOdenildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");
     fprintf(qaz,"\nQaliq: %s",qebz_qaliq);
      fprintf(qaz,"Azn");
     fprintf(qaz,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(qaz,"\nTelefon/Hesab/Erize nomresi: 323457693611259");

      //////////////////
       fprintf(qaz,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(qaz,"\n");
         fprintf(qaz,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(qaz,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(qaz,"E-mail:info@modenis.az\n");
                  /////////////////////////////////////////////////////////////////////////////ISHIQ-Qebz

                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}

    }else{
    printf("\nQaynar Xett Ile Elaqe Saxlayin...(104)\n\n");
    }
          break;
            default	:
            					printf("Sechiminiz yanlishdir");}

            break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////ISHIQ-End

        case 4:
//////////////////////////////////////////////////////////////////////////////////////////////////////////INTERNET-START
 printf("1. Telefon nomresi \t");
 printf("2. Abonent kodu\t");

     printf("\n");
 printf("Seciminizi edin: ");
    scanf("%d", &secim);
    printf("\n");
    switch(secim){
case 1:
    printf(" Telefon Nomresini  Daxil Edin: ");
     scanf("%s", &internet_kodu);
     printf("\n");

if(strlen(internet_kodu)<7){
    printf("\n Kodunuz Yanlishdir.....\n");
}else{


printf("Mushterinin Adi : Ibrahim Bayramli\n");
printf("Telefon: %s\n",internet_kodu);
printf("Mushterinin Borcu : 20AzN\n");
printf("Abonent Kodu : 7400180080080\n");

         printf("\nOdenilecek Meblegi Daxil Edin:");
         scanf("%d",&internet_odenish);
         ////////////////////////////////////////////////
         char strqebz_odenish[20],qebz_qaliq[12];
    long intqebz_odenish=internet_odenish;
   long intqebz_qaliq=20-internet_odenish;
    sprintf(qebz_qaliq, "%ld",intqebz_qaliq);
    sprintf(strqebz_odenish, "%ld",intqebz_odenish);
         ///////////////////////////////////////////////

printf("\nQebz Cap Olunsun?\n");
printf("Beli Ucun 1 Xeyr Ucun 0 yazin:");
  scanf("%d",&qebz);
    if(qebz==1){
                  printf("**************************************\n");

/////////////////////////////////////////////////////////////////////////INTERNET-QEBZ
                   fprintf(qaz,"E-MANAT\n");

 fprintf(qaz,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(qaz,"Qebz nomresi:");
 fprintf(qaz,strqebznomresi);
///////

 fprintf(qaz,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(qaz,"Tarix: ");
  fprintf(qaz,"%s", ctime(&t));
  /////////////
   fprintf(qaz,"\n");
    fprintf(qaz,":AZTELECOM : Daxil Edildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");

     fprintf(qaz,"\nOdenildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");
     fprintf(qaz,"\nQaliq: %s",qebz_qaliq);
      fprintf(qaz,"Azn");
     fprintf(qaz,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(qaz,"\nTelefon/Hesab/Erize nomresi:%s",internet_kodu);

      //////////////////
       fprintf(qaz,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(qaz,"\n");
         fprintf(qaz,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(qaz,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(qaz,"E-mail:info@modenis.az\n");
                  /////////////////////////////////////////////////////////////////////////////INTERNET-Qebz
                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}
}

    break;
//////////////////////////////////////////////////////////////////////////////////////////////////
case 2:
//////////////////////////////////////////////////
    printf(" Abonent kodunu Daxil Edin: ");
     scanf("%s", &internet_kodu);
     printf("\n");

if(strlen(internet_kodu)<13){
    printf("\n Kodunuz Yanlishdir.....\n");
}else{


printf("Mushterinin Adi : Ibrahim Bayramli\n");
printf("Telefon Nomresi: 3495961\n");
printf("Mushterinin Borcu : 20.00\n");
printf("Abonent Kodu : 7400180080080\n");
printf("Parol: %s",internet_kodu);
         printf("\n");
         printf("\nOdenilecek Meblegi Daxil Edin:");
         scanf("%d",&internet_odenish);
           ////////////////////////////////////////////////
         char strqebz_odenish[20],qebz_qaliq[12];
    long intqebz_odenish=internet_odenish;
   long intqebz_qaliq=20-internet_odenish;
    sprintf(qebz_qaliq, "%ld",intqebz_qaliq);
    sprintf(strqebz_odenish, "%ld",intqebz_odenish);
         ///////////////////////////////////////////////
printf("Qebz Cap Olunsun?\n");
printf("Beli Ucun 1 Xeyr Ucun 0 yazin:");
  scanf("%d",&qebz);
    if(qebz==1){
                  printf("**************************************\n");

/////////////////////////////////////////////////////////////////////////INTERNET-QEBZ
                   fprintf(qaz,"E-MANAT\n");

 fprintf(qaz,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(qaz,"Qebz nomresi:");
 fprintf(qaz,strqebznomresi);
///////

 fprintf(qaz,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(qaz,"Tarix: ");
  fprintf(qaz,"%s", ctime(&t));
  /////////////
   fprintf(qaz,"\n");
    fprintf(qaz,":AZTELECOM : Daxil Edildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");

     fprintf(qaz,"\nOdenildi: %s",strqebz_odenish);
     fprintf(qaz,"Azn");
     fprintf(qaz,"\nQaliq: %s",qebz_qaliq);
      fprintf(qaz,"Azn");
     fprintf(qaz,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(qaz,"\nTelefon/Hesab/Erize nomresi:%s",internet_kodu);

      //////////////////
       fprintf(qaz,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(qaz,"\n");
         fprintf(qaz,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(qaz,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(qaz,"E-mail:info@modenis.az\n");
                  /////////////////////////////////////////////////////////////////////////////INTERNET-Qebz

                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}
}

    break;
////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
default :
printf("\nSeciminiz yanlisdir.\n");
            break;

    }


break;
              default:
            printf("Seciminiz yanlisdir.\n");
            break;
    }
}
/////////////////////////////////////////////////////////////
void bank_xidmetleri() {

    ///////////////////////////////////////////////////////////////////////////////////////////
    FILE *aze;
aze=fopen("D:\\01. SYSTEM FOLDERS\\Desktop\\Qebz.txt","w");//2
    srand(time(NULL));
    /////
    time_t t;
    time(&t);
    char strqebznomresi[20],stremelnomresi[20];
    long long  qebz_nomresi=rand()*123,emeliyat_nomresi=rand()*176;
    sprintf(strqebznomresi, "%ld", qebz_nomresi);
    sprintf(stremelnomresi, "%ld", emeliyat_nomresi);
    ////////////////////////////////////////////////////////////////////////////////////////////

     /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   printf("\t**********************************Bank xidmetleri**********************************\n");
	printf("1)KapitalBank\n");
	printf("====================================================================================");
	printf("\n2)LeoBank\n");
	printf("====================================================================================");
	printf("\n3)PasaBank\n");
	printf("====================================================================================");
	printf("\nKapitalBank ucun 1-e\nLeoBank ucun 2-e\nPasaBank ucun 3-e\nbasin:");
    int n;
    scanf("%d", &n);
    if(n==1){
    	printf("================================================================================");
    	printf("\nXahis edirik,kartinizin  16 reqemini daxil edin:");
    	char x[17];
    	scanf("%s",&x);
		if(strlen(x)!=16){
    		printf("Bu daxil edilen ya kod yanlishdir ya da 16 reqemli deyil.");
		}else{
		printf("Xahis edirik ,Kartinizin bitme tarixini daxil edin:");
		char f[5];
		scanf("%s",&f);
		if(strlen(f)==4){

		}else if(strlen(f)!=4){
			printf("Yanlish tarix daxil etmisiniz zehmet olmasa duzgun tarixi qeyd edin.");
		}
		if(strlen(f)==4){
		printf("\n==============================================================================================");
		printf("\nKod yoxlanilir........\nXahis edirik gozleyin");
		printf("\n==============================================================================================");
		printf("\nMusterinin adi:");
		printf("Amin Hesenov");
		printf("\nKartin reqemi:************ ");
		for(int i=12;i<strlen(x);i++){ printf("%c",x[i]);}

		printf("\nKartin bitme tarixi:");
		printf("%s",f);
		printf("\nDaxil edilmish melumatin duzgunluyunu tesdiq edin. Eger duzdurse 1-e sehfdirse 0-a basin:");
		int m;
		scanf("%d",&m);
		if(m==1){

			printf("Odenilecek meblegi daxil edin:");
		int odenish;
		scanf("%d",&odenish);
		/////////////////////////////////
char strqebz_odenish[20];
   int intqebz_odenish=odenish;
    sprintf(strqebz_odenish, "%d",intqebz_odenish);
////////////////////////////////////////////////////////
		if(odenish>1000){
			printf("\nMaksimum meblegi kecmisiniz xahis edirik daha az bir mebleg daxil edin.");
		}else if(odenish<2){
		printf("Minimum meblegden asagi pul daxil etmek olmur.");
		}else{printf("Proses ugurla basa catdi.\n");
	    printf("Qebz Cap Olunsun?\n");
        printf("Beli Ucun 1, Xeyr Ucun 0 basin:");
        int qebz;
        scanf("%d",&qebz);
        if(qebz==1){
                  printf("**************************************\n");
/////////////////////////////////////////////////////////////////////////BANK-QEBZ
//
fprintf(aze,"E-MANAT\n");

 fprintf(aze,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(aze,"Qebz nomresi:");
 fprintf(aze,strqebznomresi);
///////

 fprintf(aze,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(aze,"Tarix: ");
  fprintf(aze,"%s", ctime(&t));
  /////////////
   fprintf(aze,"\n");
    fprintf(aze,":Kapital BANK: Daxil Edildi: %s",strqebz_odenish);
     fprintf(aze,"Azn");

  fprintf(aze,"\nOdenildi: %s",strqebz_odenish);
     fprintf(aze,"Azn");
     fprintf(aze,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(aze,"\nHesabin Valyutasi: AZN");
        fprintf(aze,"\nHesab nomresi:135464545655634627");
      fprintf(aze,"\nKapitalBankID: 14526753642153142");
      fprintf(aze,"\nKart nomresi:****%c%c%c%c",x[12],x[13],x[14],x[15]);

      //////////////////
       fprintf(aze,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(aze,"\n");
         fprintf(aze,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(aze,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(aze,"E-mail:info@modenis.az\n");


/////////////////////////////////////////////////////////////////////////////BANK-QEBZ

                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}

		}}else if(m==0){
			printf("\nXahish edirik daxil etdiyiniz kodlari tezden yoxlayin.");
		}

    }
		}///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		}else if(n==2){
                printf("\n================================================================================");
    	printf("\nXahis edirik,kartinizin son 4 reqemini daxil edin:");
    	char x[5];
    	scanf("%s",&x);
		if(strlen(x)!=4){
    		printf("Bu daxil edilen ya kod yanlishdir ya da 4 reqemli deyil.");
		}else{
		printf("Xahis edirik ,Kartinizin bitme tarixini daxil edin:");
		char f[5];
		scanf("%s",&f);
		if(strlen(f)==4){

		}else if(strlen(f)!=4){
			printf("Yanlish tarix daxil etmisiniz zehmet olmasa duzgun tarixi qeyd edin.");
		}
		if(strlen(f)==4){
		printf("\n==============================================================================================");
		printf("\nKod yoxlanilir........\nXahis edirik gozleyin");
		printf("\n==============================================================================================");
		printf("\nMusterinin adi:");
		printf("Amin Hesenov");
		printf("\nKartin reqemi:****");
		for(int i=0;i<strlen(x);i++){ printf("%c",x[i]);}

		printf("\nKartin bitme tarixi:");
		printf("%s",f);
		printf("\nDaxil edilmish melumatin duzgunluyunu tesdiq edin. Eger duzdurse 1-e sehfdirse 0-a basin:");
		int m;
		scanf("%d",&m);
		if(m==1){

			printf("Odenilecek meblegi daxil edin:");
		int odenish;
		scanf("%d",&odenish);
		/////////////////////////////////
char strqebz_odenish[20];
   int intqebz_odenish=odenish;
    sprintf(strqebz_odenish, "%d",intqebz_odenish);
////////////////////////////////////////////////////////
		if(odenish>1000){
			printf("\nMaksimum meblegi kecmisiniz xahis edirik daha az bir mebleg daxil edin.");
		}else if(odenish<2){
		printf("Minimum meblegden asagi pul daxil etmek olmur.");
		}else{printf("Proses ugurla basa catdi.\n");
	    printf("Qebz Cap Olunsun?\n");
        printf("Beli Ucun 1, Xeyr Ucun 0 basin:");
        int qebz;
        scanf("%d",&qebz);
        if(qebz==1){
                  printf("**************************************\n");
/////////////////////////////////////////////////////////////////////////BANK-QEBZ
//
fprintf(aze,"E-MANAT\n");

 fprintf(aze,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(aze,"Qebz nomresi:");
 fprintf(aze,strqebznomresi);
///////

 fprintf(aze,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(aze,"Tarix: ");
  fprintf(aze,"%s", ctime(&t));
  /////////////
   fprintf(aze,"\n");
    fprintf(aze,":Leo BANK: Daxil Edildi: %s",strqebz_odenish);
     fprintf(aze,"Azn");

  fprintf(aze,"\nOdenildi: %s",strqebz_odenish);
     fprintf(aze,"Azn");
     fprintf(aze,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(aze,"\nHesabin Valyutasi: AZN");
        fprintf(aze,"\nHesab nomresi:135464545655634627");
      fprintf(aze,"\nKapitalBankID: 14526753642153142");
      fprintf(aze,"\nKart nomresi:****%s",x);

      //////////////////
       fprintf(aze,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(aze,"\n");
         fprintf(aze,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(aze,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(aze,"E-mail:info@modenis.az\n");


/////////////////////////////////////////////////////////////////////////////BANK-QEBZ

                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}}

		}else if(m==0){
			printf("\nXahish edirik daxil etdiyiniz kodlari tezden yoxlayin.");
		}
		}
    }

    	}else if(n==3){
    	     printf("\n================================================================================");
    	printf("\nXahis edirik,kartinizin son 8 reqemini daxil edin:");
    	char x[9];
    	scanf("%s",&x);
		if(strlen(x)!=8){
    		printf("Bu daxil edilen ya kod yanlishdir ya da 4 reqemli deyil.");
		}else{
		printf("Xahis edirik ,Kartinizin bitme tarixini daxil edin:");
		char f[5];
		scanf("%s",&f);
		if(strlen(f)==4){

		}else if(strlen(f)!=4){
			printf("Yanlish tarix daxil etmisiniz zehmet olmasa duzgun tarixi qeyd edin.");
		}
		if(strlen(f)==4){
		printf("\n==============================================================================================");
		printf("\nKod yoxlanilir........\nXahis edirik gozleyin");
		printf("\n==============================================================================================");
		printf("\nMusterinin adi:");
		printf("Amin Hesenov");
		printf("\nKartin reqemi:**** ");
		for(int i=4;i<strlen(x);i++){ printf("%c",x[i]);}

		printf("\nKartin bitme tarixi:");
		printf("%s",f);
		printf("\nDaxil edilmish melumatin duzgunluyunu tesdiq edin. Eger duzdurse 1-e sehfdirse 0-a basin:");
		int m;
		scanf("%d",&m);
		if(m==1){

			printf("Odenilecek meblegi daxil edin:");
		int odenish;
		scanf("%d",&odenish);
		/////////////////////////////////
char strqebz_odenish[20];
   int intqebz_odenish=odenish;
    sprintf(strqebz_odenish, "%d",intqebz_odenish);
////////////////////////////////////////////////////////
		if(odenish>1000){
			printf("\nMaksimum meblegi kecmisiniz xahis edirik daha az bir mebleg daxil edin.");
		}else if(odenish<2){
		printf("Minimum meblegden asagi pul daxil etmek olmur.");
		}else{printf("Proses ugurla basa catdi.\n");
	    printf("Qebz Cap Olunsun?\n");
        printf("Beli Ucun 1, Xeyr Ucun 0 basin:");
        int qebz;
        scanf("%d",&qebz);
        if(qebz==1){
                  printf("**************************************\n");
/////////////////////////////////////////////////////////////////////////BANK-QEBZ
//
fprintf(aze,"E-MANAT\n");

 fprintf(aze,"Modenis MMC VOEN 15067095661\n");
///////
 fprintf(aze,"Qebz nomresi:");
 fprintf(aze,strqebznomresi);
///////

 fprintf(aze,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(aze,"Tarix: ");
  fprintf(aze,"%s", ctime(&t));
  /////////////
   fprintf(aze,"\n");
    fprintf(aze,":PASHA BANK: Daxil Edildi: %s",strqebz_odenish);
     fprintf(aze,"Azn");

  fprintf(aze,"\nOdenildi: %s",strqebz_odenish);
     fprintf(aze,"Azn");
     fprintf(aze,"\nS.A.A: HESENOV ZAUR MEHDI");
      fprintf(aze,"\nHesabin Valyutasi: AZN");
        fprintf(aze,"\nHesab nomresi:135464545655634627");
      fprintf(aze,"\nKapitalBankID: 14526753642153142");
      fprintf(aze,"\nKart nomresi:****%c%c%c%c",x[4],x[5],x[6],x[7]);

      //////////////////
       fprintf(aze,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(aze,"\n");
         fprintf(aze,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(aze,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(aze,"E-mail:info@modenis.az\n");


/////////////////////////////////////////////////////////////////////////////BANK-QEBZ

                  printf("Qebz chap olunur........\n Teshekkur edirik!!\n");


                  }else{
		      printf("**************************************\n");
		      printf("\nTeshekkur edirik!! \n");

		}}

		}else if(m==0){
			printf("\nXahish edirik daxil etdiyiniz kodlari tezden yoxlayin.");
		}
		}
    }


	}else{
	printf("Tezlikle Diger Banklar da Istifadeye Verilecek.");}


   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////
void mobil_odenisler() {

    int secim;
	int mobil_odenish,qebz;
	char x[10];
	////////////////////////////////////////////////////////////-MOBIL-QEBZ
	   FILE *aze;
aze=fopen("D:\\01. SYSTEM FOLDERS\\Desktop\\Qebz.txt","w");//3

    srand(time(NULL));
    /////
    time_t t;
    time(&t);
    char strqebznomresi[20],stremelnomresi[20],strqebz_odenish[20];
    long long  qebz_nomresi=rand()*123,emeliyat_nomresi=rand()*176;
    sprintf(strqebznomresi, "%ld", qebz_nomresi);
    sprintf(stremelnomresi, "%ld", emeliyat_nomresi);


	////////////////////////////////////////////////////////////-MOBIL-QEBZ
    printf("Sechiminizi edin:\n Azercell uchun : 1\n Nar uchun :2\n Bakcell uchun : 3 \n");
	printf("Sechiminiz:");
	scanf("%d",&secim);
	  printf("**************************************\n");
	switch(secim){
	case 1:   //azercell

		printf("Telefon nomresi daxil edin: ");
		scanf("%s",&x);
		if(x[0]=='0'&&x[1]=='5'&&x[2]=='1'&&strlen(x)==10||x[0]=='0'&&x[1]=='5'&&x[2]=='0'&&strlen(x)==10||x[0]=='0'&&x[1]=='1'&&x[2]=='0'&&strlen(x)==10){
		    printf("**************************************\n");
		    printf("Melumatlarin duzgunluyu yoxlanilir...\n Odenishi daxil edin: ");
			scanf("%d",&mobil_odenish);
			///////////////////////////////
			long intqebz_odenish=mobil_odenish;
			sprintf(strqebz_odenish, "%ld",intqebz_odenish);
			////////////////////////////////
			  printf("**************************************\n");
			printf("Qebz chap olunsun? \n Beli uchun 1, Xeyr uchun 0 yazin:");
			scanf("%d",&qebz);
		if(qebz==1){
                  printf("**************************************\n");
                  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////-QEBZ MOBIL


                  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////QEBZ-MOBIL
			printf("Qebz chap olunur........\n Teshekkur edirik!!\n");
		}else{
		      printf("**************************************\n");
			printf("\nTeshekkur edirik!! \n");
		}
			}else{
				printf("\nMelumatlarin duzgunluyu yoxlanilir...\n\n Nomre yanlishdir tekrar yoxlayin");
			}
			break;
	case 2:
	    //Nar
	    printf("Telefon nomresi daxil edin: ");
		scanf("%s",&x);
		if(x[0]=='0'&&x[1]=='7'&&x[2]=='0'&&strlen(x)==10||x[0]=='0'&&x[1]=='7'&&x[2]=='7'){
		   printf("**************************************\n");
		    printf("Melumatlarin duzgunluyu yoxlanilir...\n Odenishi daxil edin: ");
			scanf("%d",&mobil_odenish);
			////////////////////////////////////
			long intqebz_odenish=mobil_odenish;
			sprintf(strqebz_odenish, "%ld",intqebz_odenish);
			////////////////////////////////////
			  printf("**************************************\n");
			printf("Qebz chap olunsun? \n Beli uchun 1, Xeyr uchun 0 yazin:");
			scanf("%d",&qebz);
		if(qebz==1){
                  printf("**************************************\n");
                   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////-QEBZ MOBIL

 fprintf(aze,"E-MANAT\n");

 fprintf(aze,"Modenis MMC VOEN 1502095661\n");
///////
 fprintf(aze,"Qebz nomresi:");
 fprintf(aze,strqebznomresi);
///////

 fprintf(aze,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(aze,"Tarix: ");
  fprintf(aze,"%s", ctime(&t));
  /////////////
   fprintf(aze,"\n");
    fprintf(aze,":NAR: Daxil Edildi: %s",strqebz_odenish);
     fprintf(aze,"Azn");

     fprintf(aze,"\nOdenildi: %s",strqebz_odenish);
     fprintf(aze,"Azn");
      fprintf(aze,"\nTelefon/Hesab/Erize nomresi: %s",x);

      //////////////////
       fprintf(aze,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(aze,"\n");
         fprintf(aze,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(aze,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(aze,"E-mail:info@modenis.az\n");

                  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////QEBZ-MOBIL
			printf("Qebz chap olunur........\n Teshekkur edirik!!\n");
		}else{
		      printf("**************************************\n");
			printf("\nTeshekkur edirik!!\n ");
		}
			}else{
				printf("\nMelumatlarin duzgunluyu yoxlanilir...\n\n Nomre yanlishdir tekrar yoxlayin\n");
			}
			break;
	case 3:
	    //Bakcell
	    printf("Telefon nomresi daxil edin: ");
		scanf("%s",&x);
		if(x[0]=='0'&&x[1]=='5'&&x[2]=='5'&&strlen(x)==10||x[0]=='0'&&x[1]=='9'&&x[2]=='9'){
		   printf("**************************************\n");
		    printf("Melumatlarin duzgunluyu yoxlanilir...\n Odenishi daxil edin: ");
			scanf("%d",&mobil_odenish);
			////////////////////////////////////
			long intqebz_odenish=mobil_odenish;
			sprintf(strqebz_odenish, "%ld",intqebz_odenish);
			////////////////////////////////////
			  printf("**************************************\n");
			printf("Qebz chap olunsun? \n Beli uchun 1, Xeyr uchun 0 yazin:");
			scanf("%d",&qebz);
		if(qebz==1){
                  printf("**************************************\n");
                      printf("**************************************\n");
                   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////-QEBZ MOBIL

 fprintf(aze,"E-MANAT\n");

 fprintf(aze,"Modenis MMC VOEN 1502095661\n");
///////
 fprintf(aze,"Qebz nomresi:");
 fprintf(aze,strqebznomresi);
///////

 fprintf(aze,"\nTerminal Unvani: Absheron, Baki Muhendislik Universiteti\n");
 /////////
  fprintf(aze,"Tarix: ");
  fprintf(aze,"%s", ctime(&t));
  /////////////
   fprintf(aze,"\n");
    fprintf(aze,":BAKCELL: Daxil Edildi: %s",strqebz_odenish);
     fprintf(aze,"Azn");

     fprintf(aze,"\nOdenildi: %s",strqebz_odenish);
     fprintf(aze,"Azn");
      fprintf(aze,"\nTelefon/Hesab/Erize nomresi: %s",x);

      //////////////////
       fprintf(aze,"\nEmeliyyat nomresi: %s",stremelnomresi);
       ////////////////////
        fprintf(aze,"\n");
         fprintf(aze,"Xais Edirik, mebleg hesabiniza kocurulenedek qebzi saxlayin\n");
          fprintf(aze,"eManat musteri Xidmetleri Tel: 012-404-48-88\n");
           fprintf(aze,"E-mail:info@modenis.az\n");

                  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////QEBZ-MOBIL
			printf("Qebz chap olunur........\n Teshekkur edirik!!\n");
		}else{
		      printf("**************************************\n");
			printf("\nTeshekkur edirik!!\n ");
		}
			}else{
				printf("\nMelumatlarin duzgunluyu yoxlanilir...\n\n Nomre yanlishdir tekrar yoxlayin");
			}


			break;
	default: printf("Sechiminiz yanlishdir zehmet olmasa yeniden cehd edin.");

	}
}
/////////////////////////////////////////////////////////////////////////////////
int main(){


int d,emeliyat;
printf("\n****************************************************************************************************************\n");
  printf("  \t\t Baki Muhendislik Universiteti Terminal Xidmeti\n\n");

  printf(" Hansi Emeliyati Icra etmek Isteyirsiz?\n\n");
    printf(" Kommunal Odenisler uchun 1  \n ");
     printf("Bank_Xidmetleri uchun 2  \n ");
      printf("Mobil Odenisler uchun 3  \n\n ");
  printf("Sechiminiz:");

     scanf("%d", &emeliyat);
 switch(emeliyat){
        case 1:
            komunal_odenisler();
            break;
        case 2:
           bank_xidmetleri();
            break;
        case 3:
           mobil_odenisler();
            break;
        default:
            printf("\nSeciminiz yanlisdir.\n");
            break;

 }



}
