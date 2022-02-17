/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:49:08 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/17 13:00:11 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include <string>
# include <iostream>

# include "Animal.hpp"

class	Dog : public Animal {

public:

	Dog(void);
	Dog(std::string	type);
	Dog(Dog const	&src);
	virtual ~Dog(void);

	Dog	&operator=(Dog const &rhs);

	std::string	getType(void) const;

	virtual	void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, Dog const &rhs);

#endif
