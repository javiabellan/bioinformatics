import sys


def GCpercentage(seq):
	return (seq.count('C')+seq.count('G')) / len(seq) * 100


def parseFASTA(file):
	sequences = {}

	name = ""
	for line in file:
		if line.startswith(">"):
			name = line[1:-1]
			sequences[name]=""
			continue
		sequences[name]+=line.strip()

	return sequences


fileName = sys.argv[1]
file = open(fileName, 'r')
data = parseFASTA(file)

topIndex = 0
topValue = 0
for i in data:
	currentValue = GCpercentage(data[i])

	if currentValue > topValue:
		topValue = currentValue
		topIndex = i

print(topIndex, "\n" ,topValue)