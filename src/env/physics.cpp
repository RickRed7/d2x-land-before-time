/* RUNETEK PREHISTORIC PHYSICS */

void ApplyActPhysics(int actID) {
    if (actID == 3) { // FROZEN PANGAEA
        Global::Friction = 0.02f; // High-poly Ice Sliding
        Global::Weather = BLIZZARD;
    }
    if (actID == 4) { // EXTINCTION CRATER
        Global::Gravity = 0.35f; // Low-gravity Meteor Jumps
        Global::Atmosphere = VIOLET_RADIATION;
    }
}
