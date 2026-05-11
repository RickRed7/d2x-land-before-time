/* D2X: AMBER TRIALS - WAVE SCALING LOGIC */

void InitializeTrial(int waveNumber) {
    float difficulty = 1.0f + (waveNumber * 0.15f);
    SpawnRate = BASE_SPAWN * difficulty;
}

void CheckWaveCompletion() {
    if (EnemiesRemaining == 0) {
        GrantAmberShards(CurrentWave);
        TriggerNextWave();
    }
}
