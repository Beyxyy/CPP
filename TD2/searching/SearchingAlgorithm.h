#ifndef SEARCHINGALGORITHM_H
#define SEARCHINGALGORITHM_H
#include <vector>
#include <iostream>
using namespace std;
class SearchingAlgorithm{

	public :
		static long int totalComparaisons;
		static int totalSearch;
		static double averageComparaisons;


		SearchingAlgorithm() = default;
		virtual int search(const vector<int>&, int) = 0;
		ostream& displaySearchResults(ostream&,  int, int);

	protected :
		long int numberComparaisons = 0;


 };
#endif