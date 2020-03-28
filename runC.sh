#! /bin/zsh

if [[ ! -d bin ]]; then
  mkdir bin;
fi

executablePath=`echo $1 | sed s/\\.\[^.\]\*$// | sed s/\^\[^/\]\*/bin/`;
gcc -o $executablePath $1;
./${executablePath}