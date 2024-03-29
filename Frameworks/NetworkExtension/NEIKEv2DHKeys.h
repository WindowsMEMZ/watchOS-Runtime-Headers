//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEIKEv2DHKeys_h
#define NEIKEv2DHKeys_h
@import Foundation;

@class NSData;

@interface NEIKEv2DHKeys : NSObject {
  /* instance variables */
  int _type;
  unsigned long long _group;
  NSData *_prime;
  struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } * _privateKeyRef;
  NSData *_publicKey;
  unsigned long long _publicKeySize;
  struct OpaqueSecDHContext * _context;
}

/* instance methods */
- (void)dealloc;
@end

#endif /* NEIKEv2DHKeys_h */
