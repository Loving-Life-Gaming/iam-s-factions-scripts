[eAIRegisterFaction(eAIFactionOne)]
class eAIFactionOne : eAIFaction
{
	void eAIFactionOne()
	{
		m_Name = "One";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionOne)) return true;
		return false;
	}
};
