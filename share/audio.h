#ifndef AUDIO_H
#define AUDIO_H

/*---------------------------------------------------------------------------*/

#ifdef N64
void nb_audio_init(void); //Needed to rename due to conflict with libdragon
#else
void audio_init(void);
#endif
void audio_free(void);
void audio_play(const char *, float);

void audio_music_queue(const char *, float);
void audio_music_play(const char *);
void audio_music_stop(void);

void audio_music_fade_to(float, const char *);
void audio_music_fade_in(float);
void audio_music_fade_out(float);

void audio_timer(float);
void audio_volume(int, int);

/*---------------------------------------------------------------------------*/

#endif
