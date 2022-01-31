/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:03:35 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/31 11:36:04 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <string>

class	Zombie {

public:

	Zombie(void);

	Zombie(std::string str);
	~Zombie(void);

	void	announce(void) const;

private:

	std::string	name;

};

#endif
