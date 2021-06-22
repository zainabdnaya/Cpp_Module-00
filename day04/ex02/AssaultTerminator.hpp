/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 11:10:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/22 16:17:27 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINTOR_HPP
#define ASSAULTTERMINTOR_HPP
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
    AssaultTerminator();
    ~AssaultTerminator();
    AssaultTerminator (AssaultTerminator const &cpy);
	AssaultTerminator &operator=(AssaultTerminator const &equal);

    //use Interface 
    ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif
