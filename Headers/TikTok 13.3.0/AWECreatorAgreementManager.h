//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEAppAwemeSettingMessage-Protocol.h"
#import "AWEPublishTaskMessage-Protocol.h"

@class AWECreatorAgreementAlertView, AWEPromoteSettings, NSString;

@interface AWECreatorAgreementManager : NSObject <AWEAppAwemeSettingMessage, AWEPublishTaskMessage>
{
    _Bool _needShowAuthorAgreeAlert;
    _Bool _enteredLinkWebVC;
    AWECreatorAgreementAlertView *_alert;
    AWEPromoteSettings *_settings;
}

+ (id)sharedManager;
@property(retain, nonatomic) AWEPromoteSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) AWECreatorAgreementAlertView *alert; // @synthesize alert=_alert;
@property(nonatomic) _Bool enteredLinkWebVC; // @synthesize enteredLinkWebVC=_enteredLinkWebVC;
@property(nonatomic) _Bool needShowAuthorAgreeAlert; // @synthesize needShowAuthorAgreeAlert=_needShowAuthorAgreeAlert;
- (void).cxx_destruct;
- (void)task:(id)arg1 didBeginWithInfo:(id)arg2;
- (void)_updateAlertView;
- (void)awemeSettingDidChange;
- (void)_recordPopupWithConfirmStatus:(_Bool)arg1;
- (_Bool)_checkPopupConditionGivenMaxPopupTimes:(unsigned long long)arg1 popupIntervalDays:(unsigned long long)arg2;
- (void)_markNeedShowAuthorAgreeAlert;
- (void)_cancelForCreatorTerm;
- (void)_agreeForCreatorTerm;
- (void)_transferToTermsUrl;
- (void)showAlertView;
- (void)checkWhetherShowAlertView;
- (void)showAlertViewWhenEnteredAgreementWebViewController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

