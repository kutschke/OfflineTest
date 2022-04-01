//
//  A variant of the HelloWorld module.
//  For simple build tests.
//
//  Original author Rob Kutschke
//

#include "art/Framework/Core/EDAnalyzer.h"
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Principal/Event.h"

#include <iostream>

using namespace std;

namespace mu2e {

  class HelloAgain : public art::EDAnalyzer {

  public:
    explicit HelloAgain(fhicl::ParameterSet const& pset);

    void analyze(const art::Event& event) override;

  private:

  };

  HelloAgain::HelloAgain(fhicl::ParameterSet const& pset)
    : art::EDAnalyzer(pset){
  }

  void HelloAgain::analyze(const art::Event& event){
    cerr << "Hello, again.  From analyze: "
         << event.id()
         << endl;
  }

} // end namespace mu2e

DEFINE_ART_MODULE(mu2e::HelloAgain);
