<h1 align="center">Papers</h1>

## UniRep
- Title: Unified rational protein engineering with sequence-based deep representation learning
- Apply deep learning to unlabeled amino-acid sequences.
- Data:
  - 24 million UniRef50 sequences
- Model
  - **mLSTM**: Recurrent Neural Network (RNN)
  - 1900 hidden neurons
  - **Unsupervised** train: Predict the next amino-acid (cross-entropy loss)
- UniRep
  - A fixed-length (1900) vector representation of the input sequence.
  - Obtained by averaging intermediate mLSTM hidden states.
  - A new model (a sparse linear regression or random forest) enables supervised learning on diverse protein informatics tasks.
- Detect the fundamental features of a protein.
  - The stability of natural and de novo designed proteins
  - The quantitative function of molecularly diverse mutants.
- [Code](https://github.com/churchlab/UniRep)

## [DeepDom](https://psb.stanford.edu/psb-online/proceedings/psb19/jiang.pdf)
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
  - [Code](https://github.com/yuexujiang/DeepDom)

