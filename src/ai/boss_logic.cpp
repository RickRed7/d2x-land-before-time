/* APEX PREDATOR AI SCRIPTS */

void Boss_SabertoothAlpha(Unit* boss) {
    if (World::IsBlizzard()) boss->Alpha(0.10f); // Active Camo
}

void Boss_UndeadGiga(Unit* boss) {
    if (boss->HP < 0.5f) {
        World::ShatterFloor(ICE_SPIKES);
        Spawn::Minions(GLACIAL_RAPTOR, 5);
    }
}

void Boss_AmberTyrant() { /* Wave 10 Amber Trials Guardian */ }
