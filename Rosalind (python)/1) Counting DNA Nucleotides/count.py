import sys

fileName = sys.argv[1]
file = open(fileName, 'r')
data = file.read()

print( data.count("A"), data.count("C"), data.count("G"), data.count("T"))