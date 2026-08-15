#include <iostream>

class CarbCalculator{
	private:
		int totalCarb_Meal;
		double numUnits;
	public:
		CarbCalculator();
		void calculateCarbs();
};

CarbCalculator::CarbCalculator(){
	totalCarb_Meal = 0;
	numUnits = 0.0;
}

void CarbCalculator::calculateCarbs(){
	std::cout << "Please type in the number of carbs (in grams) of the food" << std::endl;
	std::cin >> totalCarb_Meal;	
}




int main(){
	CarbCalculator calc;

	calc.calculateCarbs();
//random comment to test github
	return 0;
}
