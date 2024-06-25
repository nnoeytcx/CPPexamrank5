#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string.h>

class Warlock
{
	public:
		Warlock(std::string const &name, std::string const& title);
		~Warlock(void);

		std::string const&	getName(void) const;
		std::string const&	getTitle(void) const;

		void				setTitle(std::string const& title);

		void 				introduce() const;

	private:
		std::string	_name;
		std::string	_title;

		Warlock(void);
		Warlock(Warlock const& r);
		Warlock& operator=(Warlock const& r);
};

#endif