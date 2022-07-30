#programing C
alias gc='(){
	(echo "\n+++++++++++++++++++++++++++++++++++++\nCompiling $1\n--------------------------------------"; gcc -Wall -Werror -Wextra $1) && \
	(echo "\n+++++++++++++++++++++++++++++++++++++\nRunning a.out\n--------------------------------------"; ./a.out); }'

#remove a.out
alias rma='(){
	(echo "\n++++++++++++++++++++++++++++++++++++++\n Deleting a.out for $1\n--------------------------------------"; find . -d -name "a.out" -print -delete);}'

#git add && git commit -m "S1" && git push
alias gitup='(){
	(echo "\n++++++++++++++++++++++++++++++++++++++\n git add . && git commit -m "$1 auto by alias" && git push \n--------------------------------------"; git add . && git commit -m "$1 auto by alias" && git push);}'

