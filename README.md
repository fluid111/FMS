to compile

g++ -o main main.cpp sources/s2.cpp sources/m1.cpp sources/UserDetails.cpp -Iheaders

for login 

./main login username password


for split 

./main split filename number_of_parts

for merge

./main merge file_part1 file_part2 ... output_filename
