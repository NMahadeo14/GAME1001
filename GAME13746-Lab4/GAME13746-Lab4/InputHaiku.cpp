//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//
//	ifstream inputFile;
//	string haikuLine;
//
//	//Open file
//	inputFile.open("Haiku.txt");
//
//	//Work on file
//
//	if (inputFile)
//	{
//		cout << "This is the Haiku contained in the file:" << endl;
//
//		while (getline(inputFile, haikuLine))
//		{
//			cout << haikuLine << endl;
//		}
//	}
//	else
//	{
//		cout << "Error opening the file.\n";
//	}
//
//	//Close file
//	inputFile.close();
//	return 0;
//}