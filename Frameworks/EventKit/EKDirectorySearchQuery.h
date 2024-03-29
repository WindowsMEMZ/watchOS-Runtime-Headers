//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKDirectorySearchQuery_h
#define EKDirectorySearchQuery_h
@import Foundation;

@class NSSet;

@interface EKDirectorySearchQuery : NSObject

@property (retain, nonatomic) NSSet *terms;
@property (nonatomic) BOOL findGroups;
@property (nonatomic) BOOL findLocations;
@property (nonatomic) BOOL findResources;
@property (nonatomic) BOOL findUsers;
@property (nonatomic) unsigned long long resultLimit;

/* instance methods */
@end

#endif /* EKDirectorySearchQuery_h */
