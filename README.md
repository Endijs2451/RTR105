# RTR105
Studiju kursa Datormācība (pamatkurss) elektroniskā ķēde  
Strādāsim Linux operētājsistēmā
  
  #### Atslēga   
  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  
  
  ## 1.nodarbība  
      
  ### Linux pirmās komandas

  - **uname** _- Izvada esošo operētājsistēmu_
  - **uname -a** _- Izvada esošo operētājsistēmu ar atslēgu "-a", atslēgu var pievienot izmantojot "-"_
  - **man uname** _- Pievienojot "man" tiek atvērts manuālis jeb skaidrojums komandai_
  - **whoami** _- Izvada šobrīd esošās operētājsistēmas lietotāju_
  - **history** _- Izvada secībā visas iepriekš izpildītās komandas tā brīža sesijā_

  ## 2.nodarbība   
      
  ### Linux failu komandas
  - **pwd** _- Izvada pilno direktorijas atrašanās vietu, kurā atrodas/darbojas lietotājs_
  - **who**  _- Izvada visus lietotājus_
  - **ls** _- Izvada direktorijas sastāvu/failus_
  - **ls -lt** _- "-lt" izvada failus, dilstošā secībā pēc pēdējā rediģēšanas laika_
  - **ls -lt ABC** _- Izvada prasīto konkrētajai mapei_
  - **ls -alt** _- Pievienotais "a" izvada visus mapes failus, arī apslēptos_
  - **ls Desktop/** _- Izvada failus attiecīgajai mapei_
  - **tree** _- Izvada visus operētājsistēmas failus grafiski_
  - **cd** _- Pārveito lietotāju starp direktorijām_
  - **cd ..** _- Ved dziļāk lietotāju direktorijās, mapi augstāk_
  - **mkdir ABC** _- Izveido direktoriju/mapi_
  - **rmdir ABC** _- Dzēš direktoriju/mapi_
  - **touch text_1.txt** _- Izveido failu_
  - **echo 12345 > text_1.txt** _- Ievada failā lietotāja tekstu_
  - **echo 6789 >> text_1.txt** _- Pievieno failā lietotāja tekstu_
  - **cat text_1.txt** _- Izvada faila sastāvu_
  - **hexdump -C text_1.txt** _- Izvada faila sastāvu skaitliski_
  - **echo -e "12345/n6789"** _- Ievada failā tekstu ar tā rediģējamām īpašībām - piem. space, enter_
  - **echo -e "12345\n6789" > text_2.txt** _- Doto aizsūta uz failu_
  - **cp text_1.txt CDE/**  _- Copē failu: kuru? => Uz kurieni?_
  - **mv CDE/text_1.txt CDE/text_3.txt** _- Pārvieto vai maina nosaukumu failam: kuru? => Uz kurieni?_
  - **rm text_*.txt** _- Dzēš failu, zvaigznīte pieņem jebkādus simbolus nosaukumā_
  - **history > history_20230912_02.txt** _- Izveido failu no history datiem_
    
  *_Ja fails sākas ar ".", tad tas ir apslēpts lietotājam_  
    
  ## 3.nodarbība  
  
  ### Sript komandas  
   - **whereis pwd** - _norāda kur atrodas pwd_
   - **echo $PATH** - _parāda ceļu_ 
   - **nano mans_pirmais_shell_skripts.sh** - _radīt/rediģet pirmo skript failu_
   - **mv mans_pirmais_shell_skripts.sh  /bin/** - _pārvieto failu  uz mapi_
   - **chmod 754 git upload** - _pārveido prioritāti ar skaitīšanas sistēmu failam_
   - **PATH=$PATH:~** - _nomaina galveno path_
       
  ## 4.nodarbība 
    
   Saveino repozitoriju ar termināli/datoru: **git clone https://github.com/Endijs2451/RTR105_**
   
  ### C program komandas  
   - **nano first.c**  - _izveido skript failu_
   - **gcc first.c**  - _automātiski izveido nepieicešamos trigger failus_ 
   - **echo $?**  - _pārbauda darbības iznākumu_
   - **./a.out**  - _izpilda izpildāmo failu_
   - **cat first.c**  - _izvada faila saturu TXT_
   - **gcc -Wall -save-temps second.c -o second.out**  - _izpilda darbību pārdēvējot izpildāmo failu_

  ### Pozicionālās sistēmas:
  - BIN 0,1 - 2
  - OCT 0..7 - 8
  - DEC 0..9 - 10
  - HEX 0..9,A..F - 16


### Pozicionēšanas funkcijas
  - \t - tab
  - \n - enter
  - \a - space
  - \v - enter+tab jeb jauna rindkopa
  - \r - izdzēš rindu
  
