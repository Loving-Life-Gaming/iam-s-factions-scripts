[eAIRegisterFaction(eAIFactionFour)]
class eAIFactionFour : eAIFaction
{
	void eAIFactionFour()
	{
		m_Name = "Four";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionFour)) return true;
		return false;
	}
};
