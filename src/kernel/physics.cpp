/* RUNETEK KERNEL - LOW LEVEL PHYSICS ENGINE */

float ApplyFriction(float base, int terrainType) {
    // Standard terrain friction calculations
    if (terrainType == 0) return base * 0.8f;  // Dirt
    if (terrainType == 1) return base * 0.02f; // Ice (Z-Axis Slide)
    return base;
}

float ApplyGravity(float base, bool inVoidZone) {
    // Gravitational constant modification for Act 4
    if (inVoidZone) return base * 0.35f; // Meteor Zone Gravity
    return base;
}

void ProcessZAxisMovement() {
    // Logic for Raptor Pouncing and Ptero Flight
}
