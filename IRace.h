#pragma once

class IRace
{
public:
    IRace(int HitPoints, int AttackPoints, int DefensePoints) : m_HitPointsMod(HitPoints),
    m_AttackPointsMod(AttackPoints), m_DefensePointsMod(DefensePoints) {}

    ~IRace() {}
protected:
    int m_HitPointsMod;
    int m_AttackPointsMod;
    int m_DefensePointsMod;
};