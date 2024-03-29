//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 827.9.0.0.0
//
#ifndef _UNNotificationContactServiceMatchDetails_h
#define _UNNotificationContactServiceMatchDetails_h
@import Foundation;

@class NSString;

@interface _UNNotificationContactServiceMatchDetails : NSObject

@property (copy, nonatomic) NSString *cnContactIdentifier;
@property (copy, nonatomic) NSString *cnContactFullname;
@property (nonatomic) BOOL isSuggestedMatch;

/* instance methods */
- (id)initWithCnContactIdentifier:(id)identifier cnContactFullname:(id)fullname isSuggestedContact:(BOOL)contact;
@end

#endif /* _UNNotificationContactServiceMatchDetails_h */
