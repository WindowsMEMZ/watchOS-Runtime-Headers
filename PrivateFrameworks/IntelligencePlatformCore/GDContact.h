//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDContact_h
#define GDContact_h
@import Foundation;

@class NSString;

@interface GDContact : NSObject

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) long long contactType;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long participantStatus;

/* instance methods */
- (id)initWithHandle:(id)handle;
- (id)initWithHandle:(id)handle contactType:(long long)type displayName:(id)name participantStatus:(long long)status;
@end

#endif /* GDContact_h */
