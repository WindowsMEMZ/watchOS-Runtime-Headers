//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKDPersona_h
#define PKDPersona_h
@import Foundation;

@class NSNumber;

@interface PKDPersona : NSObject

@property (readonly) NSNumber *personaID;
@property (readonly) BOOL enterprise;

/* class methods */
+ (BOOL)personasAreSupported;

/* instance methods */
- (id)initWithPersonaID:(id)id enterprise:(BOOL)enterprise;
- (unsigned long long)hash;
- (BOOL)isEqualToPersona:(id)persona;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (BOOL)isEnterprise;
@end

#endif /* PKDPersona_h */
