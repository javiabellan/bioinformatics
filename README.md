<h1 align="center">📚 Bioinformatics Theory</h1>

### Level 1: Nucleotide sequence
- Data from **DNA** or **RNA**.
- 4 letters: **A**, **C**, **G**, **T**

### Level 2: Amino acids sequence
- Data from **Proteins**.
- 21 letters: **A**, **R**, **N**, **D**, **C**, **Q**, **E**, **G**, **H**, **I**, **L**, **K**, **M**, **F**, **P**, **S**, **T**, **W**, **Y**, **V**

<p align="center"><img width="400" src="img/aminoacids.svg"/></p>

### Level 3: Domains of proteins

<p align="center"><img width="400" src="https://genetics564.weebly.com/uploads/8/6/5/7/865764/101986_orig.gif"/></p>

### Level 4: 3D shape of proteins
![](/img/protein-process.svg)

### Level 5: Gen Ontology
- **GO**
- **Uniprot**

### Reactoma
**Grafo de interacción** de proteinas.

### BLAST
**B**asic **L**ocal **A**lignment **S**earch **T**ool. Algoritmo que determina el **nivel de similaridad de 2 secuencias**. Puede usarse:
- A nivel de secuencias de nucleótidos (Nucleutide BLAST)
- A nivel de secuencias de aminoácidos (Protein BLAST)

---

<h1 align="center">🗄 Datasets</h1>


- [**UniProt**](https://www.uniprot.org/help/about): Secuencias de aminoácidos.
  - **UniProtKB**: UniProt Knowledgebase
    - **Swiss-Prot**: Manually annotated and reviewed (561.911)
    - **TrEMBL**: Automatically annotated and not reviewed. (177.754.527)
  - **UniRef**: UniProt Reference Clusters
    - **UniRef50**: 50% (39,178,216)
    - **UniRef90**: 90% (107,153,647)
    - **UniRef100**: 100% (216,491,817)
  - [**UniParc**](https://www.uniprot.org/help/uniparc): UniProt Archive
- [**Pfam**](http://pfam.xfam.org): Secuencias aminoácidos + dominios.
- [**Protein data bank**](https://www.rcsb.org): Muy pocas con respecto a UniProt. A parte de la secuencia contiene metadatos y repr. 3D.
  - En kaggle: [400000 protein data set](https://www.kaggle.com/shahir/protein-data-set) (146 MB)


---

<h1 align="center">🧠 Deep Learning</h1>


## Traditional NLP methods
- Count vectorizers with n-grams
- TF-IDF

## 1D convolutions
- [Ultra-Deep Learning Model](https://arxiv.org/abs/1609.00680) (2016)
- [AlphaFold](https://deepmind.com/blog/article/AlphaFold-Using-AI-for-scientific-discovery)
  - [Paper in Nature](https://www.nature.com/articles/s41586-019-1923-7.epdf?author_access_token=Z_KaZKDqtKzbE7Wd5HtwI9RgN0jAjWel9jnR3ZoTv0MCcgAwHMgRx9mvLjNQdB2TlQQaa7l420UCtGo8vYQ39gg8lFWR9mAZtvsN_1PrccXfIbc6e-tGSgazNL_XdtQzn1PHfy21qdcxV7Pw-k3htw%3D%3D) (Jan 2020)
  - [Paper in Proteins](https://onlinelibrary.wiley.com/doi/epdf/10.1002/prot.25834) (Sep 2019)
  
<p align="center"><img width="600" src="https://journals.plos.org/ploscompbiol/article/figure/image?size=large&id=10.1371/journal.pcbi.1005324.g001"/></p>


## Recurrent Neural Nets (RNN, LSTM, ...)
- [Kaggle: LSTM with keras](https://www.kaggle.com/danofer/protein-sequence-family-classification)
- [UDSMProt](https://github.com/nstrodt/UDSMProt)

  
## Step 3: Transformers
- **Read [Biological structure and function emerge from scaling unsupervised learning to 250 million protein sequences](https://doi.org/10.1101/622803)**: After training the Transformer algorithm to process amino acid sequences, researchers looked at the embedding learned by the model. Above all, they found out that the neural network had built a complex representation of the input sequences. This in turn reflects their biological properties such as activity, stability, structure, binding etc. In other words, the deep learning algorithm learned important biochemical properties characterising the different amino acids and proteins, all by itself, without any supervision.
- [Illustrating the Reformer](https://towardsdatascience.com/illustrating-the-reformer-393575ac6ba0)
- [ELECTRA](https://openreview.net/pdf?id=r1xMH1BtvB): Otra forma de hacer el aprendizaje no supervisado
- [Advices for training transformers](https://twitter.com/Eric_Wallace_/status/1235616760595791872)
- [Kaggle winner solution to Google’s QUEST Q&A Labeling](https://medium.com/kaggle-blog/the-3-ingredients-to-our-success-winners-dish-on-their-solution-to-googles-quest-q-a-labeling-c1a63014b88): BERT, RoBERTa, BART
- Andrés Solution to [Predicting Molecular Properties](https://www.kaggle.com/c/champs-scalar-coupling)
  - [**Summary**](https://www.kaggle.com/c/champs-scalar-coupling/discussion/106468)
  - [**Code**](https://github.com/antorsae/champs-scalar-coupling)

## Step 4: 3D Proteins
- 3D protein


### Python packages
- [biopython](https://biopython.org/)
- [scikit-bio](http://scikit-bio.org/)

### Learn Resources
- [Rosalind](http://rosalind.info)
- [Bioinformatic salgorithms](http://bioinformaticsalgorithms.com)
- [Readiab](http://readiab.org)
