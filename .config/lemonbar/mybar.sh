#!/bin/sh

. "${HOME}/.cache/wal/colors.sh"

Clock() {
        TIME=$(date '+%I:%M %p')
        echo -n "%{F$color1}%{F-}" "%{F$color7}$TIME%{F-}"
}

Date() {
        DATE=$(date '+%b %d, %Y')
        echo -n "%{F$color1}%{F-}" "%{F$color7}$DATE%{F-}"
}

User(){
    echo -n $USER
}

Memory(){
     mem=$(free | grep Mem | awk '{print $3/$2 * 100.0}')
     memp=${mem:0:-2}%
     line="       "
     printf "${line:${#memp}}""%s %s" $memp
}

ActiveWindow(){
	len=$(echo -n "$(xdotool getwindowfocus getwindowname)" | wc -m)
	max_len=70
	if [ "$len" -gt "$max_len" ];then
		echo -n "$(xdotool getwindowfocus getwindowname | cut -c 1-$max_len)..."
	else
		echo -n "$(xdotool getwindowfocus getwindowname)"
	fi
}

DiscoUsado(){
	echo -n {$dh -h}

}

N="MiNoe"

while true; do        
	echo -e "%{F$color7}" "%{c}$(ActiveWindow)" "%{l}$N" "%{r}$(DiscoUsado) | $(Memory) | $(User) | $(Clock) | $(Date)" "%{F-}%{B-}"
	sleep 0.10s
done
