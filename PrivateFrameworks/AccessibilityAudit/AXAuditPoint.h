//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 149.1.0.0.0
//
#ifndef AXAuditPoint_h
#define AXAuditPoint_h
@import Foundation;

#include "AXAuditTransportableObjectProtocol-Protocol.h"

@class NSString;

@interface AXAuditPoint : NSObject<AXAuditTransportableObjectProtocol>

@property (nonatomic) struct CGPoint { double x0; double x1; } point;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)registerTransportableObjectWithManager:(id)manager;
+ (id)createWithPoint:(struct CGPoint { double x0; double x1; })point;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* AXAuditPoint_h */
