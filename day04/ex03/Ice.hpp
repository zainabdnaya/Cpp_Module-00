/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:37:10 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/23 13:44:08 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        std::string name;        
    public :
    	Ice();
		~Ice();
		Ice &operator=(Ice const &equal);
        Ice (const Ice &cpy);
		AMateria* 	clone(void) const;
		void 		use(ICharacter& target);
        
};

#endif