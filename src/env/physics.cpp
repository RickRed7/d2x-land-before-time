/* D2X: LAND BEFORE TIME - RUNETEK PHYSICS */

void Level_Physics_Update(int actID) {
    // ACT 3: FROZEN PANGAEA
    if (actID == 3) {
        Global::Friction = 0.02f; // High-poly Ice Sliding
        Global::WindForce = 15.0f; // Blizzard pushback
    }
    
    // ACT 4: EXTINCTION CRATER
    if (actID == 4) {
        Global::Gravity = 0.35f;   // Low-Gravity Meteor Zones
        Global::Radiation = 0.05f; // Passive HP drain
    }
}
