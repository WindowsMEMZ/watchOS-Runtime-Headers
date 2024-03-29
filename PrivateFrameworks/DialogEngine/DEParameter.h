//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.12.1.0.0
//
#ifndef DEParameter_h
#define DEParameter_h
@import Foundation;

@class NSString;
@protocol struct shared_ptr<siri::dialogengine::Parameter> { struct Parameter * x0; struct __shared_weak_count * x1; }, {shared_ptr<siri::dialogengine::Parameter>="__ptr_"^{Parameter}"__cntrl_"^{__shared_weak_count}};

@interface DEParameter : NSObject

@property struct shared_ptr<siri::dialogengine::Parameter> { struct Parameter * x0; struct __shared_weak_count * x1; } This;
@property (retain) NSString *name;
@property (retain) NSString *type;
@property (retain) NSString *description;
@property (retain) NSString *semanticConcept;
@property (readonly) NSString *defaultValue;
@property (readonly) BOOL overridable;

/* instance methods */
- (id)init;
- (id)initWithSharedPtr:(void *)ptr;
- (void *)getSharedPtr;
@end

#endif /* DEParameter_h */
