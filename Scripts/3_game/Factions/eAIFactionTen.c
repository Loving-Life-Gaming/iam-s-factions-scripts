[eAIRegisterFaction(eAIFactionTen)]
class eAIFactionTen : eAIFaction
{
	void eAIFactionTen()
	{
		m_Name = "Ten";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionTen)) return true;
		return false;
	}
};
