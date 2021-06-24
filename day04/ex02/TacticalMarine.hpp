/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 21:25:40 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/24 19:31:34 by zainabdnaya      ###   ########.fr       */
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
    virtual ~TacticalMarine();
    TacticalMarine(TacticalMarine const &cpy);
    TacticalMarine &operator=(TacticalMarine const &equal);

    //use Interface
    ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif
