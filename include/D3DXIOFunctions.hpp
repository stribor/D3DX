/**
*     Copyright (C) 2008-2014  Francesco Banterle
*
*     This Source Code Form is subject to the terms of the Mozilla Public
*     License, v. 2.0. If a copy of the MPL was not distributed with this
*     file, You can obtain one at http://mozilla.org/MPL/2.0/.
**/

#ifndef D3DX_IO_FUNCTIONS_HPP
#define D3DX_IO_FUNCTIONS_HPP

#include <stdio.h>

#include "D3DXBase.hpp"

#include "D3DXVECTOR3.hpp"

/**
 * @brief D3DXVec3fscanf
 * @param file
 * @param vet
 */
D3DXINLINE void D3DXVec3fscanf(FILE *file, D3DXVECTOR3 *vet)
{
    if (vet == NULL) {
        return;
    }

    fscanf(file, "%f", &vet->x);
    fscanf(file, "%f", &vet->y);
    fscanf(file, "%f", &vet->z);
}

/**
 * @brief D3DXArrayfscanf
 * @param file
 * @param vet
 */
D3DXINLINE void D3DXArrayfscanf(FILE *file, float *vet)
{
    if (vet == NULL) {
        return;
    }

    fscanf(file, "%f", &vet[0]);
    fscanf(file, "%f", &vet[1]);
    fscanf(file, "%f", &vet[2]);
}

/**
 * @brief D3DXVec2fscanf
 * @param file
 * @param vet
 */
D3DXINLINE void D3DXVec2fscanf(FILE *file, D3DXVECTOR2 *vet)
{
    fscanf(file, "%f", &vet->x);
    fscanf(file, "%f", &vet->y);
}

/**
* @brief D3DXVec2printf
* @param vet
*/
D3DXINLINE void D3DXVec2printf(D3DXVECTOR2 *vet)
{
    printf(" %f %f\n", vet->x, vet->y);
}

/**
 * @brief D3DXVec3printf
 * @param vet
 */
D3DXINLINE void D3DXVec3printf(const D3DXVECTOR3 *vet)
{
    printf(" %f %f %f\n", vet->x, vet->y, vet->z);
}

#endif //D3DX_IO_FUNCTIONS_HPP
