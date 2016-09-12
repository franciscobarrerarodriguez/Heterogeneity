#! /bin/bash
#----Preparation
clear
ssh-keygen -b 4096 -t rsa
while read line
do
  ssh-copy-id francisco@$line
done < ips
