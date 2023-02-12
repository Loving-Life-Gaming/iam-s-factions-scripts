[eAIRegisterFaction(eAIFactionThree)]
class eAIFactionThree : eAIFaction
{
	void eAIFactionOne()
	{
		m_Name = "Three";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionThree)) return true;
		return false;
	}
};
