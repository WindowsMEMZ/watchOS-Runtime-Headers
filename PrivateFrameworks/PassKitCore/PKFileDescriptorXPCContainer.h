//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKFileDescriptorXPCContainer_h
#define PKFileDescriptorXPCContainer_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKInvalidatable-Protocol.h"

@class NSString;
@protocol OS_xpc_object;

@interface PKFileDescriptorXPCContainer : NSObject<NSSecureCoding, PKInvalidatable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _writeLock;
  NSObject<OS_xpc_object> *_fd;
}

@property (readonly, nonatomic) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)_init;
- (id)_initWithXPCFileDescriptor:(id)descriptor;
- (id)initWithFileURL:(id)url;
- (id)initWithFileDescriptor:(int)descriptor;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)accessFileDescriptorWithBlock:(id /* block */)block;
- (BOOL)isInvalidated;
- (void)invalidate;
@end

#endif /* PKFileDescriptorXPCContainer_h */
