#!/bin/sh

cd Contests
search_dir="$HOME/AtCoder-Practice/Contests/*"
contest_list=()
for dirpath in $search_dir;
do
    cd "$dirpath"
    for p in {A..H}
    do
        cd $p
        cat $HOME/AtCoder-Practice/template.sh > run.sh
        echo -n > input.txt
        cd ..
    done
    cd ..
done
