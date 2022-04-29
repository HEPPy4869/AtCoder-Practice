#!/bin/sh

cd Contests
search_dir="$HOME/kyopro_practice/Contests/*"
contest_list=()
for dirpath in $search_dir;
do
    cd "$dirpath"
    echo $dirpath
    for p in {A..H}
    do
        cd $p
        cat $HOME/kyopro_practice/template.sh > run.sh
        echo -n > input.txt
        cd ..
    done
    cd ..
done
