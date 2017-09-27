import sys

fileName = sys.argv[1]
file = open(fileName, 'r')
data = file.read()

print(data.replace("T", "U"))