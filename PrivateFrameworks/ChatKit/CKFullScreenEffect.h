//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKFullScreenEffect_h
#define CKFullScreenEffect_h
@import Foundation;

#include "CKAudioController.h"
#include "CKAudioControllerDelegate-Protocol.h"
#include "CKFullScreenEffectDelegate-Protocol.h"
#include "CKMessagePartChatItem.h"

@class BOOL *, NSString;

@interface CKFullScreenEffect : NSObject<CKAudioControllerDelegate> {
  /* instance variables */
  CKAudioController *_audioController;
  float _currentVolume;
}

@property (nonatomic) BOOL triggeredByResponseKit;
@property (nonatomic) char messageOrientation;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CKMessagePartChatItem *triggeringChatItem;
@property (weak, nonatomic) NSObject<CKFullScreenEffectDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_monochromeDimmingFilterWithType:(int)type;
+ (id)bigEmojiFilter;
+ (id)tapBackFilter;
+ (id)stickerFilter;

/* instance methods */
- (unsigned long long)layerCount;
- (Class)effectViewClass;
- (BOOL)shouldDrawOverNavigationBar;
- (BOOL)isForegroundEffect;
- (double)duration;
- (id)backgroundColor;
- (id)messageFilters;
- (id)soundEffectFileURL;
- (BOOL)soundEffectHasHapticTrack;
- (void)dealloc;
- (int)_filterTypeForCell:(id)cell caresAboutOrientation:(BOOL *)orientation orientation:(char *)orientation;
- (void)applyMessageFiltersToCells:(id)cells;
- (void)animateFiltersForCell:(id)cell;
- (void)applyMessageFiltersToTriggeringCell:(id)cell;
- (void)clearMessageFiltersFromCells:(id)cells;
- (void)_ensureAudioPlayer;
- (void)prepareSoundEffect;
- (BOOL)_isPlaySoundEnabled;
- (void)playSoundEffect;
- (void)stopSoundEffect;
- (void)audioController:(id)controller mediaObjectProgressDidChange:(id)change currentTime:(double)time duration:(double)duration;
- (void)audioController:(id)controller didPrepareMediaObjectToPlay:(id)play successfully:(BOOL)successfully;
- (void)_didPrepareSoundEffect;
- (void)_audioSessionOptionsWillChange:(id)change;
- (BOOL)_supportsSoundEffects;
- (BOOL)effectIsDark;
@end

#endif /* CKFullScreenEffect_h */
