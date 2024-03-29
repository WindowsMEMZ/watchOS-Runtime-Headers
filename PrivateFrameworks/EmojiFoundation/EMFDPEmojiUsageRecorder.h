//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.200.0.0.0
//
#ifndef EMFDPEmojiUsageRecorder_h
#define EMFDPEmojiUsageRecorder_h
@import Foundation;

#include "EMFDPRecorder.h"

@class NSLocale, NSString;

@interface EMFDPEmojiUsageRecorder : EMFDPRecorder

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *usageModeIdentifier;

/* class methods */
+ (id)_defaultUsageModeIdentifier;

/* instance methods */
- (id)initWithEmoji:(id)emoji;
- (id)initWithEmoji:(id)emoji usageModeIdentifier:(id)identifier;
- (id)recordingKey;
- (id)delegate;
- (BOOL)report;
@end

#endif /* EMFDPEmojiUsageRecorder_h */
