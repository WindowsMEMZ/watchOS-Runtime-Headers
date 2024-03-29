//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRTextEditingSession_h
#define MRTextEditingSession_h
@import Foundation;

#include "MRTextEditingAttributes.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSString;

@interface MRTextEditingSession : NSObject<NSCopying, NSMutableCopying>

@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL editing;
@property (readonly, nonatomic) MRTextEditingAttributes *attributes;

/* instance methods */
- (id)initWithText:(id)text attributes:(id)attributes;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isEditing;
@end

#endif /* MRTextEditingSession_h */
