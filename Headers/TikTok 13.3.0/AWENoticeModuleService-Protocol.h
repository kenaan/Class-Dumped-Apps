//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWEListDataController, AWEUserModel, NSObject, NSString, UILabel;
@protocol AWEIMInteractNotificationManagerProtocol;

@protocol AWENoticeModuleService <HTSService>
- (void)showQuickEditAliasAlertViewWithContactName:(NSString *)arg1 isEnterprise:(_Bool)arg2 currentUser:(AWEUserModel *)arg3;
- (void)clearUnreadOfficialAssistantWithNoticeGroup:(long long)arg1 unreadCount:(long long)arg2 completion:(void (^)(void))arg3;
- (AWEListDataController *)officialDataControllerForNoticeType:(long long)arg1;
- (struct CGSize)relationLabelSizeWithText:(NSString *)arg1;
- (UILabel *)createRelationLabel;
- (NSObject<AWEIMInteractNotificationManagerProtocol> *)getInteractNotificationManager;
@end

