//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef _PUICDictationAndAudioResultsView_h
#define _PUICDictationAndAudioResultsView_h
@import Foundation;

#include "PUICTableView.h"
#include "PUICTableViewDataSource-Protocol.h"
#include "PUICTableViewDelegate-Protocol.h"
#include "_PUICDictationAndAudioResultsViewDelegate-Protocol.h"

@class NSString, UIImage;

@interface _PUICDictationAndAudioResultsView : PUICTableView<PUICTableViewDelegate, PUICTableViewDataSource> {
  /* instance variables */
  long long _state;
  NSString *_language;
  UIImage *_waveformImage;
  NSString *_text;
  BOOL _isTransitioning;
  BOOL _needsTransitionToFailureState;
  BOOL _textResultWasSelected;
  BOOL _audioResultWasSelected;
  BOOL _finalTextReceived;
}

@property (nonatomic) BOOL animatingSelection;
@property (weak, nonatomic) NSObject<_PUICDictationAndAudioResultsViewDelegate> *resultsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame style:(long long)style;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame waveform:(id)waveform text:(id)text language:(id)language;
- (void)_initWithWaveform:(id)waveform text:(id)text language:(id)language;
- (void)updateWithTextResult:(id)result;
- (void)finish;
- (void)dictationFailed;
- (BOOL)_shouldAllowOrbGesture;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (long long)numberOfRowsForState:(long long)state;
- (id)cellForRowAtIndexPath:(id)path state:(long long)state;
- (id)audioHeaderCell;
- (id)waveformCell;
- (id)textLoadingCell;
- (id)textHeaderCell;
- (id)dictationFailureCell;
- (id)textResultsCell;
- (void)tryToBecomeFirstResponder;
- (id)actionController;
- (void)presentAnimatedWithCompletion:(id /* block */)completion;
- (void)presentViews:(id)views animateToOriginY:(double)y completion:(id /* block */)completion;
- (void)animateFromLoadingToTextResult;
- (void)animateFromLoadingToFailure;
- (void)animateFromStreamingToFailure;
- (void)animateLoadingSpinnerHidden;
- (void)animatePartialResultsHidden;
- (BOOL)isAnimatingSelection;
@end

#endif /* _PUICDictationAndAudioResultsView_h */
