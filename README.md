# <center> Bioinformatics theory

## Nucleotide bases: A, C, G, T 

## Amino acids
![](img/aminoacids.svg)

## K-mers
if I use "words" of length 6 (hexamers), "ATGCATGCA" becomes: ‘ATGCAT’, ‘TGCATG’, ‘GCATGC’, ‘CATGCA’.

def getKmers(sequence, size):
    return [sequence[x:x+size].lower() for x in range(len(sequence) - size + 1)]



# <center> Bioinformatics practice

## DNA as a NLP problem

- **Nucleotide bases** and **amino acids** are characters.
- **K-mers** and peptides (motifs) are words.
- **Genes** and gene families are sentences.


> ### Paper of using Transformer model with DNA:
> **[Biological structure and function emerge from scaling unsupervised learning to 250 million protein sequences](https://doi.org/10.1101/622803)**
>
>  They have trained a neural network that **predicts masked amino acids** on 250 million sequences.  The total number of amino acids has been set at 86 billion. To reach their goal, they used a powerful model architecture called the Transformer.
>
> After training the Transformer algorithm to process amino acid sequences, researchers looked at the embedding learned by the model. Above all, they found out that the neural network had built a complex representation of the input sequences. This in turn reflects their biological properties such as activity, stability, structure, binding etc. In other words, the deep learning algorithm learned important biochemical properties characterising the different amino acids and proteins, all by itself, without any supervision.
>
> Source: https://amethix.com/deep-learning-in-biology


### Python packages
- [biopython](https://biopython.org/)
- [scikit-bio](http://scikit-bio.org/)

### Learn Resources
- [Rosalind](http://rosalind.info)
- [Bioinformatic salgorithms](http://bioinformaticsalgorithms.com)
- [Readiab](http://readiab.org)
