//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSPurchaseHistoryItem_h
#define SSPurchaseHistoryItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "SSXPCCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SSPurchaseHistoryItem : NSObject<SSXPCCoding, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_properties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)setValue:(id)value forProperty:(id)property;
- (id)valueForProperty:(id)property;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SSPurchaseHistoryItem_h */
