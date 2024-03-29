//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSProcessMonitorConfiguration_h
#define RBSProcessMonitorConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "RBSProcessHandle.h"
#include "RBSProcessMonitorConfiguring-Protocol.h"
#include "RBSProcessStateDescriptor.h"
#include "RBSXPCSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface RBSProcessMonitorConfiguration : NSObject<RBSProcessMonitorConfiguring, NSCopying, RBSXPCSecureCoding> {
  /* instance variables */
  RBSProcessHandle *_lastMatch;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSString *_desc;
  int _clientPid;
  id /* block */ _preventLaunchUpdateHandler;
}

@property (readonly, nonatomic) unsigned long long identifier;
@property (copy, nonatomic) NSArray *predicates;
@property (copy, nonatomic) RBSProcessStateDescriptor *stateDescriptor;
@property (nonatomic) unsigned int serviceClass;
@property (nonatomic) unsigned long long events;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (id)init;
- (void)setPreventLaunchUpdateHandle:(id /* block */)handle;
- (BOOL)matchesProcess:(id)process;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSProcessMonitorConfiguration_h */
