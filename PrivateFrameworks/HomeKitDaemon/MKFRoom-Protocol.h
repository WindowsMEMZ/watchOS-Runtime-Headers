//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFRoom_Protocol_h
#define MKFRoom_Protocol_h
@import Foundation;

@protocol MKFRoom <MKFModel, MKFRoomPublicExtensions>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *accessories;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *homeDefault;
@property (readonly, retain, nonatomic) NSArray *zones;
@property (readonly, copy, nonatomic) MKFRoomDatabaseID *databaseID;

/* instance methods */
- (id)materializeOrCreateApplicationDataRelation:(BOOL *)relation;
@end

#endif /* MKFRoom_Protocol_h */
