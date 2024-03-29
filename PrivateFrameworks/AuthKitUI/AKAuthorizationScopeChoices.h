//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAuthorizationScopeChoices_h
#define AKAuthorizationScopeChoices_h
@import Foundation;

@class AKAuthorizationUserResponse, AKUserInformation, NSArray, NSString;
@protocol AKCredentialRequestProtocol;

@interface AKAuthorizationScopeChoices : NSObject

@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) AKUserInformation *userInformation;
@property (retain, nonatomic) NSObject<AKCredentialRequestProtocol> *selectedRequest;
@property (nonatomic) unsigned long long indexOfChosenEmail;
@property (nonatomic) unsigned long long indexOfChosenLogin;
@property (nonatomic) BOOL wantsPrivateEmail;
@property (readonly, nonatomic) unsigned long long emailCount;
@property (readonly, nonatomic) NSString *chosenEmail;
@property (readonly, nonatomic) NSString *forwardingEmail;
@property (readonly, nonatomic) AKAuthorizationUserResponse *userResponse;
@property (readonly, nonatomic) unsigned long long personNameComponentsOrder;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedChosenEmail;

/* class methods */
+ (id)localizedGivenNameLabel;
+ (id)localizedFamilyNameLabel;
+ (id)obfuscatedEmail:(id)email;
+ (id)_dotsWithLength:(unsigned long long)length;

/* instance methods */
- (id)initWithScopes:(id)scopes userInformation:(id)information;
- (void)setGivenName:(id)name familyName:(id)name;
- (id)_userSelection;
- (id)emailAtIndex:(unsigned long long)index;
- (id)_personNameComponents;
- (id)description;
@end

#endif /* AKAuthorizationScopeChoices_h */
