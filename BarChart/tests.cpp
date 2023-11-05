#include <iostream>
#include "barchartanimate.h"
using namespace std;


bool testBarDefaultConstructor() {
	Bar b;
    if (b.getName() != "") {
    	cout << "testBarDefaultConstructor: getName failed" << endl;
    	return false;
    } else if (b.getValue() != 0) {
    	cout << "testBarDefaultConstructor: getValue failed" << endl;
    	return false;
    } else if (b.getCategory() != "") {
    	cout << "testBarDefaultConstructor: getCategory failed" << endl;
    	return false;
    }
	cout << "testBarDefaultConstructor: all passed!" << endl;

	return true;
}
bool testBarDefaultConstructor2(){
	Bar c;
	cout << endl;
	cout << "Default Constructor is: " << endl;
	cout << "name: " << c.getName() << endl;
	cout << "value: " << c.getValue() << endl;
	cout << "category: " << c.getCategory() << endl;
    return true;
}

bool testBarParamConstructor() {
	Bar b("Chicago", 9234324, "US");
    if (b.getName() != "Chicago") {
    	cout << "testBarParamConstructor: getName failed" << endl;
    	return false;
    } else if (b.getValue() != 9234324) {
    	cout << "testBarParamConstructor: getValue failed" << endl;
    	return false;
    } else if (b.getCategory() != "US") {
    	cout << "testBarParamConstructor: getCategory failed" << endl;
    	return false;
    }
    cout << "testBarParamConstructor: all passed!" << endl;
    return true;
}
bool testBarParamConstructor2(){
		Bar c("Naperville", 1210, "US");
		cout << endl;
		cout << "Paramaterized constructor is: " << endl;
		cout << "name: " << c.getName() << endl;
		cout << "value: " << c.getValue() << endl;
		cout << "category: " << c.getCategory() << endl;
		return true;

	}
