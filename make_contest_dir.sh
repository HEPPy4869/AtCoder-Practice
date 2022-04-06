#!/bin/sh

contest_num=$1
date=$( date "+%Y/%m/%d" )
template=`cat template.cpp`

cd Contests
mkdir $1
cd $1

echo "Contest : AtCoder Beginner Contest"$contest_num >> metadata
echo "URL : https://atcoder.jp/contests/"$contest_num >> metadata
echo "Author : HEPPy4869" >> metadata
echo "Created : "$date >> metadata


for p in {A..H}
do
    mkdir $p
    cd $p
    echo -n > input.txt
    echo $template > Main.cpp
    cd ..
done

