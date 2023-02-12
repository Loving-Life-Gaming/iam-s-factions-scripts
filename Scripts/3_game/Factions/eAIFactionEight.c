[eAIRegisterFaction(eAIFactionEight)]
class eAIFactionEight : eAIFaction
{
	void eAIFactionEight()
	{
		m_Name = "Eight";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionEight)) return true;
		return false;
	}
};
