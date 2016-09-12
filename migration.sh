#! /bin/bash
#----Migration

while read line
do
  echo "Copiando. . ."
  scp -r /home/francisco/Dropbox/Uptc/2016-II/SistemasDistribuidos/Heterogeneous francisco@$line:~/
  #clear
done < ips
