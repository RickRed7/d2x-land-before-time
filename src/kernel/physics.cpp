/* RUNETEK KERNEL - LOW LEVEL PHYSICS ENGINE */
float ApplyFriction(float base, int terrainType) {
    if (terrainType == 1) return base * 0.02f; // Ice Slide
    return base * 0.8f; 
}
float ApplyGravity(float base, bool inVoidZone) {
    if (inVoidZone) return base * 0.35f; // Meteor Gravity
    return base;
}
void ProcessZAxisMovement() { /* Raptor Pouncing & Ptero Flight Logic */ }
