#include "TestTask/libs/printer/include/printer.h"
#include <fstream>
#include <sstream>
#include <vector>


int main()
{
	Printing::Printer printer;

    printer.print(" Hello Word!");
	std::cerr << " принтеров создано: " << Printing::Printer::getCountCreatedPrinters() << std::endl;

	Printing::Printer* ptrToprinter = nullptr;

	ptrToprinter = new Printing::Printer();

	std::cerr << " принтеров создано: " << Printing::Printer::getCountCreatedPrinters() << std::endl;

	delete ptrToprinter;

	std::cerr << " принтеров создано: " << Printing::Printer::getCountCreatedPrinters() << std::endl;

    std::stringstream printString;

    return 0;

}
