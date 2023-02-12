[eAIRegisterFaction(eAIFactionTwo)]
class eAIFactionTwo : eAIFaction
{
	void eAIFactionOne()
	{
		m_Name = "Two";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionTwo)) return true;
		return false;
	}
};
