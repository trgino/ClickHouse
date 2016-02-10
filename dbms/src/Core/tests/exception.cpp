#include <iostream>

#include <Poco/Net/NetException.h>

#include <DB/Common/Exception.h>


int main(int argc, char ** argv)
{
	try
	{
		//throw Poco::Net::ConnectionRefusedException();
		throw DB::Exception(Poco::Net::ConnectionRefusedException());
	}
	catch (const DB::Exception & e)
	{
		std::cerr << e.displayText() << std::endl;
	}
	catch (const Poco::Exception & e)
	{
		std::cerr << e.displayText() << std::endl;
	}

	return 0;
}