#pragma once

class IRace
{
public:
    IRace(int HitPoints, int AttackPoints, int DefensePoints) : m_HitPointsMod(HitPoints),
    m_AttackPointsMod(AttackPoints), m_DefensePointsMod(DefensePoints) {}

<<<<<<< HEAD
    virtual int GetHitPointsMod() { return m_HitPointsMod; }
    virtual int GetAttackPointsMod() { return m_AttackPointsMod; }
    virtual int GetDefensePointsMod() { return m_DefensePointsMod; }

=======
>>>>>>> 4d95fb2dd12e3b5817f25212437b8938f939afa8
    ~IRace() {}
protected:
    int m_HitPointsMod;
    int m_AttackPointsMod;
    int m_DefensePointsMod;
};