//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADFetchedObjectSerializer_h
#define CADFetchedObjectSerializer_h
@import Foundation;

#include "ClientConnection.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet;

@interface CADFetchedObjectSerializer : NSObject

@property (readonly, nonatomic) ClientConnection *connection;
@property (readonly, nonatomic) NSArray *defaultPropertiesToLoad;
@property (readonly, nonatomic) NSDictionary *relatedObjectPropertiesToLoad;
@property (readonly, nonatomic) NSMutableArray *wrappers;
@property (readonly, nonatomic) NSMutableSet *seenObjectIDs;
@property (readonly, nonatomic) NSArray *fetchedObjectWrappers;

/* instance methods */
- (id)initWithConnection:(id)connection defaultPropertiesToLoad:(id)load;
- (id)initWithConnection:(id)connection defaultPropertiesToLoad:(id)load relatedObjectPropertiesToLoad:(id)load;
- (id)addEntity:(void *)entity;
- (id)_properties:(id)_properties forEntityIfNotSeen:(void *)seen objectExists:(BOOL *)exists;
- (id)_fetchedObjectDictionaryForEntity:(void *)entity;
@end

#endif /* CADFetchedObjectSerializer_h */
