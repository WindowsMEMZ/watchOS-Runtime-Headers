//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.31.1.0.0
//
#ifndef IEVariable_h
#define IEVariable_h
@import Foundation;

@class NSString;

@interface IEVariable : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) id value;
@property (nonatomic) BOOL persistent;

/* instance methods */
- (id)initWithName:(id)name withType:(id)type;
- (id)initWithName:(id)name withType:(id)type withValue:(id)value;
@end

#endif /* IEVariable_h */
