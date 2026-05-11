/* Sabertooth Alpha & Undead Giga AI */
void Sabertooth_Stealth(Unit* boss) {
    if (World::IsBlizzard()) boss->Alpha(0.10f); // 90% Camo
}
void GigaLich_Shatter(Unit* boss) {
    if (boss->HP < 0.5f) World::ShatterFloor(MAT_ICE);
}
