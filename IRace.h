#pragma once

class IRace
{
public:
    IRace(int HitPoints, int AttackPoints, int DefensePoints) : m_HitPointsMod(HitPoints),
    m_AttackPointsMod(AttackPoints), m_DefensePointsMod(DefensePoints) {}

    virtual int GetHitPointsMod() { return m_HitPointsMod; }
    virtual int GetAttackPointsMod() { return m_AttackPointsMod; }
    virtual int GetDefensePointsMod() { return m_DefensePointsMod; }

    ~IRace() {}
protected:
    int m_HitPointsMod;
    int m_AttackPointsMod;
    int m_DefensePointsMod;
};