git rm -f ._* .DS_Store
git rm -f vector/*.o vector/.*
git rm -f imod/*.o vector/.*
git rm -f matrix/*.o matrix/.*
git rm -f manager/*.o manager/.*
rm -f libft/.*
rm -f libft/*.o

git add .
git status 
