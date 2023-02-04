#include<iostream>
#include<string>
#include<fstream>


int main(int argc,char **argv)
{
	if(argc != 4)
	{
		std::cout << "wrong argument count!" << std::endl;
		return 1;
	}  
    std::string file,s1,s2,tmp;
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream in(argv[1]); //ifstream and ofstream ->class
	if (!in)
	{
		std::cout << "error ifstream" << std::endl;
		return 1;
	}
	std::ofstream out(file.append(".replace").c_str(), std::ofstream::trunc); //c_str() diziyi sonunda bir '\0' ile döndürür.
	if (!out)
	{
		std::cout << "error ofstream" << std::endl;
		return 1;
	}
    while(getline(in, tmp)){
        size_t pos = 0;
		while ((pos = tmp.find(s1)) != std::string::npos) //The position of the first character of the first match //If no matches were found, the function returns string::npos.
		{
			tmp.erase(pos, s1.size());
			tmp.insert(pos, s2); //eklemek
		}
		out << tmp << std::endl;
	}
	in.close();
	out.close();
	return 0;
}
//Maximum value for size_t -> npos
//npos, when used as the value for a len (or sublen) parameter in string's member functions, means "until the end of the string".
//As a return value, it is usually used to indicate no matches.