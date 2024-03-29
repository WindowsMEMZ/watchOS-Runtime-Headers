//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLToolsRetainingContainer_Protocol_h
#define MTLToolsRetainingContainer_Protocol_h
@import Foundation;

@protocol MTLToolsRetainingContainer 

@property (readonly, nonatomic) NSMutableSet *retainedObjects;

/* instance methods */
- (BOOL)addRetainedObject:(id)object;
- (void)clearRetainedObjects;
@end

#endif /* MTLToolsRetainingContainer_Protocol_h */
