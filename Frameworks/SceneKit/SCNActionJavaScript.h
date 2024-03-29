//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNActionJavaScript_h
#define SCNActionJavaScript_h
@import Foundation;

#include "SCNAction.h"

@class NSString;

@interface SCNActionJavaScript : SCNAction {
  /* instance variables */
  NSString *_script;
}

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)javaScriptActionWithDuration:(double)duration script:(id)script;

/* instance methods */
- (id)initWithString:(id)string;
- (void)dealloc;
- (BOOL)isCustom;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)reversedAction;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)parameters;
@end

#endif /* SCNActionJavaScript_h */
