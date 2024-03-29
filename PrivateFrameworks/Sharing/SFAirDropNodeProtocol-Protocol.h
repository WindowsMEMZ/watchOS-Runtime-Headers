//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFAirDropNodeProtocol_Protocol_h
#define SFAirDropNodeProtocol_Protocol_h
@import Foundation;

@protocol SFAirDropNodeProtocol <NSObject>

@property (retain) NSUUID *nodeIdentifier;
@property (copy) NSString *contactIdentifier;
@property (copy) NSString *displayName;
@property (copy) NSString *realName;
@property (copy) NSString *model;
@property (retain) NSSet *formattedHandles;
@property (retain) NSNumber *suggestionIndex;
@property (retain) NSString *transportBundleID;
@property BOOL classroom;
@property BOOL disabled;
@property BOOL suggestion;
@property long long selectionReason;
@property (retain) struct CGImage * displayIcon;
@property (retain) NSUUID *endpointUUID;
@property (retain) CNContact *contact;

/* instance methods */
- (id)displayNameForLocale:(id)locale;
- (BOOL)isClassroom;
- (BOOL)isDisabled;
- (BOOL)isSuggestion;
@end

#endif /* SFAirDropNodeProtocol_Protocol_h */
