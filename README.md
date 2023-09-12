# RTR105
Studiju kursa Datormācība (pamatkurss) elektroniskā ķēde  
Strādāsim Linux operētājsistēmā
  
  ## 1.nodarbība  
      
  ### Linux pirmās komandas

  - uname _- Izvada esošo operētājsistēmu_
  - uname -a _- Izvada esošo operētājsistēmu ar atslēgu "-a", atslēgu var pievienot izmantojot "-"_
  - man uname _- Pievienojot "man" tiek atvērts manuālis jeb skaidrojums komandai_
  - whoami _- Izvada šobrīd esošās operētājsistēmas lietotāju_
  - history _- Izvada secībā visas iepriekš izpildītās komandas tā brīža sesijā_

  ## 2.nodarbība   
      
  ### Linux failu komandas
- pwd _- Izvada pilno direktorijas atrašanās vietu, kurā atrodas/darbojas lietotājs_
- who  _- Izvada visus lietotājus_
- ls _- Izvada direktorijas sastāvu/failus_
- ls -lt _- "-lt" izvada failus, dilstošā secībā pēc pēdējā rediģēšanas laika_
- ls -lt ABC _- Izvada prasīto konkrētajai mapei_
- ls -alt _- Pievienotais "a" izvada visus mapes failus, arī apslēptos_
- ls Desktop/ _- Izvada failus attiecīgajai mapei_
- tree _- Izvada visus operētājsistēmas failus grafiski_
- cd /Music
- cd /home/user/Music
- cd .
- cd ..
- cd cs
- cd root
- cd /home
- cd ./home/
- cd /home/user
- cd /
- cd ~
- cd ~/Documents/
- mkdir ABC
- rmdir ABC
- echo 12345 > text_1.txt
- hexdump -C text_1.txt 
- echo 6789 >> text_1.txt
- cat text_1.txt 
- echo -e "12345/n6789"
- echo -e "12345\n6789" > text_2.txt
- cp text_1.txt CDE/
- mv CDE/text_1.txt CDE/text_3.txt 
- rm text_*.txt
- history > history_20230912_02.txt
    
  Ja fails sākas ar ".", tad tas ir apslēpts lietotājam
