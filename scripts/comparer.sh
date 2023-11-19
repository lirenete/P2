for umbral1 in $(seq 4 0.2 6);do 

    echo -ne "$umbral1\t$umbral2"
    scripts/run_vad.sh -1 $umbral1 -2 $umbral2 | fgrep TOTAL 
done | sort -t: -k2n


# for umbral1 in $(seq 10 0.2 15); do
#     for umbral2 in $(seq 4 0.2 6); do
#         printf "%s\t%s" "$umbral1" "$umbral2"
#         scripts/run_vad.sh -1 "$umbral1" -2 "$umbral2" | grep TOTAL
#     done
# done | sort -t: -k2n

#añadiendo opciones al automata
#al principio hay sonido 
#las pausas entre letras(consonantes sordas)
#maybe voz (otro estado), si estoy mucho rato si es voz, sino no
#
