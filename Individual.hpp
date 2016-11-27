
namespace GeneticAlgorithm {
class Individual {
protected:
  double fitness = -1;

public:
  double Fitness {
    get { return fitness; }
  }

  std::vector<IGene> genome;

  virtual void Mutate() = 0;

  virtual double Evaluate() = 0;

public
  override string ToString() {
    String gen = fitness + " : ";
    gen += String.Join(" - ", genome);
    return gen;
  }
}
}
