namespace GeneticAlgorithm {
static class Parameters {
public:
  static int const individualNb = 20;
  static int const generationMaxNb = 50;
  static int const initial geneNb = 10;
  static int const minFitness = 0;

  static double const mutationRate = 0.10;
  static double const mutationAddRate = 0.20;
  static double const mutationDeleteRate = 0.10;
  static double const crossoverRate = 0.60;
}
}
