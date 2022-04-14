#!/bin/sh

contest_num=$1
contest_name="AtCoder Beginner Contest "$1
date=$( date "+%Y/%m/%d" )
template=`cat template.cpp`

cd Contests
if [ -d "$contest_name" ]; then
    echo $contest_name" already exists"
    exit 0
fi
mkdir "$contest_name"
cd "$contest_name"

echo "Contest : "$contest_name >> metadata
echo "URL : https://atcoder.jp/contests/abc"$contest_num >> metadata
echo "Author : HEPPy4869" >> metadata
echo "Created : "$date >> metadata
echo "Passed : " >> metadata


for p in {A..H}
do
    mkdir $p
    cd $p
    echo -n > input.txt
    cat $HOME/kyopro_practice/template.cpp > Main.cpp
    cat $HOME/kyopro_practice/template.sh > run.sh
    cd ..
done

