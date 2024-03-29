//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPServerObjectDatabaseAsset_h
#define MPServerObjectDatabaseAsset_h
@import Foundation;

@class NSArray, NSData, NSString, NSURL;

@interface MPServerObjectDatabaseAsset : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *hashedPersonID;
@property (readonly, nonatomic) long long flavor;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSData *miniSINF;
@property (readonly, copy, nonatomic) NSArray *sinfs;

/* instance methods */
- (id)initWithIdentifier:(id)identifier hashedPersonID:(id)id flavor:(long long)flavor url:(id)url miniSINF:(id)sinf;
- (id)initWithIdentifier:(id)identifier hashedPersonID:(id)id flavor:(long long)flavor url:(id)url sinfs:(id)sinfs;
- (id)_initWithIdentifier:(id)identifier hashedPersonID:(id)id flavor:(long long)flavor url:(id)url miniSINF:(id)sinf sinfs:(id)sinfs;
- (id)initWithSQLRowResult:(id)result;
- (id)description;
@end

#endif /* MPServerObjectDatabaseAsset_h */
