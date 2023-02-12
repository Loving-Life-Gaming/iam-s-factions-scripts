[eAIRegisterFaction(eAIFactionSix)]
class eAIFactionSix : eAIFaction
{
	void eAIFactionSix()
	{
		m_Name = "Six";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionSix)) return true;
		return false;
	}
};
