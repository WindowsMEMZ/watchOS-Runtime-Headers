//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVDialogResponse_h
#define SSVDialogResponse_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "SSXPCCoding-Protocol.h"

@class NSArray, NSString;

@interface SSVDialogResponse : NSObject<NSCopying, SSXPCCoding>

@property (nonatomic) long long selectedButtonIndex;
@property (copy, nonatomic) NSArray *textFieldValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
@end

#endif /* SSVDialogResponse_h */
