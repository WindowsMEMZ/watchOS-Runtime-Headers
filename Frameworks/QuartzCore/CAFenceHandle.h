//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1110.5.0.0.0
//
#ifndef CAFenceHandle_h
#define CAFenceHandle_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface CAFenceHandle : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  unsigned long long _handle_name;
  unsigned long long _fence_name;
  unsigned int _port;
  struct Mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _m; } _invalidation_mutex;
  struct SpinLock { struct { int x; } _l; } _lock;
}

@property (readonly) BOOL usable;
@property (readonly) BOOL invalidated;

/* class methods */
+ (id)newFenceFromServer:(unsigned int)server;
+ (id)newFenceFromDefaultServer;
+ (id)handleFromXPCRepresentation:(id)xpcrepresentation;
+ (id)handleForPort:(unsigned int)port fenceId:(unsigned long long)id;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)dealloc;
- (id)init;
- (BOOL)isUsable;
- (BOOL)isInvalidated;
- (void)invalidate;
- (id)createXPCRepresentation;
- (unsigned long long)fenceId;
- (unsigned int)copyPort;
- (void)accessMachPort:(id /* block */)port;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* CAFenceHandle_h */
