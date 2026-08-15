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
	int bloodSugar = 0;
	std::cout << "Please type in the number of carbs (in grams) of the food" << std::endl;
	std::cin >> totalCarb_Meal;
	
	numUnits = totalCarb_Meal / 10.0;
	std::cout << numUnits << std::endl;
	std::cout << "Please enter your current blood sugar" << std::endl;
	std::cin >> bloodSugar;

	if(bloodSugar >= 70 && bloodSugar <= 140){
		std::cout << "You should take " << numUnits << " units" << std::endl;
	}	
	else if(bloodSugar >= 141 && bloodSugar <= 180){
		std::cout << "You should take " << numUnits + 1 << " units" << std::endl;
	}
	else if(bloodSugar >= 181 && bloodSugar <= 220){
		std::cout << "You should take " << numUnits + 2 << " units" << std::endl;
	}
	else if(bloodSugar >= 221 && bloodSugar <= 260){
		std::cout << "You should take " << numUnits + 3 << " units" << std::endl;
	}
	else if(bloodSugar >= 261 && bloodSugar <= 300){
		std::cout << "You should take " << numUnits + 4 << " units" << std::endl;
	}
	else if(bloodSugar >= 301 && bloodSugar <= 340){
		std::cout << "You should take " << numUnits + 5 << " units" << std::endl;
	}
	else if(bloodSugar >= 341 && bloodSugar <= 380){
		std::cout << "You should take " << numUnits + 6 << " units" << std::endl;
	}
	else if(bloodSugar >= 381 && bloodSugar <= 420){
		std::cout << "You should take " << numUnits + 7 << " units" << std::endl;
	}
	else if(bloodSugar < 70){
		std::cout << "DONT TAKE ANY INSULIN PLEAAAAAAAAAAAAAASE DRINK SOME JUICE *not alot tho :)" << std::endl;
	}
	else{
		std::cout << "Your insulin may be too high, drink some water please you're makin me nervous" << std::endl; 
	}
	
}

int main(){
	CarbCalculator calc;
while(1){
	calc.calculateCarbs();
}
//random comment to test github
	return 0;
}
