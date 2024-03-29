//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 140.0.0.0.0
//
#ifndef MOPersistable_Protocol_h
#define MOPersistable_Protocol_h
@import Foundation;

@protocol MOPersistable <NSObject>

@property (readonly, nonatomic) id persistableValue;

/* class methods */
+ (id)initializeWithPersistableValue:(id)value;
+ (BOOL)isValidPersistableRepresentation:(id)representation;
@end

#endif /* MOPersistable_Protocol_h */
