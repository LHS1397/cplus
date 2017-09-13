start()
{
	clear
   cd /home/lovish/Videos
   echo " -----------------"
   echo "| C++ compile and |"
   echo "|      run        |"
   echo " -----------------"
   echo
   list
}

list()
{
	echo
	ls | grep "\.cpp$"
	echo
	intput
}

intput()
{
	echo
	echo "Enter the file name :"
	read file
    echo
    if [[ -f "$file".cpp ]];
    	then
    	echo "File "$file".cpp exist"
    	comrun

    else
    	echo "File "$file".cpp not exist, enter a valid file name"
    fi

}

comrun()
{
   echo
   echo "Enter your choice : "
   echo
   options=("Compile only" "Compile and Run" "exit")
   select opt in "${options[@]}"
   do
   case $opt in
   	"Compile only")
        compile
        decision
   		;;

   	"Compile and Run")
         compile
         echo
         echo "Running."
         clear
         echo
         ./"$file"
         echo
         decision
         ;;

    "exit")
         echo
         echo "Exiting....."
         exit
           ;;
   esac
done
}

compile()
{
  clear
	  echo
        echo "compling......"
        g++ "$file".cpp -o "$file"
        if [[ -f $file ]];
        	then
        	echo
        	echo "compiled"
        else
        	echo "Please check the file name!"
    fi
}

decision()
{
    echo
    echo "Continue(Y) or Exit(N) Please enter u're choice : "
	read choice
	if [[ $choice == y || $choice == Y ]];
        	then
        	start
        else
        	echo
        	echo "Exiting...."
        	exit
        fi
}

start
