/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 21:25:40 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/22 15:57:58 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"
class ISpaceMarine;

class TacticalMarine : public ISpaceMarine
{
    private:

public:
    TacticalMarine();
    ~TacticalMarine();
    TacticalMarine (TacticalMarine const &cpy);
	TacticalMarine &operator=(TacticalMarine const &equal);

    //use Interface 
    ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif
