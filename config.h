#ifndef _CONFIG_H
#define _CONFIG_H

class CConfig
{
	public:
		CConfig();

		std::string getLUsername() { return _lusername; }
		std::string getLPassword() { return _lpassword; }
		std::string getMHost() { return _mhost; }
		std::string getMPassword() { return _mpassword; }
		int getMPort() { return _mport; }
	private:
		void ParseLine(std::string line);
		std::string _lusername, _lpassword;
		std::string _mhost, _mpassword;
		int _mport;
};

extern CConfig* Config;

#endif
