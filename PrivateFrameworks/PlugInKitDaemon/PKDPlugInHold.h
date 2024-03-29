//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKDPlugInHold_h
#define PKDPlugInHold_h
@import Foundation;

#include "PKDXpcClient.h"

@class NSDate, NSSet, NSString, NSUUID;
@protocol OS_os_transaction;

@interface PKDPlugInHold : NSObject

@property (retain) NSUUID *uuid;
@property (retain) NSSet *blocked;
@property (weak) PKDXpcClient *client;
@property (retain) NSDate *created;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property (copy) NSString *extensionPointName;

/* instance methods */
- (id)initWithPlugIns:(id)ins extensionPointName:(id)name forClient:(id)client;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* PKDPlugInHold_h */
