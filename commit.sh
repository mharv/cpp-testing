# make this script take an argument
# $1 is the commit message

# if no argument is given, exit
if [ -z "$1" ]
  then
    echo "No commit message supplied"
    exit 1
fi

git add .
git commit -m "$1"
git push origin master