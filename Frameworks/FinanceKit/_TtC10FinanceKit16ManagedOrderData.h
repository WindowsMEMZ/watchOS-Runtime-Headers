//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 143.7.11.0.0
//
#ifndef _TtC10FinanceKit16ManagedOrderData_h
#define _TtC10FinanceKit16ManagedOrderData_h
@import Foundation;

#include "NSManagedObject.h"

@class NSData;

@interface FinanceKit.ManagedOrderData : NSManagedObject // (Swift)

@property (nonatomic, @dynamic, copy) NSData *data;

/* instance methods */
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* _TtC10FinanceKit16ManagedOrderData_h */
