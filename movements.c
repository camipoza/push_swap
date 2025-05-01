/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:05:14 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/05/01 16:53:10 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* *** 4. MOVIMIENTOS ***

- ra: Desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último
- rb: Desplaza hacia arriba todos los elementos del stack b una posición, de forma que el primer elemento se convierte en el último
- rr: ra y rb a la vez 
- rra: Desplaza hacia abajo todos los elementos del stack a una posición, de forma que el último elemento se convierte en el primero.
- rrb: Desplaza hacia abajo todos los elementos del stack b una posición, de forma que el último elemento se convierte en el primero.
- rrr: rra y rrb */