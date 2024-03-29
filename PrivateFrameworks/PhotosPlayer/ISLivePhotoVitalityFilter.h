//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISLivePhotoVitalityFilter_h
#define ISLivePhotoVitalityFilter_h
@import Foundation;

#include "ISVitalitySettings-Protocol.h"

@interface ISLivePhotoVitalityFilter : NSObject

@property (nonatomic) BOOL isPerformingInputChanges;
@property (nonatomic) BOOL _shouldUpdateOutput;
@property (readonly, nonatomic) NSObject<ISVitalitySettings> *settings;
@property (readonly, nonatomic) long long state;
@property (copy, nonatomic) id /* block */ outputChangeHandler;

/* instance methods */
- (id)init;
- (id)initWithSettings:(id)settings;
- (void)performInputChanges:(id /* block */)changes;
- (void)invalidateOutput;
- (void)updateOutput;
- (void)_setPerformingInputChanges:(BOOL)changes;
- (void)_setShouldUpdateOutput:(BOOL)output;
@end

#endif /* ISLivePhotoVitalityFilter_h */
