import sys

fileName = sys.argv[1]
file = open(fileName, 'r')
data = file.read()

complement = data.replace("A", "T").replace("T", "A").replace("C", "G").replace("G", "C")
reverseComplement = complement[::-1]

print(reverseComplement)
