//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _NSXPCConnectionExportedObjectTable_h
#define _NSXPCConnectionExportedObjectTable_h
@import Foundation;

#include "NSXPCInterface.h"

@protocol OS_dispatch_group;

@interface _NSXPCConnectionExportedObjectTable : NSObject {
  /* instance variables */
  id _proxy1Object;
  NSXPCInterface *_proxy1Interface;
  struct __CFDictionary * _proxyNumberToObject;
  struct __CFDictionary * _proxyNumberToInterface;
  struct __CFDictionary * _objectToProxyNumber;
  NSObject<OS_dispatch_group> *_replyGroup;
  unsigned long long _next;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _valid;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)description;
@end

#endif /* _NSXPCConnectionExportedObjectTable_h */
