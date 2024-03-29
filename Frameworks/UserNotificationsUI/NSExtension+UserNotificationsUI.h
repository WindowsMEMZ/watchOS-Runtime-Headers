//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 827.9.0.0.0
//
#ifndef NSExtension_UserNotificationsUI_h
#define NSExtension_UserNotificationsUI_h
@import Foundation;

@interface NSExtension (UserNotificationsUI)
/* instance methods */
- (id)_un_extensionContainerBundleIdentifier;
- (id)_un_customSectionIdentifiers;
- (id)un_allowedSourceIdentifiers;
- (id)un_supportedCategoryIdentifiers;
- (id)_un_contentSizeRatio;
- (double)un_effectiveContentSizeRatio;
- (BOOL)un_isDefaultContentHidden;
- (BOOL)un_isDefaultTitleOverridden;
- (BOOL)un_isUserInteractionEnabled;
@end

#endif /* NSExtension_UserNotificationsUI_h */
