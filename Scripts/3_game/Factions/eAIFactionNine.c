[eAIRegisterFaction(eAIFactionNine)]
class eAIFactionNine : eAIFaction
{
	void eAIFactionNine()
	{
		m_Name = "Nine";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionNine)) return true;
		return false;
	}
};
