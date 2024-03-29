//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REDuetContextQuery_h
#define REDuetContextQuery_h
@import Foundation;

@class NSArray, NSSet, NSString, NSUUID, _CDContextualPredicate, _CDMDCSContextualPredicate;

@interface REDuetContextQuery : NSObject {
  /* instance variables */
  NSArray *_searchKeyPaths;
  id /* block */ _evalBlock;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) _CDContextualPredicate *predicate;
@property (readonly, nonatomic) _CDMDCSContextualPredicate *remotePredicate;
@property (readonly, nonatomic) NSString *registrationID;
@property (readonly, nonatomic) NSSet *keyPaths;
@property (retain, nonatomic) NSSet *devices;

/* instance methods */
- (id)initWithPredicate:(id)predicate remotePredicate:(id)predicate name:(id)name evaluationBlock:(id /* block */)block;
- (id)_localRegistrationWithCallback:(id /* block */)callback;
- (id)_remoteRegistrationForDevice:(id)device callback:(id /* block */)callback;
- (id)createRegistrationsWithCallback:(id /* block */)callback;
- (id)_keyPathsForDevice:(id)device;
- (id)_localKeyPaths;
- (id)_sortedKeyPaths:(id)paths;
- (id)valueFromUserContext:(id)context;
@end

#endif /* REDuetContextQuery_h */
