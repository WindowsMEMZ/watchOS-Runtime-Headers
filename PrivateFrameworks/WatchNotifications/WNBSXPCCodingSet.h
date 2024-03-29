//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNBSXPCCodingSet_h
#define WNBSXPCCodingSet_h
@import Foundation;

#include "BSXPCCoding-Protocol.h"

@class NSSet, NSString;

@interface WNBSXPCCodingSet : NSObject<BSXPCCoding>

@property (readonly, copy, nonatomic) NSSet *set;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)BSXPCCodingSetWithSet:(id)set;

/* instance methods */
- (id)initWithSet:(id)set;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* WNBSXPCCodingSet_h */
