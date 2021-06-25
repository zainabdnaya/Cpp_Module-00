/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:00:34 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/25 19:29:14 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
    Character *me = new Character("me");
    std::cout << *me;
    Enemy *b = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->recoverAP();
    Character *_me = new Character("zainab");
    Enemy *a = new RadScorpion();
    std::cout << *_me;
    _me->recoverAP();
     _me->equip(pr);
    std::cout << *_me;
    _me->equip(pf);
    _me->attack(a);
    std::cout << *_me;
    _me->equip(pr);
    std::cout << *_me;
    _me->attack(a);
    std::cout << *_me;
    _me->attack(a);
    std::cout << *_me;
    

    return 0;
}