/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:00:34 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/18 15:55:05 by zdnaya           ###   ########.fr       */
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
    Character *_new = new Character("bleu");
    std::cout << *me;
    Enemy *b = new RadScorpion();
    Enemy *a = new SuperMutant();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->recoverAP();
    me->attack(b);
    std::cout << *me;
    me->recoverAP();
    me->equip(pf);
    std::cout << *me;
    me->recoverAP();
    me->attack(a);
    std::cout << *me;
    me->recoverAP();
    std::cout << *_new;
    _new->attack(a);
    me->recoverAP();
    std::cout << *_new;
    _new->equip(pr);
    std::cout << *_new;
    _new->attack(a);    
    _new->recoverAP();
    std::cout << *_new;
    _new->equip(pf);
    _new->attack(b);
    std::cout << *_new;
    _new->recoverAP();
    _new->equip(pf);
    _new->attack(a);
    std::cout << *_new;

    return 0;
}
