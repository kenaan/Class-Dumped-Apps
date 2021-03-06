//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEDigitalWellbeingListControlMessage-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEPrivacySettingUserControlViewController, NSMutableArray, NSString, UITableView;

@interface AWEIMPrivacySettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEDigitalWellbeingListControlMessage, BTDRouterViewControllerProtocol>
{
    UITableView *_tableView;
    NSMutableArray *_dataArray;
    AWEPrivacySettingUserControlViewController *_privacySettingUserControlViewController;
    long long _sourceType;
    CDUnknownBlockType _callbackBlock;
}

+ (void)__awe__codeRunnerRun_69;
@property(nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) AWEPrivacySettingUserControlViewController *privacySettingUserControlViewController; // @synthesize privacySettingUserControlViewController=_privacySettingUserControlViewController;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)listControlDidChange;
- (void)p_addModel:(id)arg1 intoArray:(id)arg2;
- (void)refreshSettings:(CDUnknownBlockType)arg1;
- (id)_settingModel:(id)arg1 withIndex:(long long)arg2 isSelected:(_Bool)arg3;
- (struct CGSize)labelStringSize:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)i18NUnloginDataSource;
- (void)_configData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

