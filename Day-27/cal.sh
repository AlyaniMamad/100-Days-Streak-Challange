no1 = $1
no2 = $2

if [ no1 -lt  0 ]
then
    echo -n "Enter No1 :"
    read no1
    echo -n "Enter No2 :"
    read no2
fi
if [ $no1 -gt $no2 ]
then
    echo "No1 Is Max"
else
    echo "No2 Is Max"

fi
