//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRichComplicationBezelBaseCircularView_h
#define NTKRichComplicationBezelBaseCircularView_h
@import Foundation;

#include "NTKRichComplicationBezelView.h"
#include "CDComplicationDisplayObserver-Protocol.h"
#include "NTKRichComplicationCircularBezelView-Protocol.h"

@class CDRichComplicationTemplateView, CDRichComplicationView, CLKUICurvedColoringLabel, NSString;

@interface NTKRichComplicationBezelBaseCircularView : NTKRichComplicationBezelView<CDComplicationDisplayObserver, NTKRichComplicationCircularBezelView> {
  /* instance variables */
  double _circularViewRotationInDegree;
  CLKUICurvedColoringLabel *_bezelTextLabel;
  double _bezelTextLabelRotationInDegree;
  double _newDataAnimationCircularScale;
  double _newDataAnimationBezelLabelScale;
  BOOL _allowUpdatingBezelTextProperties;
  BOOL _allowNofityingDelegateWithBezelTextUpdate;
  long long _fromTheme;
  long long _toTheme;
  double _themeFraction;
  double _inMonochromeModeFraction;
}

@property (readonly, nonatomic) CDRichComplicationView *circularView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double bezelLabelCircularRadius;

/* class methods */
+ (void)prepareCustomDataAnimation:(id)animation fromEarlierView:(id)view laterView:(id)view isForward:(BOOL)forward;
+ (void)updateCustomDataAnimationFromEarlierView:(id)view laterView:(id)view isForward:(BOOL)forward animationType:(unsigned long long)type animationDuration:(double)duration animationFraction:(float)fraction bezelTextUpdateHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (void)setBezelTextColor:(id)color;
- (void)setBezelTextRadius:(double)radius;
- (double)bezelTextRadius;
- (struct CGPoint { double x0; double x1; })circularViewCenter;
- (void)_handleTemplate:(id)template reason:(long long)reason;
- (void)_applyPausedUpdate;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)discard inGroup:(id)group;
- (void)_setEditingTransitionFraction:(double)fraction direction:(long long)direction position:(long long)position type:(long long)type;
- (void)_editingDidEnd;
- (void)_layoutBezelLabel;
- (void)_layoutCircularView;
- (void)_transitThemeFromTheme:(long long)theme toTheme:(long long)theme fraction:(double)fraction;
- (void)_transitToHighlightState:(BOOL)state fraction:(double)fraction;
- (void)setTimeTravelDate:(id)date animated:(BOOL)animated;
- (void)setForegroundColor:(id)color;
- (Class)_circularViewClassFromFromTemplate:(id)template;
- (id)_bezelTextProviderFromTemplate:(id)template;
- (id)_circularTemplateFromTemplate:(id)template;
- (void)_enumerateLabelsWithBlock:(id /* block */)block;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
- (void)complicationDisplayNeedsResize:(id)resize;
- (void)complicationDisplay:(id)display renderStatsWithTime:(double)time cost:(double)cost;
- (void)_createBezelLabel;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)fraction direction:(long long)direction position:(long long)position;
- (void)_updateNewDataAnimationFinalAlpha:(double)alpha finalBezelLabelScale:(double)scale finalCircularViewScale:(double)scale animationApplierBlock:(id /* block */)block animationFraction:(float)fraction;
- (void)tritium_transitionToTritiumOffWithProgress:(float)progress;
- (void)tritium_transitionToTritiumOnWithProgress:(float)progress;
@end

#endif /* NTKRichComplicationBezelBaseCircularView_h */
