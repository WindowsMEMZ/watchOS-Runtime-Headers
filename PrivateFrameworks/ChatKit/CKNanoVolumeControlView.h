//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoVolumeControlView_h
#define CKNanoVolumeControlView_h
@import Foundation;

#include "UIImageView.h"
#include "NACVolumeControllerDelegate-Protocol.h"
#include "NSFileManagerDelegate-Protocol.h"
#include "PUICCrownInputSequencerDelegate-Protocol.h"

@class NSString, PUICCrownInputSequencer;
@protocol NACVolumeController;

@interface CKNanoVolumeControlView : UIImageView<PUICCrownInputSequencerDelegate, NACVolumeControllerDelegate, NSFileManagerDelegate>

@property (retain, nonatomic) PUICCrownInputSequencer *crownInputSequencer;
@property (retain, nonatomic) NSObject<NACVolumeController> *volumeController;
@property (nonatomic) unsigned long long currentLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)volumeLevelFromVolumeValue:(float)value;
+ (id)speakerImageForVolumeLevel:(unsigned long long)level;
+ (void)setSpeakerImageMaxSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGSize { double x0; double x1; })speakerImageMaxSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)updateVolumeLevel;
- (BOOL)canBecomeFirstResponder;
- (void)_wheelChangedWithEvent:(id)event;
- (void)crownInputSequencerOffsetDidChange:(id)change;
- (void)crownInputSequencer:(id)sequencer offsetDidReachBoundary:(long long)boundary;
- (void)volumeControllerDidUpdateVolumeValue:(id)value;
- (void)volumeControllerDidUpdateVolumeControlAvailibility:(id)availibility;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
@end

#endif /* CKNanoVolumeControlView_h */
