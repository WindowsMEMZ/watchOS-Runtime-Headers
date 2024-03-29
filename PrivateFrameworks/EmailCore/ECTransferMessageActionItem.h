//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECTransferMessageActionItem_h
#define ECTransferMessageActionItem_h
@import Foundation;

#include "ECMessage-Protocol.h"
#include "ECTransferMessageActionItemBuilder-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface ECTransferMessageActionItem : NSObject<ECTransferMessageActionItemBuilder, NSCopying>

@property (copy, nonatomic) NSString *sourceRemoteID;
@property (retain, nonatomic) NSObject<ECMessage> *sourceMessage;
@property (retain, nonatomic) NSObject<ECMessage> *destinationMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBuilder:(id /* block */)builder;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ECTransferMessageActionItem_h */