bool testBarOperator(){
	Bar c("Des Moines", 9833212, "US");
	Bar d("Lisle", 1231231, "US");
	if(c < d){
		cout << "testBarOperator: operator failed" << endl;
		return false;
	}
	else if(c <= d){
		cout << "testBarOperator: operator failed" << endl;
		return false;
	}
	else if(c>d){
		cout << "testBarOperator: operator failed" << endl;
		return false;

	}
	if(c >= d){
		cout << "testBarOperator: operator failed" << endl;
		return false;
	}
	cout << "test BarOperator: all passed" << endl;
	return true;
}
bool testBarOperator2(){
	Bar c("San Diego", 1020, "US");
	Bar d("Lisle", 1100, "US");
	if(c < d){
		cout << "testBarOperator: operator failed" << endl;
		return false;
	}
	else if(c <= d){
		cout << "testBarOperator: operator failed" << endl;
		return false;
	}
	else if(c>d){
		cout << "testBarOperator: operator failed" << endl;
		return false;

	}
	if(c >= d){
		cout << "testBarOperator: operator failed" << endl;
		return false;
	}
	cout << "test BarOperator: all passed" << endl;
	return true;
}

	bool testBarChartDefaultConstructor() {
	BarChart c;
    if (c.getFrame() != "") {
    	cout << "testBarChartDefaultConstructor: getName failed" << endl;
    	return false;
    } else if (c.getSize() != 0) {
    	cout << "testBarChartDefaultConstructor: getValue failed" << endl;
    	return false;
    } 
	cout << "testBarChartDefaultConstructor: all passed!" << endl;

	return true;
	}
	bool testBarChartDefaultConstructor2(){
	BarChart bc;
	cout << endl;
	cout << "Default Constructor is: " << endl;
	cout << "frame: " << bc.getFrame() << endl;
	cout << "size: " << bc.getSize() << endl;
	cout << "capacity: " << bc.getCapacity() << endl;
    return true;
	}
   
	bool testBarChartParamConstructor(){
		BarChart dc(10);
		cout << endl;
		cout << "Paramaterized constructor is: " << endl;
		cout << "frame: " << dc.getFrame() << endl;
		cout << "size: " << dc.getSize() << endl;
		cout << "capacity: " << dc.getCapacity() << endl;
		return true;

	}
	bool testBarChartParamConstructor2(){
		BarChart dc(30);
		cout << endl;
		cout << "Paramaterized constructor is: " << endl;
		cout << "frame: " << dc.getFrame() << endl;
		cout << "size: " << dc.getSize() << endl;
		cout << "capacity: " << dc.getCapacity() << endl;
		return true;

	}
	bool testBarChartCopyConstructor(){
		BarChart dc(10);
		cout << endl;
		cout << "Copy Constructor is: " << endl;
		dc.getFrame();
		dc.getSize();
		dc.getCapacity();
		BarChart cedCopy(dc);
		cout << "frame: " << cedCopy.getFrame() << endl;
		cout << "size: " << cedCopy.getSize() << endl;
		cout << "capacity: " << cedCopy.getCapacity() << endl;
		return true;
	}
	bool testBarChartCopyConstructor2(){
		BarChart dc(30);
		cout << endl;
		cout << "Copy Constructor is: " << endl;
		dc.getFrame();
		dc.getSize();
		dc.getCapacity();
		BarChart cedCopy(dc);
		cout << "frame: " << cedCopy.getFrame() << endl;
		cout << "size: " << cedCopy.getSize() << endl;
		cout << "capacity: " << cedCopy.getCapacity() << endl;
		return true;
	}
	bool testBarChartCopyOperator(){
		BarChart bc1;
		BarChart bc2(10);
		bc1=bc2;
		cout << endl;
		cout << "Copy operator is: " << endl;
		cout << "frame: " << bc2.getFrame() << endl;
		cout << "size: " << bc2.getSize() << endl;
		cout << "capacity: " << bc2.getCapacity() << endl;
		return true;

	}
	bool testBarChartCopyOperator2(){
		BarChart bc1;
		BarChart bc2(30);
		bc1=bc2;
		cout << endl;
		cout << "Copy operator is: " << endl;
		cout << "frame: " << bc2.getFrame() << endl;
		cout << "size: " << bc2.getSize() << endl;
		cout << "capacity: " << bc2.getCapacity() << endl;
		return true;

	}
	bool testBarChartClear(){
		BarChart bc(10);
		cout << endl;
		cout<<"Before Clear is: " << endl;
		cout << "frame: " << bc.getFrame() << endl;
		cout << "size: " << bc.getSize() << endl;
		cout << "capacity: " << bc.getCapacity() << endl;
		bc.clear();
		cout << "After clear is: " << endl;
		cout << "frame: " << bc.getFrame() << endl;
		cout << "size: " << bc.getSize() << endl;
		cout << "capacity: " << bc.getCapacity() << endl;
		return true;
	}
	bool testBarChartClear2(){
		BarChart bc(30);
		cout << endl;
		cout<<"Before Clear is: " << endl;
		cout << "frame: " << bc.getFrame() << endl;
		cout << "size: " << bc.getSize() << endl;
		cout << "capacity: " << bc.getCapacity() << endl;
		bc.clear();
		cout << endl;
		cout << "After clear is: " << endl;
		cout << "frame: " << bc.getFrame() << endl;
		cout << "size: " << bc.getSize() << endl;
		cout << "capacity: " << bc.getCapacity() << endl;
		return true;
	}
	bool testGetterandSetterFrame(){
		BarChart bc(3);
		bc.setFrame("1950");
		bc.getFrame();
		cout << endl;
		cout << "frame: " << bc.getFrame() << endl;
		return true;
	}
	bool testGetterandSetterFrame2(){
		BarChart bc(3);
		bc.setFrame("1920");
		bc.getFrame();
		cout << endl;
		cout << "frame: " << bc.getFrame() << endl;
		return true;
	}
	bool testAddBarAndGetSize(){
		BarChart bc(3);
		bc.addBar("Chicago", 1020, "US");
		bc.addBar("NYC", 1300, "US");
		bc.addBar("Paris", 1200, "France");
		cout << endl;
		cout << "size: " << bc.getSize();
		return true;
	}
	bool testAddBarAndGetSize2(){
		BarChart bc(3);
		bc.addBar("Lisle", 1000, "US");
		bc.addBar("LA", 1250, "US");
		bc.addBar("Paris", 1200, "France");
		cout << endl;
		cout << "size: " << bc.getSize() << endl;
		return true;
	}
	bool testBarForBarchartOperator(){
		BarChart bc(3);
		bc.addBar("Chicago", 1020, "US");
		bc.addBar("NYC", 1300, "US");
		bc.addBar("Paris", 1200, "France");
		cout << endl;
		for(int i = 0; i<3; i++){
			cout << bc[i].getName() << " " << bc[i].getValue() << " " << bc[i].getCategory();
			cout << endl;

	}
	return true;
	}
	bool testBarForBarchartOperator2(){
		BarChart bc(3);
		bc.addBar("Barcelona", 1700, "Spain");
		bc.addBar("LA", 1240, "US");
		bc.addBar("Paris", 1200, "France");
		cout << endl;
		for(int i = 0; i<3; i++){
			cout << bc[i].getName() << " " << bc[i].getValue() << " " << bc[i].getCategory();
			cout << endl;

	}
	return true;
	}
	bool testDump(){
		BarChart bc2(3);
		bc2.setFrame("1950");
		bc2.getFrame();
		bc2.addBar("Chicago", 1020, "US");
		bc2.addBar("NYC", 1300, "US");
		bc2.addBar("Paris", 1200, "France");
		for(int i = 0; i<3; i++){
			cout << endl;
			cout << bc2[i].getName() << " " << bc2[i].getValue() << " " << bc2[i].getCategory();
			cout << endl;
	}
		cout << endl;
		cout << "Dump " << endl;
		cout << endl;
		bc2.dump(cout);
		return true;
	}
	bool testDump2(){
		BarChart bc2(3);
		bc2.setFrame("2000");
		bc2.getFrame();
		bc2.addBar("LA", 1240, "US");
		bc2.addBar("Barcelona", 1700, "Spain");
		bc2.addBar("Paris", 1200, "France");
		for(int i = 0; i<3; i++){
			cout << endl;
			cout << bc2[i].getName() << " " << bc2[i].getValue() << " " << bc2[i].getCategory();
			cout << endl;
	}
		cout << endl;
		cout << "Dump " << endl;
		cout << endl;
		bc2.dump(cout);
		return true;
	}

	bool barchartTest(){
		cout << endl;
		BarChart bc2(3);
		bc2.addBar("Chicago", 1020, "US");
		bc2.addBar("NYC", 1300, "US");
		bc2.addBar("Paris", 1200, "France");
		cout << "Graph 1 for Chicago, NYC, Paris: " << endl;
		cout << endl;
		string red("\033[1;36m");
		string blue("\033[1;33m");
		map<string, string> colorMap;
		colorMap["US"] = red;
		colorMap["France"] = blue;
		bc2.graph(cout, colorMap, 3);
		cout << endl;
	}
	bool barchartTest2(){
		cout << endl;
		BarChart bc2(3);
		bc2.addBar("Barcelona", 1700, "Spain");
		bc2.addBar("LA", 1240, "US");
		bc2.addBar("Paris", 1200, "France");
		cout << "Graph 2 for Barcelona, LA, Paris: " << endl;
		cout << endl;
		string red("\033[1;36m");
		string blue("\033[1;33m");
		string green("\033[1;35m");
		map<string, string> colorMap;
		colorMap["US"] = red;
		colorMap["France"] = blue;
		colorMap["Spain"] = green;
		bc2.graph(cout, colorMap, 3);
		cout << endl;
		return true;
	}
	
	


int main() {
	testBarDefaultConstructor();
	testBarDefaultConstructor2();
	testBarParamConstructor();
	testBarParamConstructor2();
	testBarOperator();
	testBarOperator2();
	testBarChartDefaultConstructor();
	testBarChartDefaultConstructor2();
	testBarChartParamConstructor();
	testBarChartParamConstructor2();
	testBarChartCopyConstructor();
	testBarChartCopyConstructor2();
	testBarChartCopyOperator();
	testBarChartCopyOperator2();
	testBarChartClear();
	testBarChartClear2();
	testGetterandSetterFrame();
	testGetterandSetterFrame2();
	testAddBarAndGetSize();
	testAddBarAndGetSize2();
	testBarForBarchartOperator();
	testBarForBarchartOperator2();
	testDump();
	testDump2();
	barchartTest();
	barchartTest2();

	 
    return 0;
}
