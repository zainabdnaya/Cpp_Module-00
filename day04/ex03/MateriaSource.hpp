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
#include "IMateriaSource.hpp"
class AMateria;
class MateriaSource : public IMateriaSource
{
private:
    AMateria *A[4];
    int index;
public:
    ~MateriaSource() {}
    MateriaSource();
    MateriaSource(MateriaSource const &cpy);
    MateriaSource &operator=(MateriaSource const &equal);
    void learnMateria(AMateria  *m);
    AMateria *createMateria(std::string const &type);
};

#endif