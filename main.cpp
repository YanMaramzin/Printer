#include "TestTask/libs/printer/include/printer.h"

int main()
{
	Printing::Printer printer;

	printer.print(" Hello Word! ");
	std::cerr << " принтеров создано: " << Printing::Printer::getCountCreatedPrinters() << std::endl;

	Printing::Printer* ptrToprinter = nullptr;

	ptrToprinter = new Printing::Printer();

	std::cerr << " принтеров создано: " << Printing::Printer::getCountCreatedPrinters() << std::endl;

	delete ptrToprinter;

	std::cerr << " принтеров создано: " << Printing::Printer::getCountCreatedPrinters() << std::endl;

	std::ofstream fout;

    	fout.open("text.txt",std::ofstream::app);

    	if(!fout.is_open())
    	{
        	std::cout<<"Ошибка"<<std::endl;
    	}
    	else
    	{	
       	 	std::cout<<"Файл создан"<<std::endl;
        	fout.write((char*)&printer2,sizeof(Printing::Printer));
    	}

    	fout.close();

    	std::ifstream fin;

    	fin.open("text.txt");
    	std::string stra;

    	if(!fin.is_open())
        {
            std::cout<<"Ошибка"<<std::endl;
        }
        else
        {

            while(!fin.eof())
                fin >>stra;
        }
     	fin.close();

     	Printing::Printer printer3;
     	printer3.print(stra);


	return 0;
}
