//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetCollaborationParticipantsContext_h
#define SHSheetCollaborationParticipantsContext_h
@import Foundation;

@class NSString;

@interface SHSheetCollaborationParticipantsContext : NSObject

@property (readonly, copy, nonatomic) NSString *headerTitle;
@property (readonly, copy, nonatomic) NSString *supplementaryText;
@property (readonly, copy, nonatomic) NSString *confirmButtonText;
@property (readonly, copy, nonatomic) NSString *loadingText;

/* class methods */
+ (id)defaultContext;

/* instance methods */
- (id)initWithHeaderTitle:(id)title supplementaryText:(id)text confirmButtonText:(id)text loadingText:(id)text;
@end

#endif /* SHSheetCollaborationParticipantsContext_h */
