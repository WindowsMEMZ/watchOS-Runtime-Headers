//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSXPCDecoding_Protocol_h
#define RBSXPCDecoding_Protocol_h
@import Foundation;

@protocol RBSXPCDecoding <NSObject>
/* instance methods */
- (id)decodeObjectOfClass:(Class)class forKey:(id)key;
- (id)decodeCollectionOfClass:(Class)class containingClass:(Class)class forKey:(id)key;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s *)type forKey:(id)key;
- (id)decodeStringForKey:(id)key;
- (double)decodeDoubleForKey:(id)key;
- (BOOL)decodeBoolForKey:(id)key;
- (long long)decodeInt64ForKey:(id)key;
- (unsigned long long)decodeUInt64ForKey:(id)key;
- (BOOL)containsValueForKey:(id)key;
@end

#endif /* RBSXPCDecoding_Protocol_h */
