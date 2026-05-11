/* D2X: LAND BEFORE TIME - APEX PREDATOR AI */

void Boss_SabertoothAlpha(Unit* boss) {
    // Stalking Logic: Active during Act 3 Blizzards
    if (World::IsBlizzard()) {
        boss->AlphaChannel = 0.10f; // 90% Transparency
        boss->Speed *= 1.25f;       // Speed boost in snow
    }
}

void Boss_UndeadGiga(Unit* boss) {
    // Multi-phase Lich transformation
    if (boss->HP_Percent < 50) {
        World::ShatterFloor(ICE_SPIKES); // Environmental hazard
        for(int i=0; i<5; i++) {
            Spawn::Minion(GLACIAL_RAPTOR);
        }
    }
}
