//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSXPCTimer_h
#define DNDSXPCTimer_h
@import Foundation;

@class NSDate, NSString;

@interface DNDSXPCTimer : NSObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) BOOL userVisible;

/* instance methods */
- (id)initWithFireDate:(id)date serviceIdentifier:(id)identifier userVisible:(BOOL)visible;
- (BOOL)isUserVisible;
@end

#endif /* DNDSXPCTimer_h */
