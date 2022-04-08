#!/bin/sh

contest_num=$1
contest_name="AtCoder Beginner Contest "$1
date=$( date "+%Y/%m/%d" )
template=`cat template.cpp`

cd Contests
mkdir "$contest_name"
cd "$contest_name"

echo "Contest : "$contest_name >> metadata
echo "URL : https://atcoder.jp/contests/abc"$contest_num >> metadata
echo "Author : HEPPy4869" >> metadata
echo "Created : "$date >> metadata
echo "Passed : "


for p in {A..H}
do
    mkdir $p
    cd $p
    echo -n > input.txt
    cat $HOME/kyopro_practice/template.cpp > Main.cpp
    cd ..
done

