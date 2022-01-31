/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/31 16:11:38 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	Character	a("Jean");
	Character	b("Marc");

	AMateria	*m1 = new Cure("Cure1");
	AMateria	*m2 = new Cure("Cure2");
	AMateria	*m3 = new Ice("Ice1");
	AMateria	*m4 = new Ice("Ice2");

	a.printInventory();
	b.printInventory();

	a.equip(m1);
	a.equip(m2);
	a.equip(m3);

	b.equip(m1);
	b.equip(m2);
	b.equip(m3);
	b.equip(m4);
	b.equip(m4);
	b.equip(m4);
	b.equip(m4);
	b.equip(m4);

	a.printInventory();
	b.printInventory();

	b.unequip(2);
	b.printInventory();
	b.unequip(-1);
	b.unequip(3);
	b.unequip(0);
	b.printInventory();

	a.use(0, b);
	b.use(1, a);

	Character deepCopy("Jean eude");
	deepCopy.equip(m1);
	deepCopy.equip(m2);

	deepCopy.printInventory();
	Character deepCopy2(deepCopy);

	deepCopy2.printInventory();
	deepCopy.printInventory();

	deepCopy.unequip(0);
	
	deepCopy2.printInventory();
	deepCopy.printInventory();

	return (0);
}
