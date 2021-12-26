#pragma once

#include "simpletransform.h"
#include "matrixlink.h"

class CPlaceable
{
public:
    char pad1[4];
    CSimpleTransform m_placement;
    CMatrixLink* m_matrix;
    inline CVector& GetPosition()
    {
        return m_matrix ? m_matrix->pos : m_placement.m_vPosn;
    }
};