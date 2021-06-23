/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 22:07:03 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/23 13:45:19 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;


class AMateria
{
	private:
		std::string const	type; 
		unsigned int 		_xp;
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		AMateria &operator=(AMateria const &equal);
		AMateria (const AMateria &cpy);
		std::string const 	&getType(void) const;
		unsigned int 		getXP(void) const; 
		virtual AMateria* 	clone(void) const = 0;
		virtual void 		use(ICharacter& target);
};
#endif