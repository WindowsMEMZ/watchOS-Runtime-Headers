//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _CFPasteboardEntry_h
#define _CFPasteboardEntry_h
@import Foundation;

@protocol OS_dispatch_group, OS_xpc_object;

@interface _CFPasteboardEntry : NSObject {
  /* instance variables */
  struct __CFUUID * _uuid;
  struct __CFData * _data;
  NSObject<OS_xpc_object> *_xpcData;
  id /* block */ _promisor;
  id /* block */ _asyncPromisor;
  NSObject<OS_dispatch_group> *_promiseGroup;
  NSObject<OS_xpc_object> *_promisorConnection;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  unsigned char _isHidden;
  atomic unsigned char _promiseState;
}

@property (readonly) struct __CFString * flavorName;
@property (readonly) int itemIdentifier;
@property (readonly) struct __CFUUID * promiseUUID;
@property (readonly) unsigned char hasData;
@property (readonly) unsigned char hasLocalPromise;
@property (readonly) unsigned char promisorExistsInCurrentProcess;
@property unsigned long long dataFlags;
@property unsigned char hidden;
@property unsigned char isPendingFlush;
@property unsigned char extensionConsumed;

/* instance methods */
- (void)promiseDataWithFetchOperation:(id)operation;
- (id)initWithFlavorName:(struct __CFString *)name itemIdentifier:(int)identifier;
- (void)dealloc;
- (id)description;
- (void)setData:(struct __CFData *)data;
- (id)_createXPCData;
- (struct __CFData *)createDataAndReturnError:(int *)error;
- (void)_setLocalPromiseState:(unsigned char)state;
- (id)initFromXPCObject:(id)xpcobject fromConnection:(id)connection;
- (id)createXPCObjectWithMetadataOnly:(unsigned char)only;
- (void)promiseDataWithBlock:(id /* block */)block forPasteboard:(struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __CFString * x1; id x2; struct __CFUUID * x3; struct __CFArray * x4; unsigned char x5; id x6; id x7; atomic  x8; unsigned long long x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; struct __CFData * x14; struct __CFDictionary * x15; } *)pasteboard generation:(long long)generation;
- (unsigned char)resolveLocalPromisedData;
- (void)resolveClientPromisedDataWithQueue:(id)queue completionHandler:(id /* block */)handler;
- (id /* block */)requestDataForPasteboard:(struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __CFString * x1; id x2; struct __CFUUID * x3; struct __CFArray * x4; unsigned char x5; id x6; id x7; atomic  x8; unsigned long long x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; struct __CFData * x14; struct __CFDictionary * x15; } *)pasteboard generation:(long long)generation immediatelyAvailableResult:(struct { int x0; long long x1; struct __CFData * x2; unsigned long long x3; } *)result;
- (unsigned char)isHidden;
@end

#endif /* _CFPasteboardEntry_h */
