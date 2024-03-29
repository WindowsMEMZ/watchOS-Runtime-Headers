//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFRequestCompletionOptions_h
#define AFRequestCompletionOptions_h
@import Foundation;

#include "AFTriggerlessListeningOptions.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface AFRequestCompletionOptions : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) AFTriggerlessListeningOptions *triggerlessListeningOptions;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithShowUIDuringListening:(BOOL)listening playAlertBeforeListening:(BOOL)listening;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* AFRequestCompletionOptions_h */
