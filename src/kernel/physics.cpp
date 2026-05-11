/* Act 3/4 Physics: Ice & Low Gravity */
float get_friction(int act) { return (act == 3) ? 0.02f : 0.8f; }
float get_gravity(int act) { return (act == 4) ? 0.35f : 1.0f; }
