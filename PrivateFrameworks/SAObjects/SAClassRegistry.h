//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAClassRegistry_h
#define SAClassRegistry_h
@import Foundation;

@interface SAClassRegistry : NSObject
/* class methods */
+ (id)sharedClassRegistry;
+ (void)initialize;
+ (void)registerAcronym:(id)acronym forGroupWithIdentifier:(id)identifier;
+ (void)registerClass:(Class)class forAceClassName:(id)name inGroupWithIdentifier:(id)identifier;
+ (Class)classForAceClassName:(id)name inGroupWithIdentifier:(id)identifier;

/* instance methods */
- (void)registerClass:(Class)class forAceClassWithName:(id)name inGroupWithIdentifier:(id)identifier;
- (Class)classForAceClassWithName:(id)name inGroupWithIdentifier:(id)identifier;
@end

#endif /* SAClassRegistry_h */
