#pragma once

namespace game_console
{
	enum console_type
	{
		con_type_error = 1,
		con_type_warning = 3,
		con_type_info = 7
	};

	void print(int type, const char* fmt, ...);
	void print_internal(const char* fmt, ...);

	bool console_char_event(int local_client_num, int key);
	bool console_key_event(int local_client_num, int key, int down);

	bool match_compare(const std::string& input, const std::string& text, const bool exact);
	void find_matches(std::string input, std::vector<std::string>& suggestions, const bool exact);
}
