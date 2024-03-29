//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKAudioBalloonView_h
#define CKAudioBalloonView_h
@import Foundation;

#include "CKColoredBalloonView.h"
#include "CKAudioBalloonView-Protocol.h"
#include "CKAudioProgressView.h"
#include "CKBalloonVibrancy-Protocol.h"
#include "CKWaveformProgressView.h"

@class NSString, UILabel;

@interface CKAudioBalloonView : CKColoredBalloonView<CKBalloonVibrancy, CKAudioBalloonView>

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CKAudioProgressView *progressView;
@property (retain, nonatomic) CKWaveformProgressView *waveformProgressView;
@property (nonatomic) double time;
@property (nonatomic) double duration;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL played;
@property (nonatomic) long long waveformContentMode;
@property (nonatomic) BOOL controlHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)configureForMessagePart:(id)part;
- (void)configureForComposition:(id)composition;
- (void)configureForMediaObject:(id)object previewWidth:(double)width orientation:(char)orientation;
- (BOOL)isAudioMessage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)addOverlaySubview:(id)subview;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)insets;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setWaveform:(id)waveform;
- (BOOL)isControlHidden;
- (void)updateTimeString;
- (void)updateProgress;
- (id)nonVibrantSubViews;
- (void)vibrantContainerWillReparentNonVibrantSubviews:(id)subviews;
- (void)waveformProgressViewPanning:(id)panning;
- (BOOL)isPlaying;
- (BOOL)isPlayed;
@end

#endif /* CKAudioBalloonView_h */
