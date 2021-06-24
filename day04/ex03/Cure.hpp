/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:38:01 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/24 13:22:24 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
    	Cure();
		~Cure();
		Cure &operator=(Cure const &equal);
        Cure (const Cure &cpy);
		AMateria* 	clone(void) const;
		void 		use(ICharacter& target);
        
};

#endif