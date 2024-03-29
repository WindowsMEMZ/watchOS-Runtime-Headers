//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef ICTuple_h
#define ICTuple_h
@import Foundation;

@interface ICTuple : NSObject

@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id secondObject;

/* instance methods */
- (id)initWithFirstObject:(id)object secondObject:(id)object;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ICTuple_h */
