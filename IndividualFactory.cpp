#include "Individual.hpp"
namespace GeneticAlgorithm {
class IndividualFactory {
private:
  static IndividualFactory instance;

  IndividualFactory() {}

public:
  static IndividualFactory getInstance() {
    if (instance == null) {
      instance = new IndividualFactory();
    }
    return instance;
  }

  Individual getIndividual(String type) {
    Individual ind = null;
    switch (type) {
    case "Maze":
      ind = new MazeIndividual();
      break;
    case "TSP":
      ind = new TSPIndividual();
      break;
    }
    return ind;
  }

  Individual getIndividual(String type, Individual father) {
    Individual ind = null;
    switch (type) {
    case "Maze":
      ind = new MazeIndividual((MazeIndividual)father);
      break;
    case "TSP":
      ind = new TSPIndividual((TSPIndividual)father);
      break;
    }
    return ind;
  }

  Individual getIndividual(String type, Individual father, Individual mother) {
    Individual ind = null;
    switch (type) {
    case "Maze":
      ind = new MazeIndividual((MazeIndividual)father, (MazeIndividual)mother);
      break;
    case "TSP":
      ind = new TSPIndividual((TSPIndividual)father, (TSPIndividual)mother);
      break;
    }
    return ind;
  }

  void Init(string type) {
    switch (type) {
    case "Maze":
      Maze.Init(Maze.Maze2);
      break;
    case "TSP":
      TSP.Init();
      break;
    }
  }
}
}
