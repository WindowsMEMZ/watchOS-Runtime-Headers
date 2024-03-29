//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKFieldPropertiesInspectorDataSource_Protocol_h
#define NPKFieldPropertiesInspectorDataSource_Protocol_h
@import Foundation;

#include "NPKFieldPropertiesInspectorDataSource-Protocol.h"
#include "NPKPassesDataSource-Protocol.h"

@class NSString;

@protocol NPKFieldPropertiesInspectorDataSource <NSObject>

@property (readonly, nonatomic) NSString *defaultPaymentPassUniqueID;

/* instance methods */
- (id)NFCValueAddedPasses;
- (id)secureElementPassesOfType:(unsigned long long)type;
- (id)passForUniqueID:(id)id;
@end

#endif /* NPKFieldPropertiesInspectorDataSource_Protocol_h */
