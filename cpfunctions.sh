#!/bin/zsh

function cf() {
    mkdir $1
    cd $1
    cp ~/.CPstuff/template.cpp $1.cpp
    touch $1.in
    cp ~/.CPstuff/makefile makefile
    sed -i 's/n=temp/n='$1'/g' makefile
        
}

function cfp() {
    mkdir $1
    cd $1
    touch $1.in $1.py
    cp ~/.CPstuff/makefile makefile
    sed -i 's/n=temp/n='$1'/g' makefile
    sed -i 's/l=cpp/l=p/g' makefile

}

function cfj() {
  mkdir $1
  cd $1
  touch $1.in 
  cp ~/.CPstuff/template.java $1.java
  cp ~/.CPstuff/makefile makefile
  sed -i 's/template/'$1'/g' $1.java
  sed -i 's/n=temp/n='$1'/g' makefile
  sed -i 's/l=cpp/l=j/g' makefile


}
