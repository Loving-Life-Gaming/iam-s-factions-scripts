[eAIRegisterFaction(eAIFactionFive)]
class eAIFactionFive : eAIFaction
{
	void eAIFactionFive()
	{
		m_Name = "Five";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionFive)) return true;
		return false;
	}
};
