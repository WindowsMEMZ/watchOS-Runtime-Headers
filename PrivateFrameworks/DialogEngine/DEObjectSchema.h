//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.12.1.0.0
//
#ifndef DEObjectSchema_h
#define DEObjectSchema_h
@import Foundation;

@class NSString;
@protocol struct shared_ptr<siri::dialogengine::ObjectSchema> { struct ObjectSchema * x0; struct __shared_weak_count * x1; }, {shared_ptr<siri::dialogengine::ObjectSchema>="__ptr_"^{ObjectSchema}"__cntrl_"^{__shared_weak_count}};

@interface DEObjectSchema : NSObject

@property struct shared_ptr<siri::dialogengine::ObjectSchema> { struct ObjectSchema * x0; struct __shared_weak_count * x1; } This;
@property (readonly) NSString *name;
@property (readonly) NSString *baseObject;
@property (readonly) NSString *description;

/* class methods */
+ (id)schema:(id)schema typeName:(id)name;

/* instance methods */
- (id)init;
- (id)initWithPtr:(struct shared_ptr<siri::dialogengine::ObjectSchema> { struct ObjectSchema * x0; struct __shared_weak_count * x1; })ptr;
- (id)propertyNames:(id)names;
- (id)property:(id)property name:(id)name;
- (id)inputNames:(id)names;
- (id)input:(id)input name:(id)name;
@end

#endif /* DEObjectSchema_h */
