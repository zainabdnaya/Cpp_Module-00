/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 22:30:18 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/23 16:33:41 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter 
{
	private:
		std::string 	_name;
		int			_idx;
		AMateria*	_m[4];
	public:
		Character(std::string const &name);
		Character(Character const &cpy );
		~Character(void);
		Character& 			operator=(Character const &equal);
		std::string const	&getName(void) const;
		int					getNumber(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif