//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISDialogTextField_h
#define ISDialogTextField_h
@import Foundation;

#include "SSXPCCoding-Protocol.h"

@class NSString;

@interface ISDialogTextField : NSObject<SSXPCCoding>

@property long long keyboardType;
@property BOOL secure;
@property (retain) NSString *title;
@property (retain) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)textFieldWithTitle:(id)title;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
- (BOOL)isSecure;
@end

#endif /* ISDialogTextField_h */
