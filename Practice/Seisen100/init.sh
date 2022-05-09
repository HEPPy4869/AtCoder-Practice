for p in {1..100}
do
    dir=$p
    n=$((3-${#p}))
    for ((i=0;i<n;i++))
    do
        dir=0$dir
    done
    git rv $p $dir
done