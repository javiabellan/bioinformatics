<h1 align="center">Papers</h1>


## [DeepDom](https://psb.stanford.edu/psb-online/proceedings/psb19/jiang.pdf) (January 2019) `LSTM`
- Task:
  - Predict protein domain boundary from protein sequence.
  - This is usually an early step to understand protein function and structure.
- Data:
  - 456.128 protein sequences with domain boundary annotations in the CATH database (version 4.2)
  - All the sequences of corresponding proteins were downloaded from the Uniprot database.
  - The final dataset contains 57.887 proteins.
- Model:
  - Input
  - **4 layers of bidirectional LSTM**
- [**Code**](https://github.com/yuexujiang/DeepDom)


## UniRep (March 2019) `mLSTM` `Unsupervised`
- Task:
  - Apply deep learning to unlabeled amino-acid sequences.
  - Detect the fundamental features of a protein in unsuperervised way
    - The stability of natural and de novo designed proteins
    - The quantitative function of molecularly diverse mutants.
- Data:
  - 24 million UniRef50 sequences
- Model
  - [**mLSTM**](https://arxiv.org/abs/1609.07959): 1 layer **m**ultiplicative **LSTM** of 1900 hidden neurons.
  - **Unsupervised** train: Predict the next amino-acid (cross-entropy loss)
- UniRep
  - A fixed-length (1900) vector representation of the input sequence.
  - Obtained by averaging intermediate mLSTM hidden states.
  - A new model (a sparse linear regression or random forest) enables supervised learning on diverse protein informatics tasks.
- [**Code**](https://github.com/churchlab/UniRep)

## [UDSMProt](https://www.biorxiv.org/content/10.1101/704874v2.full.pdf) (September 2019) `AWD-LSTM` `Unsupervised`
- Data:
  - Swiss-Prot database
- Model:
  - [**AWD-LSTM**](https://arxiv.org/abs/1708.02182), which is, at its heart, a 3-layer LSTM regularized by different kinds of dropouts (embedding dropout, input dropout, weight dropout, hidden state dropout, output layer dropout).
  - Step 1: Unsupervised training (predict next aminoacid)
  - Step 2: Replace last layers and do clasification tasks.
- [**Code**](https://github.com/nstrodt/UDSMProt)
