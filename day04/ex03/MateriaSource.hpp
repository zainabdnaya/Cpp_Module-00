/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                 +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:17:54 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/23 21:01:54 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "AMateria.hpp"

class MateriaSource : public MateriaSource
{
private:
    AMateria *A[4];
    int index;
public:
    ~MateriaSource() {}
    void learnMateria(AMateria  *m);
    AMateria *createMateria(std::string const &type);
};

#endif