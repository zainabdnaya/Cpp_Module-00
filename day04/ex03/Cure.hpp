/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:38:01 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/23 13:44:03 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
    private:
        std::string name;        
    public :
    	Cure();
		~Cure();
		Cure &operator=(Cure const &equal);
        Cure (const Cure &cpy);
		AMateria* 	clone(void) const;
		void 		use(ICharacter& target);
        
};

#endif