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
    
  Ja fails sākas ar ".", tad tas ir apslēpts lietotājam

   126  whereis pwd
  127  echo $PATH
  128  nano mans_pirmais_shell_skripts.sh
  129  ls -lt
  130  cat mans_pirmais_shell_skripts.sh 
  131  ls -lt
  132* 
  133  ls -lt
  134  /home/user/mans_pirmais_shell_skripts.sh 
  135  cd ABC/
  136  cat c.txt
  137  cd ..
  138  echo $PATH
  139  mv mans_pirmais_shell_skripts.sh  /bin/
  140  mv mans_pirmais_shell_skripts.sh  /usr/
  chmod 754 git upload
  143  echo $PATH
  144  PATH=$PATH:~
  145  echo $PATH
  146  mans_pirmais_shell_skripts.sh 


git clone https://github.com/Endijs2451/RTR105
    5  ls-lt
    6  ls -lt
    7  cd RTR105/
    8  pwd
    9  mkdir Class_05
   10  ls -lt
   11  cd Class_05/
   12  pwd
   13  tree
   14  nano first.c
   15  ls -lt
   16  gcc first.c 
   17  echo $?
   18  ls -lt
   19  ./a.out
   20  echo $?
   21  cat first.c 
   22  cat a.out 
   23  gcc first.c first.out
   24  man gcc
   25  gcc first.c first.out -o
   26  gcc first.c -o  first.out 
   27  rm *.out
   28  ls -lt
   29  history 
   30  echo $?
   31  nano first.c
   32  gcc first.c -o  first.out 
   33  ls -lt
   34  ./first.out
   35  echo $/
   36  echo $?
   37  nano first.c
   38  ls -lt
   39  gcc first.c -o  first.out 
   40  ./first.out
   41  echo $?
   42  ls -lt
   43  nano first.c
   44  gcc first.c -o  first.out 
   45  ls -lt
   46  echo $?
   47  ./first.out
   48  echo $?
   49  cat first.c
   50  cat first.out
   51  nano first.c
   52  gcc first.c -o  first_with_comments.out 
   53  ls -lt
   54  diff first.out first_with_comments.out 
   55  cat first.c
   56  ./first.out
   57  nano first.c
   58  copy first.c second.c
   59  cp first.c second.c
   60  nano second.c 
   61  gcc second.c -o second.out
   62  echo $?
   63  ls -lt
   64  nano second.c 
   65  gcc second.c -o second.out
   66  ./second.out \
   67  nano second.c 
   68  gcc second.c -o second.out
   69  ./second.out \
   70  man echo
   71  nano second.c 
   72  gcc second.c -o second.out
   73  ./second.out \
   74  ./second.out 
   75  echo $?
   76  nano second.c 
   77  ls -lt
   78  rm *.out
   79  ls -lt
   80  man gcc
   81  gcc -Wall -save-temps second.c -o second.out 
   82  ls -lt
   83  cat second.i
   84  cat second.s
   85  cat second.o
   86  ls -lt
   87  history cd ..
   88  cd..
   89  cd ..
   90  touch .gitignore
   91  ls -lt
   92  ls -lta
   93  nano .gitinore
   94  nano .gitignore
   95  ls -lta
   96  history > history_20230912_0_Class05.txt
