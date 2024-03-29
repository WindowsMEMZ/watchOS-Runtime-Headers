//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostStackFrame_h
#define SignpostStackFrame_h
@import Foundation;

@class NSUUID;

@interface SignpostStackFrame : NSObject

@property (readonly, nonatomic) NSUUID *symbolOwnerUUID;
@property (readonly, nonatomic) unsigned long long offset;

/* instance methods */
- (id)_serializableArrayRepresentation;
- (id)initWithArrayRepresentation:(id)representation;
- (id)initWithUUID:(id)uuid offset:(unsigned long long)offset;
- (BOOL)isEqual:(id)equal;
- (id)debugDescription;
@end

#endif /* SignpostStackFrame_h */
