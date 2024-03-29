//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPIdentifierSet_Protocol_h
#define MusicKit_SoftLinking_MPIdentifierSet_Protocol_h
@import Foundation;

@protocol MusicKit_SoftLinking_MPIdentifierSet <NSObject>

@property (readonly, copy, nonatomic) MusicKit_SoftLinking_CatalogID *musicKit_catalogID;
@property (readonly, copy, nonatomic) NSString *musicKit_cloudID;
@property (readonly, copy, nonatomic) NSString *musicKit_libraryID;
@property (readonly, copy, nonatomic) NSString *musicKit_purchasedAdamID;
@property (readonly, copy, nonatomic) NSString *musicKit_assetAdamID;
@property (readonly, copy, nonatomic) MusicKit_SoftLinking_DeviceLocalID *musicKit_deviceLocalID;
@property (readonly, copy, nonatomic) MusicKit_SoftLinking_DeviceLocalID *musicKit_containedDeviceLocalID;
@property (readonly, copy, nonatomic) NSString *musicKit_syncID;
@property (readonly, copy, nonatomic) NSString *musicKit_playbackID;
@property (readonly, copy, nonatomic) NSArray *musicKit_formerIDs;
@property (readonly, nonatomic) BOOL musicKit_hasValidIdentifier;
@property (readonly, copy, nonatomic) NSArray *musicKit_identifierSetSources;

/* instance methods */
- (BOOL)intersectsSet:(id)set;
- (id)unionSet:(id)set;
- (id)archivedDataWithError:(id *)error;
@end

#endif /* MusicKit_SoftLinking_MPIdentifierSet_Protocol_h */
