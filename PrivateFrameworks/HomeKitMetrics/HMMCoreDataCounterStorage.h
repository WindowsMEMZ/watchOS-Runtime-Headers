//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMCoreDataCounterStorage_h
#define HMMCoreDataCounterStorage_h
@import Foundation;

@class NSManagedObjectContext, NSPersistentContainer, NSString;
@protocol HMMRadarInitiating;

@interface HMMCoreDataCounterStorage : NSObject {
  /* instance variables */
  long long _currentContextToken;
  NSManagedObjectContext *_currentContext;
  long long _persistentContainerToken;
  NSPersistentContainer *_persistentContainer;
  NSObject<HMMRadarInitiating> *_radarInitiator;
}

@property (readonly, nonatomic) NSString *dataModelName;
@property (readonly, nonatomic) NSString *path;

/* instance methods */
- (id)initWithModelName:(id)name atPath:(id)path radarInitiator:(id)initiator;
- (id)persistentContainer;
- (id)currentContext;
- (void)executeWithManagedObjectContext:(id /* block */)context;
- (void)executeWithManagedObjectContextAndWait:(id /* block */)wait;
- (void)save;
@end

#endif /* HMMCoreDataCounterStorage_h */
