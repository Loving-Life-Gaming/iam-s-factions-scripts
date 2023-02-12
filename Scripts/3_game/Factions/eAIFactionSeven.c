[eAIRegisterFaction(eAIFactionSeven)]
class eAIFactionSeven : eAIFaction
{
	void eAIFactionSeven()
	{
		m_Name = "Seven";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionSeven)) return true;
		return false;
	}
};
