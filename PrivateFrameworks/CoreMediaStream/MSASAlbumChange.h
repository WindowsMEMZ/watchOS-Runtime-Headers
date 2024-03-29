//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSASAlbumChange_h
#define MSASAlbumChange_h
@import Foundation;

#include "MSASInvitation.h"

@class NSString;

@interface MSASAlbumChange : NSObject

@property (copy, nonatomic) NSString *ownerEmail;
@property (copy, nonatomic) NSString *ownerPersonID;
@property (copy, nonatomic) NSString *ownerFullName;
@property (copy, nonatomic) NSString *ownerFirstName;
@property (copy, nonatomic) NSString *ownerLastName;
@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL wasDeleted;
@property (retain, nonatomic) MSASInvitation *invitation;

/* instance methods */
- (id)description;
@end

#endif /* MSASAlbumChange_h */
