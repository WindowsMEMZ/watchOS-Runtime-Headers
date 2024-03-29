//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef _PKDashboardItemWrapper_h
#define _PKDashboardItemWrapper_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKDashboardItem-Protocol.h"
#include "PKIdentifiable-Protocol.h"

@class NSString;

@interface _PKDashboardItemWrapper : NSObject<PKIdentifiable>

@property (retain, nonatomic) NSObject<PKDashboardItem> *wrappedItem;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDashboardItem:(id)item;
@end

#endif /* _PKDashboardItemWrapper_h */
